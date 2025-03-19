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

std::shared_ptr<Aws::IOStream> StartConversationRequest::GetBody() const
{
    return m_requestEventStream;
}


Aws::Http::HeaderValueCollection StartConversationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if(m_conversationModeHasBeenSet && m_conversationMode != ConversationMode::NOT_SET)
  {
    headers.emplace("x-amz-lex-conversation-mode", ConversationModeMapper::GetNameForConversationMode(m_conversationMode));
  }

  return headers;

}
