/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageContentBlockStopEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageContentBlockStopEvent::SendMessageContentBlockStopEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageContentBlockStopEvent& SendMessageContentBlockStopEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("index")) {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("last")) {
    m_last = jsonValue.GetBool("last");
    m_lastHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageContentBlockStopEvent::Jsonize() const {
  JsonValue payload;

  if (m_indexHasBeenSet) {
    payload.WithInteger("index", m_index);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_textHasBeenSet) {
    payload.WithString("text", m_text);
  }

  if (m_lastHasBeenSet) {
    payload.WithBool("last", m_last);
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
