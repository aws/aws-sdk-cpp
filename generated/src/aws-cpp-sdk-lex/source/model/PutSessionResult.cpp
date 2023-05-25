/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PutSessionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PutSessionResult::PutSessionResult() : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
}

PutSessionResult::PutSessionResult(PutSessionResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_intentName(std::move(toMove.m_intentName)),
    m_slots(std::move(toMove.m_slots)),
    m_sessionAttributes(std::move(toMove.m_sessionAttributes)),
    m_encodedMessage(std::move(toMove.m_encodedMessage)),
    m_messageFormat(toMove.m_messageFormat),
    m_dialogState(toMove.m_dialogState),
    m_slotToElicit(std::move(toMove.m_slotToElicit)),
    m_audioStream(std::move(toMove.m_audioStream)),
    m_sessionId(std::move(toMove.m_sessionId)),
    m_activeContexts(std::move(toMove.m_activeContexts)),
    m_requestId(std::move(toMove.m_requestId))
{
}

PutSessionResult& PutSessionResult::operator=(PutSessionResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = std::move(toMove.m_contentType);
   m_intentName = std::move(toMove.m_intentName);
   m_slots = std::move(toMove.m_slots);
   m_sessionAttributes = std::move(toMove.m_sessionAttributes);
   m_encodedMessage = std::move(toMove.m_encodedMessage);
   m_messageFormat = toMove.m_messageFormat;
   m_dialogState = toMove.m_dialogState;
   m_slotToElicit = std::move(toMove.m_slotToElicit);
   m_audioStream = std::move(toMove.m_audioStream);
   m_sessionId = std::move(toMove.m_sessionId);
   m_activeContexts = std::move(toMove.m_activeContexts);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

PutSessionResult::PutSessionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_messageFormat(MessageFormatType::NOT_SET),
    m_dialogState(DialogState::NOT_SET)
{
  *this = std::move(result);
}

PutSessionResult& PutSessionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
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

  const auto& encodedMessageIter = headers.find("x-amz-lex-encoded-message");
  if(encodedMessageIter != headers.end())
  {
    m_encodedMessage = encodedMessageIter->second;
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

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
