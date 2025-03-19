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

PutSessionResult::PutSessionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

PutSessionResult& PutSessionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
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

  const auto& messagesIter = headers.find("x-amz-lex-messages");
  if(messagesIter != headers.end())
  {
    m_messages = messagesIter->second;
    m_messagesHasBeenSet = true;
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

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
