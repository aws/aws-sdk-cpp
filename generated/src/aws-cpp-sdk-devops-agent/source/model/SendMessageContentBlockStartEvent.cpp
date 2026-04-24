/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageContentBlockStartEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageContentBlockStartEvent::SendMessageContentBlockStartEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageContentBlockStartEvent& SendMessageContentBlockStartEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("index")) {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentId")) {
    m_parentId = jsonValue.GetString("parentId");
    m_parentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageContentBlockStartEvent::Jsonize() const {
  JsonValue payload;

  if (m_indexHasBeenSet) {
    payload.WithInteger("index", m_index);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_parentIdHasBeenSet) {
    payload.WithString("parentId", m_parentId);
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
