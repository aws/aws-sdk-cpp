/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/StartConversationRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

StartConversationRequest::StartConversationRequest() : 
    m_botIdHasBeenSet(false),
    m_botAliasIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_conversationMode(ConversationMode::NOT_SET),
    m_conversationModeHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

std::shared_ptr<Aws::IOStream> StartConversationRequest::GetBody() const
{
    return m_requestEventStream;
}


Aws::Http::HeaderValueCollection StartConversationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_conversationModeHasBeenSet)
  {
    headers.emplace("x-amz-lex-conversation-mode", ConversationModeMapper::GetNameForConversationMode(m_conversationMode));
  }

  return headers;

}
