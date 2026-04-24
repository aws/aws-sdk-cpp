/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageSummaryEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageSummaryEvent::SendMessageSummaryEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageSummaryEvent& SendMessageSummaryEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageSummaryEvent::Jsonize() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
