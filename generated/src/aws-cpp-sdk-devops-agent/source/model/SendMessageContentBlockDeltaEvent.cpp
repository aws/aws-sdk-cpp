/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageContentBlockDeltaEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageContentBlockDeltaEvent::SendMessageContentBlockDeltaEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageContentBlockDeltaEvent& SendMessageContentBlockDeltaEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("index")) {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("delta")) {
    m_delta = jsonValue.GetObject("delta");
    m_deltaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageContentBlockDeltaEvent::Jsonize() const {
  JsonValue payload;

  if (m_indexHasBeenSet) {
    payload.WithInteger("index", m_index);
  }

  if (m_deltaHasBeenSet) {
    payload.WithObject("delta", m_delta.Jsonize());
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
