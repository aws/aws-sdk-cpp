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

PostContentResult::PostContentResult() : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
}

PostContentResult::PostContentResult(PostContentResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_intentName(std::move(toMove.m_intentName)),
    m_nluIntentConfidence(std::move(toMove.m_nluIntentConfidence)),
    m_alternativeIntents(std::move(toMove.m_alternativeIntents)),
    m_slots(std::move(toMove.m_slots)),
    m_sessionAttributes(std::move(toMove.m_sessionAttributes)),
    m_sentimentResponse(std::move(toMove.m_sentimentResponse)),
    m_message(std::move(toMove.m_message)),
    m_messageFormat(toMove.m_messageFormat),
    m_dialogState(toMove.m_dialogState),
    m_slotToElicit(std::move(toMove.m_slotToElicit)),
    m_inputTranscript(std::move(toMove.m_inputTranscript)),
    m_audioStream(std::move(toMove.m_audioStream)),
    m_botVersion(std::move(toMove.m_botVersion)),
    m_sessionId(std::move(toMove.m_sessionId)),
    m_activeContexts(std::move(toMove.m_activeContexts))
{
}

PostContentResult& PostContentResult::operator=(PostContentResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = std::move(toMove.m_contentType);
   m_intentName = std::move(toMove.m_intentName);
   m_nluIntentConfidence = std::move(toMove.m_nluIntentConfidence);
   m_alternativeIntents = std::move(toMove.m_alternativeIntents);
   m_slots = std::move(toMove.m_slots);
   m_sessionAttributes = std::move(toMove.m_sessionAttributes);
   m_sentimentResponse = std::move(toMove.m_sentimentResponse);
   m_message = std::move(toMove.m_message);
   m_messageFormat = toMove.m_messageFormat;
   m_dialogState = toMove.m_dialogState;
   m_slotToElicit = std::move(toMove.m_slotToElicit);
   m_inputTranscript = std::move(toMove.m_inputTranscript);
   m_audioStream = std::move(toMove.m_audioStream);
   m_botVersion = std::move(toMove.m_botVersion);
   m_sessionId = std::move(toMove.m_sessionId);
   m_activeContexts = std::move(toMove.m_activeContexts);

   return *this;
}

PostContentResult::PostContentResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
  *this = std::move(result);
}

PostContentResult& PostContentResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_audioStream = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& intentNameIter = headers.find("x-amz-lex-intent-name");
  if(intentNameIter != headers.end())
  {
    m_intentName = intentNameIter->second;
  }

  const auto& nluIntentConfidenceIter = headers.find("x-amz-lex-nlu-intent-confidence");
  if(nluIntentConfidenceIter != headers.end())
  {
    m_nluIntentConfidence = nluIntentConfidenceIter->second;
  }

  const auto& alternativeIntentsIter = headers.find("x-amz-lex-alternative-intents");
  if(alternativeIntentsIter != headers.end())
  {
    m_alternativeIntents = alternativeIntentsIter->second;
  }

  const auto& slotsIter = headers.find("x-amz-lex-slots");
  if(slotsIter != headers.end())
  {
    m_slots = slotsIter->second;
  }

  const auto& sessionAttributesIter = headers.find("x-amz-lex-session-attributes");
  if(sessionAttributesIter != headers.end())
  {
    m_sessionAttributes = sessionAttributesIter->second;
  }

  const auto& sentimentResponseIter = headers.find("x-amz-lex-sentiment");
  if(sentimentResponseIter != headers.end())
  {
    m_sentimentResponse = sentimentResponseIter->second;
  }

  const auto& messageIter = headers.find("x-amz-lex-message");
  if(messageIter != headers.end())
  {
    m_message = messageIter->second;
  }

  const auto& messageFormatIter = headers.find("x-amz-lex-message-format");
  if(messageFormatIter != headers.end())
  {
    m_messageFormat = MessageFormatTypeMapper::GetMessageFormatTypeForName(messageFormatIter->second);
  }

  const auto& dialogStateIter = headers.find("x-amz-lex-dialog-state");
  if(dialogStateIter != headers.end())
  {
    m_dialogState = DialogStateMapper::GetDialogStateForName(dialogStateIter->second);
  }

  const auto& slotToElicitIter = headers.find("x-amz-lex-slot-to-elicit");
  if(slotToElicitIter != headers.end())
  {
    m_slotToElicit = slotToElicitIter->second;
  }

  const auto& inputTranscriptIter = headers.find("x-amz-lex-input-transcript");
  if(inputTranscriptIter != headers.end())
  {
    m_inputTranscript = inputTranscriptIter->second;
  }

  const auto& botVersionIter = headers.find("x-amz-lex-bot-version");
  if(botVersionIter != headers.end())
  {
    m_botVersion = botVersionIter->second;
  }

  const auto& sessionIdIter = headers.find("x-amz-lex-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
  }

  const auto& activeContextsIter = headers.find("x-amz-lex-active-contexts");
  if(activeContextsIter != headers.end())
  {
    m_activeContexts = activeContextsIter->second;
  }

   return *this;
}
