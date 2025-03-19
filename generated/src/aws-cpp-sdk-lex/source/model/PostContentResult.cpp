/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PostContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PostContentResult::PostContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

PostContentResult& PostContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_audioStream = result.TakeOwnershipOfPayload();
  m_audioStreamHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& intentNameIter = headers.find("x-amz-lex-intent-name");
  if(intentNameIter != headers.end())
  {
    m_intentName = intentNameIter->second;
    m_intentNameHasBeenSet = true;
  }

  const auto& nluIntentConfidenceIter = headers.find("x-amz-lex-nlu-intent-confidence");
  if(nluIntentConfidenceIter != headers.end())
  {
    m_nluIntentConfidence = nluIntentConfidenceIter->second;
    m_nluIntentConfidenceHasBeenSet = true;
  }

  const auto& alternativeIntentsIter = headers.find("x-amz-lex-alternative-intents");
  if(alternativeIntentsIter != headers.end())
  {
    m_alternativeIntents = alternativeIntentsIter->second;
    m_alternativeIntentsHasBeenSet = true;
  }

  const auto& slotsIter = headers.find("x-amz-lex-slots");
  if(slotsIter != headers.end())
  {
    m_slots = slotsIter->second;
    m_slotsHasBeenSet = true;
  }

  const auto& sessionAttributesIter = headers.find("x-amz-lex-session-attributes");
  if(sessionAttributesIter != headers.end())
  {
    m_sessionAttributes = sessionAttributesIter->second;
    m_sessionAttributesHasBeenSet = true;
  }

  const auto& sentimentResponseIter = headers.find("x-amz-lex-sentiment");
  if(sentimentResponseIter != headers.end())
  {
    m_sentimentResponse = sentimentResponseIter->second;
    m_sentimentResponseHasBeenSet = true;
  }

  const auto& encodedMessageIter = headers.find("x-amz-lex-encoded-message");
  if(encodedMessageIter != headers.end())
  {
    m_encodedMessage = encodedMessageIter->second;
    m_encodedMessageHasBeenSet = true;
  }

  const auto& messageFormatIter = headers.find("x-amz-lex-message-format");
  if(messageFormatIter != headers.end())
  {
    m_messageFormat = MessageFormatTypeMapper::GetMessageFormatTypeForName(messageFormatIter->second);
    m_messageFormatHasBeenSet = true;
  }

  const auto& dialogStateIter = headers.find("x-amz-lex-dialog-state");
  if(dialogStateIter != headers.end())
  {
    m_dialogState = DialogStateMapper::GetDialogStateForName(dialogStateIter->second);
    m_dialogStateHasBeenSet = true;
  }

  const auto& slotToElicitIter = headers.find("x-amz-lex-slot-to-elicit");
  if(slotToElicitIter != headers.end())
  {
    m_slotToElicit = slotToElicitIter->second;
    m_slotToElicitHasBeenSet = true;
  }

  const auto& encodedInputTranscriptIter = headers.find("x-amz-lex-encoded-input-transcript");
  if(encodedInputTranscriptIter != headers.end())
  {
    m_encodedInputTranscript = encodedInputTranscriptIter->second;
    m_encodedInputTranscriptHasBeenSet = true;
  }

  const auto& botVersionIter = headers.find("x-amz-lex-bot-version");
  if(botVersionIter != headers.end())
  {
    m_botVersion = botVersionIter->second;
    m_botVersionHasBeenSet = true;
  }

  const auto& sessionIdIter = headers.find("x-amz-lex-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

  const auto& activeContextsIter = headers.find("x-amz-lex-active-contexts");
  if(activeContextsIter != headers.end())
  {
    m_activeContexts = activeContextsIter->second;
    m_activeContextsHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
