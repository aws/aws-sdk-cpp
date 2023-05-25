/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/PutSessionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PutSessionResult::PutSessionResult()
{
}

PutSessionResult::PutSessionResult(PutSessionResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_messages(std::move(toMove.m_messages)),
    m_sessionState(std::move(toMove.m_sessionState)),
    m_requestAttributes(std::move(toMove.m_requestAttributes)),
    m_sessionId(std::move(toMove.m_sessionId)),
    m_audioStream(std::move(toMove.m_audioStream)),
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
   m_messages = std::move(toMove.m_messages);
   m_sessionState = std::move(toMove.m_sessionState);
   m_requestAttributes = std::move(toMove.m_requestAttributes);
   m_sessionId = std::move(toMove.m_sessionId);
   m_audioStream = std::move(toMove.m_audioStream);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

PutSessionResult::PutSessionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
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

  const auto& messagesIter = headers.find("x-amz-lex-messages");
  if(messagesIter != headers.end())
  {
    m_messages = messagesIter->second;
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

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
