/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageContext::SendMessageContext(JsonView jsonValue) { *this = jsonValue; }

SendMessageContext& SendMessageContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currentPage")) {
    m_currentPage = jsonValue.GetString("currentPage");
    m_currentPageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastMessage")) {
    m_lastMessage = jsonValue.GetString("lastMessage");
    m_lastMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userActionResponse")) {
    m_userActionResponse = jsonValue.GetString("userActionResponse");
    m_userActionResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageContext::Jsonize() const {
  JsonValue payload;

  if (m_currentPageHasBeenSet) {
    payload.WithString("currentPage", m_currentPage);
  }

  if (m_lastMessageHasBeenSet) {
    payload.WithString("lastMessage", m_lastMessage);
  }

  if (m_userActionResponseHasBeenSet) {
    payload.WithString("userActionResponse", m_userActionResponse);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
