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

RecognizeUtteranceResult::RecognizeUtteranceResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

RecognizeUtteranceResult& RecognizeUtteranceResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_audioStream = result.TakeOwnershipOfPayload();
  m_audioStreamHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& inputModeIter = headers.find("x-amz-lex-input-mode");
  if(inputModeIter != headers.end())
  {
    m_inputMode = inputModeIter->second;
    m_inputModeHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& messagesIter = headers.find("x-amz-lex-messages");
  if(messagesIter != headers.end())
  {
    m_messages = messagesIter->second;
    m_messagesHasBeenSet = true;
  }

  const auto& interpretationsIter = headers.find("x-amz-lex-interpretations");
  if(interpretationsIter != headers.end())
  {
    m_interpretations = interpretationsIter->second;
    m_interpretationsHasBeenSet = true;
  }

  const auto& sessionStateIter = headers.find("x-amz-lex-session-state");
  if(sessionStateIter != headers.end())
  {
    m_sessionState = sessionStateIter->second;
    m_sessionStateHasBeenSet = true;
  }

  const auto& requestAttributesIter = headers.find("x-amz-lex-request-attributes");
  if(requestAttributesIter != headers.end())
  {
    m_requestAttributes = requestAttributesIter->second;
    m_requestAttributesHasBeenSet = true;
  }

  const auto& sessionIdIter = headers.find("x-amz-lex-session-id");
  if(sessionIdIter != headers.end())
  {
    m_sessionId = sessionIdIter->second;
    m_sessionIdHasBeenSet = true;
  }

  const auto& inputTranscriptIter = headers.find("x-amz-lex-input-transcript");
  if(inputTranscriptIter != headers.end())
  {
    m_inputTranscript = inputTranscriptIter->second;
    m_inputTranscriptHasBeenSet = true;
  }

  const auto& recognizedBotMemberIter = headers.find("x-amz-lex-recognized-bot-member");
  if(recognizedBotMemberIter != headers.end())
  {
    m_recognizedBotMember = recognizedBotMemberIter->second;
    m_recognizedBotMemberHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
