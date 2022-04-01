﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/AssociateOriginationIdentityResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateConfigurationSetResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreateOptOutListResult.h>
#include <aws/pinpoint-sms-voice-v2/model/CreatePoolResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteConfigurationSetResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultMessageTypeResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteDefaultSenderIdResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteKeywordResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptOutListResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteOptedOutNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeletePoolResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteTextMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DeleteVoiceMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeConfigurationSetsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeKeywordsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptOutListsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePhoneNumbersResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribePoolsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSenderIdsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsResult.h>
#include <aws/pinpoint-sms-voice-v2/model/DisassociateOriginationIdentityResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ListPoolOriginationIdentitiesResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ListTagsForResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/PutKeywordResult.h>
#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/ReleasePhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestPhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SendTextMessageResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SendVoiceMessageResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageTypeResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetDefaultSenderIdResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetTextMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/SetVoiceMessageSpendLimitOverrideResult.h>
#include <aws/pinpoint-sms-voice-v2/model/TagResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UntagResourceResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateEventDestinationResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePhoneNumberResult.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdatePoolResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace PinpointSMSVoiceV2
{

namespace Model
{
        class AssociateOriginationIdentityRequest;
        class CreateConfigurationSetRequest;
        class CreateEventDestinationRequest;
        class CreateOptOutListRequest;
        class CreatePoolRequest;
        class DeleteConfigurationSetRequest;
        class DeleteDefaultMessageTypeRequest;
        class DeleteDefaultSenderIdRequest;
        class DeleteEventDestinationRequest;
        class DeleteKeywordRequest;
        class DeleteOptOutListRequest;
        class DeleteOptedOutNumberRequest;
        class DeletePoolRequest;
        class DeleteTextMessageSpendLimitOverrideRequest;
        class DeleteVoiceMessageSpendLimitOverrideRequest;
        class DescribeAccountAttributesRequest;
        class DescribeAccountLimitsRequest;
        class DescribeConfigurationSetsRequest;
        class DescribeKeywordsRequest;
        class DescribeOptOutListsRequest;
        class DescribeOptedOutNumbersRequest;
        class DescribePhoneNumbersRequest;
        class DescribePoolsRequest;
        class DescribeSenderIdsRequest;
        class DescribeSpendLimitsRequest;
        class DisassociateOriginationIdentityRequest;
        class ListPoolOriginationIdentitiesRequest;
        class ListTagsForResourceRequest;
        class PutKeywordRequest;
        class PutOptedOutNumberRequest;
        class ReleasePhoneNumberRequest;
        class RequestPhoneNumberRequest;
        class SendTextMessageRequest;
        class SendVoiceMessageRequest;
        class SetDefaultMessageTypeRequest;
        class SetDefaultSenderIdRequest;
        class SetTextMessageSpendLimitOverrideRequest;
        class SetVoiceMessageSpendLimitOverrideRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateEventDestinationRequest;
        class UpdatePhoneNumberRequest;
        class UpdatePoolRequest;

        typedef Aws::Utils::Outcome<AssociateOriginationIdentityResult, PinpointSMSVoiceV2Error> AssociateOriginationIdentityOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationSetResult, PinpointSMSVoiceV2Error> CreateConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<CreateEventDestinationResult, PinpointSMSVoiceV2Error> CreateEventDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateOptOutListResult, PinpointSMSVoiceV2Error> CreateOptOutListOutcome;
        typedef Aws::Utils::Outcome<CreatePoolResult, PinpointSMSVoiceV2Error> CreatePoolOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, PinpointSMSVoiceV2Error> DeleteConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteDefaultMessageTypeResult, PinpointSMSVoiceV2Error> DeleteDefaultMessageTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteDefaultSenderIdResult, PinpointSMSVoiceV2Error> DeleteDefaultSenderIdOutcome;
        typedef Aws::Utils::Outcome<DeleteEventDestinationResult, PinpointSMSVoiceV2Error> DeleteEventDestinationOutcome;
        typedef Aws::Utils::Outcome<DeleteKeywordResult, PinpointSMSVoiceV2Error> DeleteKeywordOutcome;
        typedef Aws::Utils::Outcome<DeleteOptOutListResult, PinpointSMSVoiceV2Error> DeleteOptOutListOutcome;
        typedef Aws::Utils::Outcome<DeleteOptedOutNumberResult, PinpointSMSVoiceV2Error> DeleteOptedOutNumberOutcome;
        typedef Aws::Utils::Outcome<DeletePoolResult, PinpointSMSVoiceV2Error> DeletePoolOutcome;
        typedef Aws::Utils::Outcome<DeleteTextMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> DeleteTextMessageSpendLimitOverrideOutcome;
        typedef Aws::Utils::Outcome<DeleteVoiceMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> DeleteVoiceMessageSpendLimitOverrideOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountAttributesResult, PinpointSMSVoiceV2Error> DescribeAccountAttributesOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountLimitsResult, PinpointSMSVoiceV2Error> DescribeAccountLimitsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationSetsResult, PinpointSMSVoiceV2Error> DescribeConfigurationSetsOutcome;
        typedef Aws::Utils::Outcome<DescribeKeywordsResult, PinpointSMSVoiceV2Error> DescribeKeywordsOutcome;
        typedef Aws::Utils::Outcome<DescribeOptOutListsResult, PinpointSMSVoiceV2Error> DescribeOptOutListsOutcome;
        typedef Aws::Utils::Outcome<DescribeOptedOutNumbersResult, PinpointSMSVoiceV2Error> DescribeOptedOutNumbersOutcome;
        typedef Aws::Utils::Outcome<DescribePhoneNumbersResult, PinpointSMSVoiceV2Error> DescribePhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<DescribePoolsResult, PinpointSMSVoiceV2Error> DescribePoolsOutcome;
        typedef Aws::Utils::Outcome<DescribeSenderIdsResult, PinpointSMSVoiceV2Error> DescribeSenderIdsOutcome;
        typedef Aws::Utils::Outcome<DescribeSpendLimitsResult, PinpointSMSVoiceV2Error> DescribeSpendLimitsOutcome;
        typedef Aws::Utils::Outcome<DisassociateOriginationIdentityResult, PinpointSMSVoiceV2Error> DisassociateOriginationIdentityOutcome;
        typedef Aws::Utils::Outcome<ListPoolOriginationIdentitiesResult, PinpointSMSVoiceV2Error> ListPoolOriginationIdentitiesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, PinpointSMSVoiceV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutKeywordResult, PinpointSMSVoiceV2Error> PutKeywordOutcome;
        typedef Aws::Utils::Outcome<PutOptedOutNumberResult, PinpointSMSVoiceV2Error> PutOptedOutNumberOutcome;
        typedef Aws::Utils::Outcome<ReleasePhoneNumberResult, PinpointSMSVoiceV2Error> ReleasePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<RequestPhoneNumberResult, PinpointSMSVoiceV2Error> RequestPhoneNumberOutcome;
        typedef Aws::Utils::Outcome<SendTextMessageResult, PinpointSMSVoiceV2Error> SendTextMessageOutcome;
        typedef Aws::Utils::Outcome<SendVoiceMessageResult, PinpointSMSVoiceV2Error> SendVoiceMessageOutcome;
        typedef Aws::Utils::Outcome<SetDefaultMessageTypeResult, PinpointSMSVoiceV2Error> SetDefaultMessageTypeOutcome;
        typedef Aws::Utils::Outcome<SetDefaultSenderIdResult, PinpointSMSVoiceV2Error> SetDefaultSenderIdOutcome;
        typedef Aws::Utils::Outcome<SetTextMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> SetTextMessageSpendLimitOverrideOutcome;
        typedef Aws::Utils::Outcome<SetVoiceMessageSpendLimitOverrideResult, PinpointSMSVoiceV2Error> SetVoiceMessageSpendLimitOverrideOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, PinpointSMSVoiceV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, PinpointSMSVoiceV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEventDestinationResult, PinpointSMSVoiceV2Error> UpdateEventDestinationOutcome;
        typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, PinpointSMSVoiceV2Error> UpdatePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<UpdatePoolResult, PinpointSMSVoiceV2Error> UpdatePoolOutcome;

        typedef std::future<AssociateOriginationIdentityOutcome> AssociateOriginationIdentityOutcomeCallable;
        typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
        typedef std::future<CreateEventDestinationOutcome> CreateEventDestinationOutcomeCallable;
        typedef std::future<CreateOptOutListOutcome> CreateOptOutListOutcomeCallable;
        typedef std::future<CreatePoolOutcome> CreatePoolOutcomeCallable;
        typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
        typedef std::future<DeleteDefaultMessageTypeOutcome> DeleteDefaultMessageTypeOutcomeCallable;
        typedef std::future<DeleteDefaultSenderIdOutcome> DeleteDefaultSenderIdOutcomeCallable;
        typedef std::future<DeleteEventDestinationOutcome> DeleteEventDestinationOutcomeCallable;
        typedef std::future<DeleteKeywordOutcome> DeleteKeywordOutcomeCallable;
        typedef std::future<DeleteOptOutListOutcome> DeleteOptOutListOutcomeCallable;
        typedef std::future<DeleteOptedOutNumberOutcome> DeleteOptedOutNumberOutcomeCallable;
        typedef std::future<DeletePoolOutcome> DeletePoolOutcomeCallable;
        typedef std::future<DeleteTextMessageSpendLimitOverrideOutcome> DeleteTextMessageSpendLimitOverrideOutcomeCallable;
        typedef std::future<DeleteVoiceMessageSpendLimitOverrideOutcome> DeleteVoiceMessageSpendLimitOverrideOutcomeCallable;
        typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
        typedef std::future<DescribeAccountLimitsOutcome> DescribeAccountLimitsOutcomeCallable;
        typedef std::future<DescribeConfigurationSetsOutcome> DescribeConfigurationSetsOutcomeCallable;
        typedef std::future<DescribeKeywordsOutcome> DescribeKeywordsOutcomeCallable;
        typedef std::future<DescribeOptOutListsOutcome> DescribeOptOutListsOutcomeCallable;
        typedef std::future<DescribeOptedOutNumbersOutcome> DescribeOptedOutNumbersOutcomeCallable;
        typedef std::future<DescribePhoneNumbersOutcome> DescribePhoneNumbersOutcomeCallable;
        typedef std::future<DescribePoolsOutcome> DescribePoolsOutcomeCallable;
        typedef std::future<DescribeSenderIdsOutcome> DescribeSenderIdsOutcomeCallable;
        typedef std::future<DescribeSpendLimitsOutcome> DescribeSpendLimitsOutcomeCallable;
        typedef std::future<DisassociateOriginationIdentityOutcome> DisassociateOriginationIdentityOutcomeCallable;
        typedef std::future<ListPoolOriginationIdentitiesOutcome> ListPoolOriginationIdentitiesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutKeywordOutcome> PutKeywordOutcomeCallable;
        typedef std::future<PutOptedOutNumberOutcome> PutOptedOutNumberOutcomeCallable;
        typedef std::future<ReleasePhoneNumberOutcome> ReleasePhoneNumberOutcomeCallable;
        typedef std::future<RequestPhoneNumberOutcome> RequestPhoneNumberOutcomeCallable;
        typedef std::future<SendTextMessageOutcome> SendTextMessageOutcomeCallable;
        typedef std::future<SendVoiceMessageOutcome> SendVoiceMessageOutcomeCallable;
        typedef std::future<SetDefaultMessageTypeOutcome> SetDefaultMessageTypeOutcomeCallable;
        typedef std::future<SetDefaultSenderIdOutcome> SetDefaultSenderIdOutcomeCallable;
        typedef std::future<SetTextMessageSpendLimitOverrideOutcome> SetTextMessageSpendLimitOverrideOutcomeCallable;
        typedef std::future<SetVoiceMessageSpendLimitOverrideOutcome> SetVoiceMessageSpendLimitOverrideOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateEventDestinationOutcome> UpdateEventDestinationOutcomeCallable;
        typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
        typedef std::future<UpdatePoolOutcome> UpdatePoolOutcomeCallable;
} // namespace Model

  class PinpointSMSVoiceV2Client;

    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::AssociateOriginationIdentityRequest&, const Model::AssociateOriginationIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOriginationIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateEventDestinationRequest&, const Model::CreateEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreateOptOutListRequest&, const Model::CreateOptOutListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOptOutListResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::CreatePoolRequest&, const Model::CreatePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePoolResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteDefaultMessageTypeRequest&, const Model::DeleteDefaultMessageTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDefaultMessageTypeResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteDefaultSenderIdRequest&, const Model::DeleteDefaultSenderIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDefaultSenderIdResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteEventDestinationRequest&, const Model::DeleteEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteKeywordRequest&, const Model::DeleteKeywordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeywordResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteOptOutListRequest&, const Model::DeleteOptOutListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptOutListResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteOptedOutNumberRequest&, const Model::DeleteOptedOutNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOptedOutNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeletePoolRequest&, const Model::DeletePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePoolResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteTextMessageSpendLimitOverrideRequest&, const Model::DeleteTextMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTextMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DeleteVoiceMessageSpendLimitOverrideRequest&, const Model::DeleteVoiceMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeAccountAttributesRequest&, const Model::DescribeAccountAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountAttributesResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeAccountLimitsRequest&, const Model::DescribeAccountLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountLimitsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeConfigurationSetsRequest&, const Model::DescribeConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeKeywordsRequest&, const Model::DescribeKeywordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeKeywordsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeOptOutListsRequest&, const Model::DescribeOptOutListsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptOutListsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeOptedOutNumbersRequest&, const Model::DescribeOptedOutNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOptedOutNumbersResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribePhoneNumbersRequest&, const Model::DescribePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribePoolsRequest&, const Model::DescribePoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePoolsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeSenderIdsRequest&, const Model::DescribeSenderIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSenderIdsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DescribeSpendLimitsRequest&, const Model::DescribeSpendLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpendLimitsResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::DisassociateOriginationIdentityRequest&, const Model::DisassociateOriginationIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOriginationIdentityResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ListPoolOriginationIdentitiesRequest&, const Model::ListPoolOriginationIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoolOriginationIdentitiesResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::PutKeywordRequest&, const Model::PutKeywordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKeywordResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::PutOptedOutNumberRequest&, const Model::PutOptedOutNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOptedOutNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::ReleasePhoneNumberRequest&, const Model::ReleasePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleasePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::RequestPhoneNumberRequest&, const Model::RequestPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SendTextMessageRequest&, const Model::SendTextMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendTextMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SendVoiceMessageRequest&, const Model::SendVoiceMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendVoiceMessageResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetDefaultMessageTypeRequest&, const Model::SetDefaultMessageTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultMessageTypeResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetDefaultSenderIdRequest&, const Model::SetDefaultSenderIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetDefaultSenderIdResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetTextMessageSpendLimitOverrideRequest&, const Model::SetTextMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTextMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::SetVoiceMessageSpendLimitOverrideRequest&, const Model::SetVoiceMessageSpendLimitOverrideOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetVoiceMessageSpendLimitOverrideResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdateEventDestinationRequest&, const Model::UpdateEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventDestinationResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const PinpointSMSVoiceV2Client*, const Model::UpdatePoolRequest&, const Model::UpdatePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePoolResponseReceivedHandler;

  /**
   * <p>Welcome to the <i>Amazon Pinpoint SMS and Voice, version 2 API Reference</i>.
   * This guide provides information about Amazon Pinpoint SMS and Voice, version 2
   * API resources, including supported HTTP methods, parameters, and schemas.</p>
   * <p>Amazon Pinpoint is an Amazon Web Services service that you can use to engage
   * with your recipients across multiple messaging channels. The Amazon Pinpoint SMS
   * and Voice, version 2 API provides programmatic access to options that are unique
   * to the SMS and voice channels and supplements the resources provided by the
   * Amazon Pinpoint API.</p> <p>If you're new to Amazon Pinpoint, it's also helpful
   * to review the <a
   * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">
   * Amazon Pinpoint Developer Guide</a>. The <i>Amazon Pinpoint Developer Guide</i>
   * provides tutorials, code samples, and procedures that demonstrate how to use
   * Amazon Pinpoint features programmatically and how to integrate Amazon Pinpoint
   * functionality into mobile apps and other types of applications. The guide also
   * provides key information, such as Amazon Pinpoint integration with other Amazon
   * Web Services services, and the quotas that apply to use of the service.</p>
   */
  class AWS_PINPOINTSMSVOICEV2_API PinpointSMSVoiceV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PinpointSMSVoiceV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PinpointSMSVoiceV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~PinpointSMSVoiceV2Client();


        /**
         * <p>Associates the specified origination identity with a pool.</p> <p>If the
         * origination identity is a phone number and is already associated with another
         * pool, an Error is returned. A sender ID can be associated with multiple
         * pools.</p> <p>If the origination identity configuration doesn't match the pool's
         * configuration, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AssociateOriginationIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateOriginationIdentityOutcome AssociateOriginationIdentity(const Model::AssociateOriginationIdentityRequest& request) const;

        /**
         * <p>Associates the specified origination identity with a pool.</p> <p>If the
         * origination identity is a phone number and is already associated with another
         * pool, an Error is returned. A sender ID can be associated with multiple
         * pools.</p> <p>If the origination identity configuration doesn't match the pool's
         * configuration, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AssociateOriginationIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateOriginationIdentityOutcomeCallable AssociateOriginationIdentityCallable(const Model::AssociateOriginationIdentityRequest& request) const;

        /**
         * <p>Associates the specified origination identity with a pool.</p> <p>If the
         * origination identity is a phone number and is already associated with another
         * pool, an Error is returned. A sender ID can be associated with multiple
         * pools.</p> <p>If the origination identity configuration doesn't match the pool's
         * configuration, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/AssociateOriginationIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateOriginationIdentityAsync(const Model::AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new configuration set. After you create the configuration set, you
         * can add one or more event destinations to it.</p> <p>A configuration set is a
         * set of rules that you apply to the SMS and voice messages that you send.</p>
         * <p>When you send a message, you can optionally specify a single configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Creates a new configuration set. After you create the configuration set, you
         * can add one or more event destinations to it.</p> <p>A configuration set is a
         * set of rules that you apply to the SMS and voice messages that you send.</p>
         * <p>When you send a message, you can optionally specify a single configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Creates a new configuration set. After you create the configuration set, you
         * can add one or more event destinations to it.</p> <p>A configuration set is a
         * set of rules that you apply to the SMS and voice messages that you send.</p>
         * <p>When you send a message, you can optionally specify a single configuration
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetAsync(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new event destination in a configuration set.</p> <p>An event
         * destination is a location where you send message events. The event options are
         * Amazon CloudWatch, Amazon Kinesis Data Firehose, or Amazon SNS. For example,
         * when a message is delivered successfully, you can send information about that
         * event to an event destination, or send notifications to endpoints that are
         * subscribed to an Amazon SNS topic.</p> <p>Each configuration set can contain
         * between 0 and 5 event destinations. Each event destination can contain a
         * reference to a single destination, such as a CloudWatch or Kinesis Data Firehose
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventDestinationOutcome CreateEventDestination(const Model::CreateEventDestinationRequest& request) const;

        /**
         * <p>Creates a new event destination in a configuration set.</p> <p>An event
         * destination is a location where you send message events. The event options are
         * Amazon CloudWatch, Amazon Kinesis Data Firehose, or Amazon SNS. For example,
         * when a message is delivered successfully, you can send information about that
         * event to an event destination, or send notifications to endpoints that are
         * subscribed to an Amazon SNS topic.</p> <p>Each configuration set can contain
         * between 0 and 5 event destinations. Each event destination can contain a
         * reference to a single destination, such as a CloudWatch or Kinesis Data Firehose
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventDestinationOutcomeCallable CreateEventDestinationCallable(const Model::CreateEventDestinationRequest& request) const;

        /**
         * <p>Creates a new event destination in a configuration set.</p> <p>An event
         * destination is a location where you send message events. The event options are
         * Amazon CloudWatch, Amazon Kinesis Data Firehose, or Amazon SNS. For example,
         * when a message is delivered successfully, you can send information about that
         * event to an event destination, or send notifications to endpoints that are
         * subscribed to an Amazon SNS topic.</p> <p>Each configuration set can contain
         * between 0 and 5 event destinations. Each event destination can contain a
         * reference to a single destination, such as a CloudWatch or Kinesis Data Firehose
         * destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventDestinationAsync(const Model::CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new opt-out list.</p> <p>If the opt-out list name already exists,
         * an Error is returned.</p> <p>An opt-out list is a list of phone numbers that are
         * opted out, meaning you can't send SMS or voice messages to them. If end user
         * replies with the keyword "STOP," an entry for the phone number is added to the
         * opt-out list. In addition to STOP, your recipients can use any supported opt-out
         * keyword, such as CANCEL or OPTOUT. For a list of supported opt-out keywords, see
         * <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-manage.html#channels-sms-manage-optout">
         * SMS opt out </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateOptOutList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOptOutListOutcome CreateOptOutList(const Model::CreateOptOutListRequest& request) const;

        /**
         * <p>Creates a new opt-out list.</p> <p>If the opt-out list name already exists,
         * an Error is returned.</p> <p>An opt-out list is a list of phone numbers that are
         * opted out, meaning you can't send SMS or voice messages to them. If end user
         * replies with the keyword "STOP," an entry for the phone number is added to the
         * opt-out list. In addition to STOP, your recipients can use any supported opt-out
         * keyword, such as CANCEL or OPTOUT. For a list of supported opt-out keywords, see
         * <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-manage.html#channels-sms-manage-optout">
         * SMS opt out </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateOptOutList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOptOutListOutcomeCallable CreateOptOutListCallable(const Model::CreateOptOutListRequest& request) const;

        /**
         * <p>Creates a new opt-out list.</p> <p>If the opt-out list name already exists,
         * an Error is returned.</p> <p>An opt-out list is a list of phone numbers that are
         * opted out, meaning you can't send SMS or voice messages to them. If end user
         * replies with the keyword "STOP," an entry for the phone number is added to the
         * opt-out list. In addition to STOP, your recipients can use any supported opt-out
         * keyword, such as CANCEL or OPTOUT. For a list of supported opt-out keywords, see
         * <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-manage.html#channels-sms-manage-optout">
         * SMS opt out </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreateOptOutList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOptOutListAsync(const Model::CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new pool and associates the specified origination identity to the
         * pool. A pool can include one or more phone numbers and SenderIds that are
         * associated with your Amazon Web Services account.</p> <p>The new pool inherits
         * its configuration from the specified origination identity. This includes
         * keywords, message type, opt-out list, two-way configuration, and self-managed
         * opt-out configuration. Deletion protection isn't inherited from the origination
         * identity and defaults to false.</p> <p>If the origination identity is a phone
         * number and is already associated with another pool, an Error is returned. A
         * sender ID can be associated with multiple pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreatePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePoolOutcome CreatePool(const Model::CreatePoolRequest& request) const;

        /**
         * <p>Creates a new pool and associates the specified origination identity to the
         * pool. A pool can include one or more phone numbers and SenderIds that are
         * associated with your Amazon Web Services account.</p> <p>The new pool inherits
         * its configuration from the specified origination identity. This includes
         * keywords, message type, opt-out list, two-way configuration, and self-managed
         * opt-out configuration. Deletion protection isn't inherited from the origination
         * identity and defaults to false.</p> <p>If the origination identity is a phone
         * number and is already associated with another pool, an Error is returned. A
         * sender ID can be associated with multiple pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreatePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePoolOutcomeCallable CreatePoolCallable(const Model::CreatePoolRequest& request) const;

        /**
         * <p>Creates a new pool and associates the specified origination identity to the
         * pool. A pool can include one or more phone numbers and SenderIds that are
         * associated with your Amazon Web Services account.</p> <p>The new pool inherits
         * its configuration from the specified origination identity. This includes
         * keywords, message type, opt-out list, two-way configuration, and self-managed
         * opt-out configuration. Deletion protection isn't inherited from the origination
         * identity and defaults to false.</p> <p>If the origination identity is a phone
         * number and is already associated with another pool, an Error is returned. A
         * sender ID can be associated with multiple pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/CreatePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePoolAsync(const Model::CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing configuration set.</p> <p>A configuration set is a set of
         * rules that you apply to voice and SMS messages that you send. In a configuration
         * set, you can specify a destination for specific types of events related to voice
         * and SMS messages. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Deletes an existing configuration set.</p> <p>A configuration set is a set of
         * rules that you apply to voice and SMS messages that you send. In a configuration
         * set, you can specify a destination for specific types of events related to voice
         * and SMS messages. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Deletes an existing configuration set.</p> <p>A configuration set is a set of
         * rules that you apply to voice and SMS messages that you send. In a configuration
         * set, you can specify a destination for specific types of events related to voice
         * and SMS messages. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetAsync(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing default message type on a configuration set.</p> <p> A
         * message type is a type of messages that you plan to send. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultMessageType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDefaultMessageTypeOutcome DeleteDefaultMessageType(const Model::DeleteDefaultMessageTypeRequest& request) const;

        /**
         * <p>Deletes an existing default message type on a configuration set.</p> <p> A
         * message type is a type of messages that you plan to send. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultMessageType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDefaultMessageTypeOutcomeCallable DeleteDefaultMessageTypeCallable(const Model::DeleteDefaultMessageTypeRequest& request) const;

        /**
         * <p>Deletes an existing default message type on a configuration set.</p> <p> A
         * message type is a type of messages that you plan to send. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultMessageType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDefaultMessageTypeAsync(const Model::DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing default sender ID on a configuration set.</p> <p>A
         * default sender ID is the identity that appears on recipients' devices when they
         * receive SMS messages. Support for sender ID capabilities varies by country or
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDefaultSenderIdOutcome DeleteDefaultSenderId(const Model::DeleteDefaultSenderIdRequest& request) const;

        /**
         * <p>Deletes an existing default sender ID on a configuration set.</p> <p>A
         * default sender ID is the identity that appears on recipients' devices when they
         * receive SMS messages. Support for sender ID capabilities varies by country or
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultSenderId">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDefaultSenderIdOutcomeCallable DeleteDefaultSenderIdCallable(const Model::DeleteDefaultSenderIdRequest& request) const;

        /**
         * <p>Deletes an existing default sender ID on a configuration set.</p> <p>A
         * default sender ID is the identity that appears on recipients' devices when they
         * receive SMS messages. Support for sender ID capabilities varies by country or
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteDefaultSenderId">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDefaultSenderIdAsync(const Model::DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing event destination.</p> <p>An event destination is a
         * location where you send response information about the messages that you send.
         * For example, when a message is delivered successfully, you can send information
         * about that event to an Amazon CloudWatch destination, or send notifications to
         * endpoints that are subscribed to an Amazon SNS topic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventDestinationOutcome DeleteEventDestination(const Model::DeleteEventDestinationRequest& request) const;

        /**
         * <p>Deletes an existing event destination.</p> <p>An event destination is a
         * location where you send response information about the messages that you send.
         * For example, when a message is delivered successfully, you can send information
         * about that event to an Amazon CloudWatch destination, or send notifications to
         * endpoints that are subscribed to an Amazon SNS topic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventDestinationOutcomeCallable DeleteEventDestinationCallable(const Model::DeleteEventDestinationRequest& request) const;

        /**
         * <p>Deletes an existing event destination.</p> <p>An event destination is a
         * location where you send response information about the messages that you send.
         * For example, when a message is delivered successfully, you can send information
         * about that event to an Amazon CloudWatch destination, or send notifications to
         * endpoints that are subscribed to an Amazon SNS topic.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventDestinationAsync(const Model::DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing keyword from an origination phone number or pool.</p>
         * <p>A keyword is a word that you can search for on a particular phone number or
         * pool. It is also a specific word or phrase that an end user can send to your
         * number to elicit a response, such as an informational message or a special
         * offer. When your number receives a message that begins with a keyword, Amazon
         * Pinpoint responds with a customizable message.</p> <p>Keywords "HELP" and "STOP"
         * can't be deleted or modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteKeyword">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeywordOutcome DeleteKeyword(const Model::DeleteKeywordRequest& request) const;

        /**
         * <p>Deletes an existing keyword from an origination phone number or pool.</p>
         * <p>A keyword is a word that you can search for on a particular phone number or
         * pool. It is also a specific word or phrase that an end user can send to your
         * number to elicit a response, such as an informational message or a special
         * offer. When your number receives a message that begins with a keyword, Amazon
         * Pinpoint responds with a customizable message.</p> <p>Keywords "HELP" and "STOP"
         * can't be deleted or modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteKeyword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeywordOutcomeCallable DeleteKeywordCallable(const Model::DeleteKeywordRequest& request) const;

        /**
         * <p>Deletes an existing keyword from an origination phone number or pool.</p>
         * <p>A keyword is a word that you can search for on a particular phone number or
         * pool. It is also a specific word or phrase that an end user can send to your
         * number to elicit a response, such as an informational message or a special
         * offer. When your number receives a message that begins with a keyword, Amazon
         * Pinpoint responds with a customizable message.</p> <p>Keywords "HELP" and "STOP"
         * can't be deleted or modified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteKeyword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeywordAsync(const Model::DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing opt-out list. All opted out phone numbers in the opt-out
         * list are deleted.</p> <p>If the specified opt-out list name doesn't exist or is
         * in-use by an origination phone number or pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptOutList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptOutListOutcome DeleteOptOutList(const Model::DeleteOptOutListRequest& request) const;

        /**
         * <p>Deletes an existing opt-out list. All opted out phone numbers in the opt-out
         * list are deleted.</p> <p>If the specified opt-out list name doesn't exist or is
         * in-use by an origination phone number or pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptOutList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOptOutListOutcomeCallable DeleteOptOutListCallable(const Model::DeleteOptOutListRequest& request) const;

        /**
         * <p>Deletes an existing opt-out list. All opted out phone numbers in the opt-out
         * list are deleted.</p> <p>If the specified opt-out list name doesn't exist or is
         * in-use by an origination phone number or pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptOutList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOptOutListAsync(const Model::DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing opted out destination phone number from the specified
         * opt-out list.</p> <p>Each destination phone number can only be deleted once
         * every 30 days.</p> <p>If the specified destination phone number doesn't exist or
         * if the opt-out list doesn't exist, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptedOutNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOptedOutNumberOutcome DeleteOptedOutNumber(const Model::DeleteOptedOutNumberRequest& request) const;

        /**
         * <p>Deletes an existing opted out destination phone number from the specified
         * opt-out list.</p> <p>Each destination phone number can only be deleted once
         * every 30 days.</p> <p>If the specified destination phone number doesn't exist or
         * if the opt-out list doesn't exist, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptedOutNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOptedOutNumberOutcomeCallable DeleteOptedOutNumberCallable(const Model::DeleteOptedOutNumberRequest& request) const;

        /**
         * <p>Deletes an existing opted out destination phone number from the specified
         * opt-out list.</p> <p>Each destination phone number can only be deleted once
         * every 30 days.</p> <p>If the specified destination phone number doesn't exist or
         * if the opt-out list doesn't exist, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteOptedOutNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOptedOutNumberAsync(const Model::DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing pool. Deleting a pool disassociates all origination
         * identities from that pool.</p> <p>If the pool status isn't active or if deletion
         * protection is enabled, an Error is returned.</p> <p>A pool is a collection of
         * phone numbers and SenderIds. A pool can include one or more phone numbers and
         * SenderIds that are associated with your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeletePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePoolOutcome DeletePool(const Model::DeletePoolRequest& request) const;

        /**
         * <p>Deletes an existing pool. Deleting a pool disassociates all origination
         * identities from that pool.</p> <p>If the pool status isn't active or if deletion
         * protection is enabled, an Error is returned.</p> <p>A pool is a collection of
         * phone numbers and SenderIds. A pool can include one or more phone numbers and
         * SenderIds that are associated with your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeletePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePoolOutcomeCallable DeletePoolCallable(const Model::DeletePoolRequest& request) const;

        /**
         * <p>Deletes an existing pool. Deleting a pool disassociates all origination
         * identities from that pool.</p> <p>If the pool status isn't active or if deletion
         * protection is enabled, an Error is returned.</p> <p>A pool is a collection of
         * phone numbers and SenderIds. A pool can include one or more phone numbers and
         * SenderIds that are associated with your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeletePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePoolAsync(const Model::DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an account-level monthly spending limit override for sending text
         * messages. Deleting a spend limit override will set the
         * <code>EnforcedLimit</code> to equal the <code>MaxLimit</code>, which is
         * controlled by Amazon Web Services. For more information on spend limits (quotas)
         * see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTextMessageSpendLimitOverrideOutcome DeleteTextMessageSpendLimitOverride(const Model::DeleteTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Deletes an account-level monthly spending limit override for sending text
         * messages. Deleting a spend limit override will set the
         * <code>EnforcedLimit</code> to equal the <code>MaxLimit</code>, which is
         * controlled by Amazon Web Services. For more information on spend limits (quotas)
         * see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTextMessageSpendLimitOverrideOutcomeCallable DeleteTextMessageSpendLimitOverrideCallable(const Model::DeleteTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Deletes an account-level monthly spending limit override for sending text
         * messages. Deleting a spend limit override will set the
         * <code>EnforcedLimit</code> to equal the <code>MaxLimit</code>, which is
         * controlled by Amazon Web Services. For more information on spend limits (quotas)
         * see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTextMessageSpendLimitOverrideAsync(const Model::DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an account level monthly spend limit override for sending voice
         * messages. Deleting a spend limit override sets the <code>EnforcedLimit</code>
         * equal to the <code>MaxLimit</code>, which is controlled by Amazon Web Services.
         * For more information on spending limits (quotas) see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceMessageSpendLimitOverrideOutcome DeleteVoiceMessageSpendLimitOverride(const Model::DeleteVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Deletes an account level monthly spend limit override for sending voice
         * messages. Deleting a spend limit override sets the <code>EnforcedLimit</code>
         * equal to the <code>MaxLimit</code>, which is controlled by Amazon Web Services.
         * For more information on spending limits (quotas) see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceMessageSpendLimitOverrideOutcomeCallable DeleteVoiceMessageSpendLimitOverrideCallable(const Model::DeleteVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Deletes an account level monthly spend limit override for sending voice
         * messages. Deleting a spend limit override sets the <code>EnforcedLimit</code>
         * equal to the <code>MaxLimit</code>, which is controlled by Amazon Web Services.
         * For more information on spending limits (quotas) see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">Amazon
         * Pinpoint quotas</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DeleteVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceMessageSpendLimitOverrideAsync(const Model::DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes attributes of your Amazon Web Services account. The supported
         * account attributes include account tier, which indicates whether your account is
         * in the sandbox or production environment. When you're ready to move your account
         * out of the sandbox, create an Amazon Web Services Support case for a service
         * limit increase request.</p> <p>New Amazon Pinpoint accounts are placed into an
         * SMS or voice sandbox. The sandbox protects both Amazon Web Services end
         * recipients and SMS or voice recipients from fraud and abuse. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Describes attributes of your Amazon Web Services account. The supported
         * account attributes include account tier, which indicates whether your account is
         * in the sandbox or production environment. When you're ready to move your account
         * out of the sandbox, create an Amazon Web Services Support case for a service
         * limit increase request.</p> <p>New Amazon Pinpoint accounts are placed into an
         * SMS or voice sandbox. The sandbox protects both Amazon Web Services end
         * recipients and SMS or voice recipients from fraud and abuse. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * <p>Describes attributes of your Amazon Web Services account. The supported
         * account attributes include account tier, which indicates whether your account is
         * in the sandbox or production environment. When you're ready to move your account
         * out of the sandbox, create an Amazon Web Services Support case for a service
         * limit increase request.</p> <p>New Amazon Pinpoint accounts are placed into an
         * SMS or voice sandbox. The sandbox protects both Amazon Web Services end
         * recipients and SMS or voice recipients from fraud and abuse. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Amazon Pinpoint SMS Voice V2 resource quotas for your
         * account. The description for a quota includes the quota name, current usage
         * toward that quota, and the quota's maximum value.</p> <p>When you establish an
         * Amazon Web Services account, the account has initial quotas on the maximum
         * number of configuration sets, opt-out lists, phone numbers, and pools that you
         * can create in a given Region. For more information see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">
         * Amazon Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountLimitsOutcome DescribeAccountLimits(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon Pinpoint SMS Voice V2 resource quotas for your
         * account. The description for a quota includes the quota name, current usage
         * toward that quota, and the quota's maximum value.</p> <p>When you establish an
         * Amazon Web Services account, the account has initial quotas on the maximum
         * number of configuration sets, opt-out lists, phone numbers, and pools that you
         * can create in a given Region. For more information see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">
         * Amazon Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountLimitsOutcomeCallable DescribeAccountLimitsCallable(const Model::DescribeAccountLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon Pinpoint SMS Voice V2 resource quotas for your
         * account. The description for a quota includes the quota name, current usage
         * toward that quota, and the quota's maximum value.</p> <p>When you establish an
         * Amazon Web Services account, the account has initial quotas on the maximum
         * number of configuration sets, opt-out lists, phone numbers, and pools that you
         * can create in a given Region. For more information see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/quotas.html">
         * Amazon Pinpoint quotas </a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeAccountLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountLimitsAsync(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified configuration sets or all in your account.</p> <p>If
         * you specify configuration set names, the output includes information for only
         * the specified configuration sets. If you specify filters, the output includes
         * information for only those configuration sets that meet the filter criteria. If
         * you don't specify configuration set names or filters, the output includes
         * information for all configuration sets.</p> <p>If you specify a configuration
         * set name that isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSetsOutcome DescribeConfigurationSets(const Model::DescribeConfigurationSetsRequest& request) const;

        /**
         * <p>Describes the specified configuration sets or all in your account.</p> <p>If
         * you specify configuration set names, the output includes information for only
         * the specified configuration sets. If you specify filters, the output includes
         * information for only those configuration sets that meet the filter criteria. If
         * you don't specify configuration set names or filters, the output includes
         * information for all configuration sets.</p> <p>If you specify a configuration
         * set name that isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeConfigurationSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationSetsOutcomeCallable DescribeConfigurationSetsCallable(const Model::DescribeConfigurationSetsRequest& request) const;

        /**
         * <p>Describes the specified configuration sets or all in your account.</p> <p>If
         * you specify configuration set names, the output includes information for only
         * the specified configuration sets. If you specify filters, the output includes
         * information for only those configuration sets that meet the filter criteria. If
         * you don't specify configuration set names or filters, the output includes
         * information for all configuration sets.</p> <p>If you specify a configuration
         * set name that isn't valid, an error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeConfigurationSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationSetsAsync(const Model::DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified keywords or all keywords on your origination phone
         * number or pool.</p> <p>A keyword is a word that you can search for on a
         * particular phone number or pool. It is also a specific word or phrase that an
         * end user can send to your number to elicit a response, such as an informational
         * message or a special offer. When your number receives a message that begins with
         * a keyword, Amazon Pinpoint responds with a customizable message.</p> <p>If you
         * specify a keyword that isn't valid, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeKeywords">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeKeywordsOutcome DescribeKeywords(const Model::DescribeKeywordsRequest& request) const;

        /**
         * <p>Describes the specified keywords or all keywords on your origination phone
         * number or pool.</p> <p>A keyword is a word that you can search for on a
         * particular phone number or pool. It is also a specific word or phrase that an
         * end user can send to your number to elicit a response, such as an informational
         * message or a special offer. When your number receives a message that begins with
         * a keyword, Amazon Pinpoint responds with a customizable message.</p> <p>If you
         * specify a keyword that isn't valid, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeKeywords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeKeywordsOutcomeCallable DescribeKeywordsCallable(const Model::DescribeKeywordsRequest& request) const;

        /**
         * <p>Describes the specified keywords or all keywords on your origination phone
         * number or pool.</p> <p>A keyword is a word that you can search for on a
         * particular phone number or pool. It is also a specific word or phrase that an
         * end user can send to your number to elicit a response, such as an informational
         * message or a special offer. When your number receives a message that begins with
         * a keyword, Amazon Pinpoint responds with a customizable message.</p> <p>If you
         * specify a keyword that isn't valid, an Error is returned.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeKeywords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeKeywordsAsync(const Model::DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified opt-out list or all opt-out lists in your
         * account.</p> <p>If you specify opt-out list names, the output includes
         * information for only the specified opt-out lists. Opt-out lists include only
         * those that meet the filter criteria. If you don't specify opt-out list names or
         * filters, the output includes information for all opt-out lists.</p> <p>If you
         * specify an opt-out list name that isn't valid, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptOutLists">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptOutListsOutcome DescribeOptOutLists(const Model::DescribeOptOutListsRequest& request) const;

        /**
         * <p>Describes the specified opt-out list or all opt-out lists in your
         * account.</p> <p>If you specify opt-out list names, the output includes
         * information for only the specified opt-out lists. Opt-out lists include only
         * those that meet the filter criteria. If you don't specify opt-out list names or
         * filters, the output includes information for all opt-out lists.</p> <p>If you
         * specify an opt-out list name that isn't valid, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptOutLists">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptOutListsOutcomeCallable DescribeOptOutListsCallable(const Model::DescribeOptOutListsRequest& request) const;

        /**
         * <p>Describes the specified opt-out list or all opt-out lists in your
         * account.</p> <p>If you specify opt-out list names, the output includes
         * information for only the specified opt-out lists. Opt-out lists include only
         * those that meet the filter criteria. If you don't specify opt-out list names or
         * filters, the output includes information for all opt-out lists.</p> <p>If you
         * specify an opt-out list name that isn't valid, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptOutLists">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptOutListsAsync(const Model::DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified opted out destination numbers or all opted out
         * destination numbers in an opt-out list.</p> <p>If you specify opted out numbers,
         * the output includes information for only the specified opted out numbers. If you
         * specify filters, the output includes information for only those opted out
         * numbers that meet the filter criteria. If you don't specify opted out numbers or
         * filters, the output includes information for all opted out destination numbers
         * in your opt-out list.</p> <p>If you specify an opted out number that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptedOutNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOptedOutNumbersOutcome DescribeOptedOutNumbers(const Model::DescribeOptedOutNumbersRequest& request) const;

        /**
         * <p>Describes the specified opted out destination numbers or all opted out
         * destination numbers in an opt-out list.</p> <p>If you specify opted out numbers,
         * the output includes information for only the specified opted out numbers. If you
         * specify filters, the output includes information for only those opted out
         * numbers that meet the filter criteria. If you don't specify opted out numbers or
         * filters, the output includes information for all opted out destination numbers
         * in your opt-out list.</p> <p>If you specify an opted out number that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptedOutNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOptedOutNumbersOutcomeCallable DescribeOptedOutNumbersCallable(const Model::DescribeOptedOutNumbersRequest& request) const;

        /**
         * <p>Describes the specified opted out destination numbers or all opted out
         * destination numbers in an opt-out list.</p> <p>If you specify opted out numbers,
         * the output includes information for only the specified opted out numbers. If you
         * specify filters, the output includes information for only those opted out
         * numbers that meet the filter criteria. If you don't specify opted out numbers or
         * filters, the output includes information for all opted out destination numbers
         * in your opt-out list.</p> <p>If you specify an opted out number that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeOptedOutNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOptedOutNumbersAsync(const Model::DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified origination phone number, or all the phone numbers in
         * your account.</p> <p>If you specify phone number IDs, the output includes
         * information for only the specified phone numbers. If you specify filters, the
         * output includes information for only those phone numbers that meet the filter
         * criteria. If you don't specify phone number IDs or filters, the output includes
         * information for all phone numbers.</p> <p>If you specify a phone number ID that
         * isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePhoneNumbersOutcome DescribePhoneNumbers(const Model::DescribePhoneNumbersRequest& request) const;

        /**
         * <p>Describes the specified origination phone number, or all the phone numbers in
         * your account.</p> <p>If you specify phone number IDs, the output includes
         * information for only the specified phone numbers. If you specify filters, the
         * output includes information for only those phone numbers that meet the filter
         * criteria. If you don't specify phone number IDs or filters, the output includes
         * information for all phone numbers.</p> <p>If you specify a phone number ID that
         * isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePhoneNumbersOutcomeCallable DescribePhoneNumbersCallable(const Model::DescribePhoneNumbersRequest& request) const;

        /**
         * <p>Describes the specified origination phone number, or all the phone numbers in
         * your account.</p> <p>If you specify phone number IDs, the output includes
         * information for only the specified phone numbers. If you specify filters, the
         * output includes information for only those phone numbers that meet the filter
         * criteria. If you don't specify phone number IDs or filters, the output includes
         * information for all phone numbers.</p> <p>If you specify a phone number ID that
         * isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePhoneNumbersAsync(const Model::DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the specified pools or all pools associated with your Amazon Web
         * Services account.</p> <p>If you specify pool IDs, the output includes
         * information for only the specified pools. If you specify filters, the output
         * includes information for only those pools that meet the filter criteria. If you
         * don't specify pool IDs or filters, the output includes information for all
         * pools.</p> <p>If you specify a pool ID that isn't valid, an Error is
         * returned.</p> <p>A pool is a collection of phone numbers and SenderIds. A pool
         * can include one or more phone numbers and SenderIds that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePools">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePoolsOutcome DescribePools(const Model::DescribePoolsRequest& request) const;

        /**
         * <p>Retrieves the specified pools or all pools associated with your Amazon Web
         * Services account.</p> <p>If you specify pool IDs, the output includes
         * information for only the specified pools. If you specify filters, the output
         * includes information for only those pools that meet the filter criteria. If you
         * don't specify pool IDs or filters, the output includes information for all
         * pools.</p> <p>If you specify a pool ID that isn't valid, an Error is
         * returned.</p> <p>A pool is a collection of phone numbers and SenderIds. A pool
         * can include one or more phone numbers and SenderIds that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePools">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePoolsOutcomeCallable DescribePoolsCallable(const Model::DescribePoolsRequest& request) const;

        /**
         * <p>Retrieves the specified pools or all pools associated with your Amazon Web
         * Services account.</p> <p>If you specify pool IDs, the output includes
         * information for only the specified pools. If you specify filters, the output
         * includes information for only those pools that meet the filter criteria. If you
         * don't specify pool IDs or filters, the output includes information for all
         * pools.</p> <p>If you specify a pool ID that isn't valid, an Error is
         * returned.</p> <p>A pool is a collection of phone numbers and SenderIds. A pool
         * can include one or more phone numbers and SenderIds that are associated with
         * your Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribePools">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePoolsAsync(const Model::DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified SenderIds or all SenderIds associated with your
         * Amazon Web Services account.</p> <p>If you specify SenderIds, the output
         * includes information for only the specified SenderIds. If you specify filters,
         * the output includes information for only those SenderIds that meet the filter
         * criteria. If you don't specify SenderIds or filters, the output includes
         * information for all SenderIds.</p> <p>f you specify a sender ID that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSenderIds">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSenderIdsOutcome DescribeSenderIds(const Model::DescribeSenderIdsRequest& request) const;

        /**
         * <p>Describes the specified SenderIds or all SenderIds associated with your
         * Amazon Web Services account.</p> <p>If you specify SenderIds, the output
         * includes information for only the specified SenderIds. If you specify filters,
         * the output includes information for only those SenderIds that meet the filter
         * criteria. If you don't specify SenderIds or filters, the output includes
         * information for all SenderIds.</p> <p>f you specify a sender ID that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSenderIds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSenderIdsOutcomeCallable DescribeSenderIdsCallable(const Model::DescribeSenderIdsRequest& request) const;

        /**
         * <p>Describes the specified SenderIds or all SenderIds associated with your
         * Amazon Web Services account.</p> <p>If you specify SenderIds, the output
         * includes information for only the specified SenderIds. If you specify filters,
         * the output includes information for only those SenderIds that meet the filter
         * criteria. If you don't specify SenderIds or filters, the output includes
         * information for all SenderIds.</p> <p>f you specify a sender ID that isn't
         * valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSenderIds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSenderIdsAsync(const Model::DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current Amazon Pinpoint monthly spend limits for sending voice
         * and text messages.</p> <p>When you establish an Amazon Web Services account, the
         * account has initial monthly spend limit in a given Region. For more information
         * on increasing your monthly spend limit, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html">
         * Requesting increases to your monthly SMS spending quota for Amazon Pinpoint </a>
         * in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSpendLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpendLimitsOutcome DescribeSpendLimits(const Model::DescribeSpendLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon Pinpoint monthly spend limits for sending voice
         * and text messages.</p> <p>When you establish an Amazon Web Services account, the
         * account has initial monthly spend limit in a given Region. For more information
         * on increasing your monthly spend limit, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html">
         * Requesting increases to your monthly SMS spending quota for Amazon Pinpoint </a>
         * in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSpendLimits">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpendLimitsOutcomeCallable DescribeSpendLimitsCallable(const Model::DescribeSpendLimitsRequest& request) const;

        /**
         * <p>Describes the current Amazon Pinpoint monthly spend limits for sending voice
         * and text messages.</p> <p>When you establish an Amazon Web Services account, the
         * account has initial monthly spend limit in a given Region. For more information
         * on increasing your monthly spend limit, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-awssupport-spend-threshold.html">
         * Requesting increases to your monthly SMS spending quota for Amazon Pinpoint </a>
         * in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DescribeSpendLimits">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpendLimitsAsync(const Model::DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified origination identity from an existing pool.</p> <p>If
         * the origination identity isn't associated with the specified pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DisassociateOriginationIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateOriginationIdentityOutcome DisassociateOriginationIdentity(const Model::DisassociateOriginationIdentityRequest& request) const;

        /**
         * <p>Removes the specified origination identity from an existing pool.</p> <p>If
         * the origination identity isn't associated with the specified pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DisassociateOriginationIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateOriginationIdentityOutcomeCallable DisassociateOriginationIdentityCallable(const Model::DisassociateOriginationIdentityRequest& request) const;

        /**
         * <p>Removes the specified origination identity from an existing pool.</p> <p>If
         * the origination identity isn't associated with the specified pool, an Error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/DisassociateOriginationIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateOriginationIdentityAsync(const Model::DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all associated origination identities in your pool.</p> <p>If you
         * specify filters, the output includes information for only those origination
         * identities that meet the filter criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListPoolOriginationIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoolOriginationIdentitiesOutcome ListPoolOriginationIdentities(const Model::ListPoolOriginationIdentitiesRequest& request) const;

        /**
         * <p>Lists all associated origination identities in your pool.</p> <p>If you
         * specify filters, the output includes information for only those origination
         * identities that meet the filter criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListPoolOriginationIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoolOriginationIdentitiesOutcomeCallable ListPoolOriginationIdentitiesCallable(const Model::ListPoolOriginationIdentitiesRequest& request) const;

        /**
         * <p>Lists all associated origination identities in your pool.</p> <p>If you
         * specify filters, the output includes information for only those origination
         * identities that meet the filter criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListPoolOriginationIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoolOriginationIdentitiesAsync(const Model::ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags associated with a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a keyword configuration on an origination phone number or
         * pool.</p> <p> A keyword is a word that you can search for on a particular phone
         * number or pool. It is also a specific word or phrase that an end user can send
         * to your number to elicit a response, such as an informational message or a
         * special offer. When your number receives a message that begins with a keyword,
         * Amazon Pinpoint responds with a customizable message.</p> <p>If you specify a
         * keyword that isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutKeyword">AWS
         * API Reference</a></p>
         */
        virtual Model::PutKeywordOutcome PutKeyword(const Model::PutKeywordRequest& request) const;

        /**
         * <p>Creates or updates a keyword configuration on an origination phone number or
         * pool.</p> <p> A keyword is a word that you can search for on a particular phone
         * number or pool. It is also a specific word or phrase that an end user can send
         * to your number to elicit a response, such as an informational message or a
         * special offer. When your number receives a message that begins with a keyword,
         * Amazon Pinpoint responds with a customizable message.</p> <p>If you specify a
         * keyword that isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutKeyword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutKeywordOutcomeCallable PutKeywordCallable(const Model::PutKeywordRequest& request) const;

        /**
         * <p>Creates or updates a keyword configuration on an origination phone number or
         * pool.</p> <p> A keyword is a word that you can search for on a particular phone
         * number or pool. It is also a specific word or phrase that an end user can send
         * to your number to elicit a response, such as an informational message or a
         * special offer. When your number receives a message that begins with a keyword,
         * Amazon Pinpoint responds with a customizable message.</p> <p>If you specify a
         * keyword that isn't valid, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutKeyword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutKeywordAsync(const Model::PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an opted out destination phone number in the opt-out list.</p> <p>If
         * the destination phone number isn't valid or if the specified opt-out list
         * doesn't exist, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutOptedOutNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOptedOutNumberOutcome PutOptedOutNumber(const Model::PutOptedOutNumberRequest& request) const;

        /**
         * <p>Creates an opted out destination phone number in the opt-out list.</p> <p>If
         * the destination phone number isn't valid or if the specified opt-out list
         * doesn't exist, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutOptedOutNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutOptedOutNumberOutcomeCallable PutOptedOutNumberCallable(const Model::PutOptedOutNumberRequest& request) const;

        /**
         * <p>Creates an opted out destination phone number in the opt-out list.</p> <p>If
         * the destination phone number isn't valid or if the specified opt-out list
         * doesn't exist, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/PutOptedOutNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutOptedOutNumberAsync(const Model::PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Releases an existing origination phone number in your account. Once released,
         * a phone number is no longer available for sending messages.</p> <p>If the
         * origination phone number has deletion protection enabled or is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleasePhoneNumberOutcome ReleasePhoneNumber(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * <p>Releases an existing origination phone number in your account. Once released,
         * a phone number is no longer available for sending messages.</p> <p>If the
         * origination phone number has deletion protection enabled or is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleasePhoneNumberOutcomeCallable ReleasePhoneNumberCallable(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * <p>Releases an existing origination phone number in your account. Once released,
         * a phone number is no longer available for sending messages.</p> <p>If the
         * origination phone number has deletion protection enabled or is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleasePhoneNumberAsync(const Model::ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request an origination phone number for use in your account. For more
         * information on phone number request see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-request-number.html">
         * Requesting a number </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RequestPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestPhoneNumberOutcome RequestPhoneNumber(const Model::RequestPhoneNumberRequest& request) const;

        /**
         * <p>Request an origination phone number for use in your account. For more
         * information on phone number request see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-request-number.html">
         * Requesting a number </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RequestPhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestPhoneNumberOutcomeCallable RequestPhoneNumberCallable(const Model::RequestPhoneNumberRequest& request) const;

        /**
         * <p>Request an origination phone number for use in your account. For more
         * information on phone number request see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/settings-sms-request-number.html">
         * Requesting a number </a> in the <i>Amazon Pinpoint User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RequestPhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestPhoneNumberAsync(const Model::RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new text message and sends it to a recipient's phone number.</p>
         * <p>SMS throughput limits are measured in Message Parts per Second (MPS). Your
         * MPS limit depends on the destination country of your messages, as well as the
         * type of phone number (origination number) that you use to send the message. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-limitations-mps.html">Message
         * Parts per Second (MPS) limits</a> in the <i>Amazon Pinpoint User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendTextMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTextMessageOutcome SendTextMessage(const Model::SendTextMessageRequest& request) const;

        /**
         * <p>Creates a new text message and sends it to a recipient's phone number.</p>
         * <p>SMS throughput limits are measured in Message Parts per Second (MPS). Your
         * MPS limit depends on the destination country of your messages, as well as the
         * type of phone number (origination number) that you use to send the message. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-limitations-mps.html">Message
         * Parts per Second (MPS) limits</a> in the <i>Amazon Pinpoint User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendTextMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendTextMessageOutcomeCallable SendTextMessageCallable(const Model::SendTextMessageRequest& request) const;

        /**
         * <p>Creates a new text message and sends it to a recipient's phone number.</p>
         * <p>SMS throughput limits are measured in Message Parts per Second (MPS). Your
         * MPS limit depends on the destination country of your messages, as well as the
         * type of phone number (origination number) that you use to send the message. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/channels-sms-limitations-mps.html">Message
         * Parts per Second (MPS) limits</a> in the <i>Amazon Pinpoint User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendTextMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendTextMessageAsync(const Model::SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to send a request that sends a text message through Amazon
         * Pinpoint. This operation uses <a href="http://aws.amazon.com/polly/">Amazon
         * Polly</a> to convert a text script into a voice message.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendVoiceMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendVoiceMessageOutcome SendVoiceMessage(const Model::SendVoiceMessageRequest& request) const;

        /**
         * <p>Allows you to send a request that sends a text message through Amazon
         * Pinpoint. This operation uses <a href="http://aws.amazon.com/polly/">Amazon
         * Polly</a> to convert a text script into a voice message.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendVoiceMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendVoiceMessageOutcomeCallable SendVoiceMessageCallable(const Model::SendVoiceMessageRequest& request) const;

        /**
         * <p>Allows you to send a request that sends a text message through Amazon
         * Pinpoint. This operation uses <a href="http://aws.amazon.com/polly/">Amazon
         * Polly</a> to convert a text script into a voice message.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SendVoiceMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendVoiceMessageAsync(const Model::SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the default message type on a configuration set.</p> <p>Choose the
         * category of SMS messages that you plan to send from this account. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultMessageType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultMessageTypeOutcome SetDefaultMessageType(const Model::SetDefaultMessageTypeRequest& request) const;

        /**
         * <p>Sets the default message type on a configuration set.</p> <p>Choose the
         * category of SMS messages that you plan to send from this account. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultMessageType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultMessageTypeOutcomeCallable SetDefaultMessageTypeCallable(const Model::SetDefaultMessageTypeRequest& request) const;

        /**
         * <p>Sets the default message type on a configuration set.</p> <p>Choose the
         * category of SMS messages that you plan to send from this account. If you send
         * account-related messages or time-sensitive messages such as one-time passcodes,
         * choose <b>Transactional</b>. If you plan to send messages that contain marketing
         * material or other promotional content, choose <b>Promotional</b>. This setting
         * applies to your entire Amazon Web Services account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultMessageType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultMessageTypeAsync(const Model::SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets default sender ID on a configuration set.</p> <p>When sending a text
         * message to a destination country that supports sender IDs, the default sender ID
         * on the configuration set specified will be used if no dedicated origination
         * phone numbers or registered sender IDs are available in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultSenderId">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultSenderIdOutcome SetDefaultSenderId(const Model::SetDefaultSenderIdRequest& request) const;

        /**
         * <p>Sets default sender ID on a configuration set.</p> <p>When sending a text
         * message to a destination country that supports sender IDs, the default sender ID
         * on the configuration set specified will be used if no dedicated origination
         * phone numbers or registered sender IDs are available in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultSenderId">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultSenderIdOutcomeCallable SetDefaultSenderIdCallable(const Model::SetDefaultSenderIdRequest& request) const;

        /**
         * <p>Sets default sender ID on a configuration set.</p> <p>When sending a text
         * message to a destination country that supports sender IDs, the default sender ID
         * on the configuration set specified will be used if no dedicated origination
         * phone numbers or registered sender IDs are available in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetDefaultSenderId">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultSenderIdAsync(const Model::SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending text messages.
         * The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTextMessageSpendLimitOverrideOutcome SetTextMessageSpendLimitOverride(const Model::SetTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending text messages.
         * The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTextMessageSpendLimitOverrideOutcomeCallable SetTextMessageSpendLimitOverrideCallable(const Model::SetTextMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending text messages.
         * The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetTextMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTextMessageSpendLimitOverrideAsync(const Model::SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending voice
         * messages. The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         */
        virtual Model::SetVoiceMessageSpendLimitOverrideOutcome SetVoiceMessageSpendLimitOverride(const Model::SetVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending voice
         * messages. The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetVoiceMessageSpendLimitOverrideOutcomeCallable SetVoiceMessageSpendLimitOverrideCallable(const Model::SetVoiceMessageSpendLimitOverrideRequest& request) const;

        /**
         * <p>Sets an account level monthly spend limit override for sending voice
         * messages. The requested spend limit must be less than or equal to the
         * <code>MaxLimit</code>, which is set by Amazon Web Services. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SetVoiceMessageSpendLimitOverride">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetVoiceMessageSpendLimitOverrideAsync(const Model::SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Amazon Pinpoint
         * SMS Voice, version 2 resource. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and an optional value. Tag keys must be unique per
         * resource. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Amazon Pinpoint
         * SMS Voice, version 2 resource. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and an optional value. Tag keys must be unique per
         * resource. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Amazon Pinpoint
         * SMS Voice, version 2 resource. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and an optional value. Tag keys must be unique per
         * resource. For more information about tags, see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association of the specified tags from an Amazon Pinpoint SMS
         * Voice V2 resource. For more information on tags see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of the specified tags from an Amazon Pinpoint SMS
         * Voice V2 resource. For more information on tags see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of the specified tags from an Amazon Pinpoint SMS
         * Voice V2 resource. For more information on tags see <a
         * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/tagging-resources.html">
         * Tagging Amazon Pinpoint resources</a> in the <i>Amazon Pinpoint Developer
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing event destination in a configuration set. You can update
         * the IAM role ARN for CloudWatch Logs and Kinesis Data Firehose. You can also
         * enable or disable the event destination.</p> <p>You may want to update an event
         * destination to change its matching event types or updating the destination
         * resource ARN. You can't change an event destination's type between CloudWatch
         * Logs, Kinesis Data Firehose, and Amazon SNS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdateEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventDestinationOutcome UpdateEventDestination(const Model::UpdateEventDestinationRequest& request) const;

        /**
         * <p>Updates an existing event destination in a configuration set. You can update
         * the IAM role ARN for CloudWatch Logs and Kinesis Data Firehose. You can also
         * enable or disable the event destination.</p> <p>You may want to update an event
         * destination to change its matching event types or updating the destination
         * resource ARN. You can't change an event destination's type between CloudWatch
         * Logs, Kinesis Data Firehose, and Amazon SNS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdateEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventDestinationOutcomeCallable UpdateEventDestinationCallable(const Model::UpdateEventDestinationRequest& request) const;

        /**
         * <p>Updates an existing event destination in a configuration set. You can update
         * the IAM role ARN for CloudWatch Logs and Kinesis Data Firehose. You can also
         * enable or disable the event destination.</p> <p>You may want to update an event
         * destination to change its matching event types or updating the destination
         * resource ARN. You can't change an event destination's type between CloudWatch
         * Logs, Kinesis Data Firehose, and Amazon SNS.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdateEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventDestinationAsync(const Model::UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of an existing origination phone number. You can
         * update the opt-out list, enable or disable two-way messaging, change the
         * TwoWayChannelArn, enable or disable self-managed opt-outs, and enable or disable
         * deletion protection.</p> <p>If the origination phone number is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates the configuration of an existing origination phone number. You can
         * update the opt-out list, enable or disable two-way messaging, change the
         * TwoWayChannelArn, enable or disable self-managed opt-outs, and enable or disable
         * deletion protection.</p> <p>If the origination phone number is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates the configuration of an existing origination phone number. You can
         * update the opt-out list, enable or disable two-way messaging, change the
         * TwoWayChannelArn, enable or disable self-managed opt-outs, and enable or disable
         * deletion protection.</p> <p>If the origination phone number is associated with a
         * pool, an Error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of an existing pool. You can update the opt-out
         * list, enable or disable two-way messaging, change the
         * <code>TwoWayChannelArn</code>, enable or disable self-managed opt-outs, enable
         * or disable deletion protection, and enable or disable shared
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePoolOutcome UpdatePool(const Model::UpdatePoolRequest& request) const;

        /**
         * <p>Updates the configuration of an existing pool. You can update the opt-out
         * list, enable or disable two-way messaging, change the
         * <code>TwoWayChannelArn</code>, enable or disable self-managed opt-outs, enable
         * or disable deletion protection, and enable or disable shared
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePoolOutcomeCallable UpdatePoolCallable(const Model::UpdatePoolRequest& request) const;

        /**
         * <p>Updates the configuration of an existing pool. You can update the opt-out
         * list, enable or disable two-way messaging, change the
         * <code>TwoWayChannelArn</code>, enable or disable self-managed opt-outs, enable
         * or disable deletion protection, and enable or disable shared
         * routes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/UpdatePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePoolAsync(const Model::UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateOriginationIdentityAsyncHelper(const Model::AssociateOriginationIdentityRequest& request, const AssociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationSetAsyncHelper(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventDestinationAsyncHelper(const Model::CreateEventDestinationRequest& request, const CreateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOptOutListAsyncHelper(const Model::CreateOptOutListRequest& request, const CreateOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePoolAsyncHelper(const Model::CreatePoolRequest& request, const CreatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetAsyncHelper(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDefaultMessageTypeAsyncHelper(const Model::DeleteDefaultMessageTypeRequest& request, const DeleteDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDefaultSenderIdAsyncHelper(const Model::DeleteDefaultSenderIdRequest& request, const DeleteDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventDestinationAsyncHelper(const Model::DeleteEventDestinationRequest& request, const DeleteEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteKeywordAsyncHelper(const Model::DeleteKeywordRequest& request, const DeleteKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOptOutListAsyncHelper(const Model::DeleteOptOutListRequest& request, const DeleteOptOutListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOptedOutNumberAsyncHelper(const Model::DeleteOptedOutNumberRequest& request, const DeleteOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePoolAsyncHelper(const Model::DeletePoolRequest& request, const DeletePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTextMessageSpendLimitOverrideAsyncHelper(const Model::DeleteTextMessageSpendLimitOverrideRequest& request, const DeleteTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceMessageSpendLimitOverrideAsyncHelper(const Model::DeleteVoiceMessageSpendLimitOverrideRequest& request, const DeleteVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAttributesAsyncHelper(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountLimitsAsyncHelper(const Model::DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationSetsAsyncHelper(const Model::DescribeConfigurationSetsRequest& request, const DescribeConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeKeywordsAsyncHelper(const Model::DescribeKeywordsRequest& request, const DescribeKeywordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptOutListsAsyncHelper(const Model::DescribeOptOutListsRequest& request, const DescribeOptOutListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOptedOutNumbersAsyncHelper(const Model::DescribeOptedOutNumbersRequest& request, const DescribeOptedOutNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePhoneNumbersAsyncHelper(const Model::DescribePhoneNumbersRequest& request, const DescribePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePoolsAsyncHelper(const Model::DescribePoolsRequest& request, const DescribePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSenderIdsAsyncHelper(const Model::DescribeSenderIdsRequest& request, const DescribeSenderIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSpendLimitsAsyncHelper(const Model::DescribeSpendLimitsRequest& request, const DescribeSpendLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateOriginationIdentityAsyncHelper(const Model::DisassociateOriginationIdentityRequest& request, const DisassociateOriginationIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoolOriginationIdentitiesAsyncHelper(const Model::ListPoolOriginationIdentitiesRequest& request, const ListPoolOriginationIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutKeywordAsyncHelper(const Model::PutKeywordRequest& request, const PutKeywordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutOptedOutNumberAsyncHelper(const Model::PutOptedOutNumberRequest& request, const PutOptedOutNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleasePhoneNumberAsyncHelper(const Model::ReleasePhoneNumberRequest& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestPhoneNumberAsyncHelper(const Model::RequestPhoneNumberRequest& request, const RequestPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendTextMessageAsyncHelper(const Model::SendTextMessageRequest& request, const SendTextMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendVoiceMessageAsyncHelper(const Model::SendVoiceMessageRequest& request, const SendVoiceMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultMessageTypeAsyncHelper(const Model::SetDefaultMessageTypeRequest& request, const SetDefaultMessageTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetDefaultSenderIdAsyncHelper(const Model::SetDefaultSenderIdRequest& request, const SetDefaultSenderIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTextMessageSpendLimitOverrideAsyncHelper(const Model::SetTextMessageSpendLimitOverrideRequest& request, const SetTextMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetVoiceMessageSpendLimitOverrideAsyncHelper(const Model::SetVoiceMessageSpendLimitOverrideRequest& request, const SetVoiceMessageSpendLimitOverrideResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventDestinationAsyncHelper(const Model::UpdateEventDestinationRequest& request, const UpdateEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePhoneNumberAsyncHelper(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePoolAsyncHelper(const Model::UpdatePoolRequest& request, const UpdatePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace PinpointSMSVoiceV2
} // namespace Aws
