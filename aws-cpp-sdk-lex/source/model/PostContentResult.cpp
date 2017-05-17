/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_dialogState(DialogState::NOT_SET)
{
}

PostContentResult::PostContentResult(PostContentResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_intentName(std::move(toMove.m_intentName)),
    m_slots(std::move(toMove.m_slots)),
    m_sessionAttributes(std::move(toMove.m_sessionAttributes)),
    m_message(std::move(toMove.m_message)),
    m_dialogState(toMove.m_dialogState),
    m_slotToElicit(std::move(toMove.m_slotToElicit)),
    m_inputTranscript(std::move(toMove.m_inputTranscript)),
    m_audioStream(std::move(toMove.m_audioStream))
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
   m_slots = std::move(toMove.m_slots);
   m_sessionAttributes = std::move(toMove.m_sessionAttributes);
   m_message = std::move(toMove.m_message);
   m_dialogState = toMove.m_dialogState;
   m_slotToElicit = std::move(toMove.m_slotToElicit);
   m_inputTranscript = std::move(toMove.m_inputTranscript);
   m_audioStream = std::move(toMove.m_audioStream);

   return *this;
}

PostContentResult::PostContentResult(AmazonWebServiceResult<ResponseStream>&& result) : 
    m_dialogState(DialogState::NOT_SET)
{
  *this = std::move(result);
}

PostContentResult& PostContentResult::operator =(AmazonWebServiceResult<ResponseStream>&& result)
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

  const auto& messageIter = headers.find("x-amz-lex-message");
  if(messageIter != headers.end())
  {
    m_message = messageIter->second;
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

   return *this;
}
