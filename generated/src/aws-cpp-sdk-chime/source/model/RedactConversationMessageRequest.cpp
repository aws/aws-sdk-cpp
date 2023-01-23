/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RedactConversationMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RedactConversationMessageRequest::RedactConversationMessageRequest() : 
    m_accountIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

Aws::String RedactConversationMessageRequest::SerializePayload() const
{
  return {};
}




