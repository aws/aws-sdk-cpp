/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/PendingMessage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

PendingMessage::PendingMessage(JsonView jsonValue) { *this = jsonValue; }

PendingMessage& PendingMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("messageId")) {
    m_messageId = jsonValue.GetString("messageId");
    m_messageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetObject("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue PendingMessage::Jsonize() const {
  JsonValue payload;

  if (m_messageIdHasBeenSet) {
    payload.WithString("messageId", m_messageId);
  }

  if (m_messageHasBeenSet) {
    payload.WithObject("message", m_message.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
