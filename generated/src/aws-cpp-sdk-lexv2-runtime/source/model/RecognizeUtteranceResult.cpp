/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RecognizeUtteranceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

RecognizeUtteranceResult::RecognizeUtteranceResult()
{
}

RecognizeUtteranceResult::RecognizeUtteranceResult(RecognizeUtteranceResult&& toMove) : 
    m_inputMode(std::move(toMove.m_inputMode)),
    m_contentType(std::move(toMove.m_contentType)),
    m_messages(std::move(toMove.m_messages)),
    m_interpretations(std::move(toMove.m_interpretations)),
    m_sessionState(std::move(toMove.m_sessionState)),
    m_requestAttributes(std::move(toMove.m_requestAttributes)),
    m_sessionId(std::move(toMove.m_sessionId)),
    m_inputTranscript(std::move(toMove.m_inputTranscript)),
    m_audioStream(std::move(toMove.m_audioStream)),
    m_recognizedBotMember(std::move(toMove.m_recognizedBotMember)),
    m_requestId(std::move(toMove.m_requestId))
{
}

RecognizeUtteranceResult& RecognizeUtteranceResult::operator=(RecognizeUtteranceResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_inputMode = std::move(toMove.m_inputMode);
   m_contentType = std::move(toMove.m_contentType);
   m_messages = std::move(toMove.m_messages);
   m_interpretations = std::move(toMove.m_interpretations);
   m_sessionState = std::move(toMove.m_sessionState);
   m_requestAttributes = std::move(toMove.m_requestAttributes);
   m_sessionId = std::move(toMove.m_sessionId);
   m_inputTranscript = std::move(toMove.m_inputTranscript);
   m_audioStream = std::move(toMove.m_audioStream);
   m_recognizedBotMember = std::move(toMove.m_recognizedBotMember);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

RecognizeUtteranceResult::RecognizeUtteranceResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

RecognizeUtteranceResult& RecognizeUtteranceResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_audioStream = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& inputModeIter = headers.find("x-amz-lex-input-mode");
  if(inputModeIter != headers.end())
  {
    m_inputMode = inputModeIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& messagesIter = headers.find("x-amz-lex-messages");
  if(messagesIter != headers.end())
  {
    m_messages = messagesIter->second;
  }

  const auto& interpretationsIter = headers.find("x-amz-lex-interpretations");
  if(interpretationsIter != headers.end())
  {
    m_interpretations = interpretationsIter->second;
  }

  const auto& sessionStateIter = headers.find("x-amz-lex-session-state");
  if(sessionStateIter != headers.end())
  {
    m_sessionState = sessionStateIter->second;
  }

  const auto& requestAttributesIter = headers.find("x-amz-lex-request-attributes");
  if(requestAttributesIter != headers.end())
  {
    m_requestAttributes = requestAttributesIter->second;
  }

  const auto& sessionIdIter = headers.find("x-amz-lex-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
  }

  const auto& inputTranscriptIter = headers.find("x-amz-lex-input-transcript");
  if(inputTranscriptIter != headers.end())
  {
    m_inputTranscript = inputTranscriptIter->second;
  }

  const auto& recognizedBotMemberIter = headers.find("x-amz-lex-recognized-bot-member");
  if(recognizedBotMemberIter != headers.end())
  {
    m_recognizedBotMember = recognizedBotMemberIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
