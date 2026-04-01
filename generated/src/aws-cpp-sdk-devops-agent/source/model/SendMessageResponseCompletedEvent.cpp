/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageResponseCompletedEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageResponseCompletedEvent::SendMessageResponseCompletedEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageResponseCompletedEvent& SendMessageResponseCompletedEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responseId")) {
    m_responseId = jsonValue.GetString("responseId");
    m_responseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usage")) {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageResponseCompletedEvent::Jsonize() const {
  JsonValue payload;

  if (m_responseIdHasBeenSet) {
    payload.WithString("responseId", m_responseId);
  }

  if (m_usageHasBeenSet) {
    payload.WithObject("usage", m_usage.Jsonize());
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
