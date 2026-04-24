/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageResponseInProgressEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageResponseInProgressEvent::SendMessageResponseInProgressEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageResponseInProgressEvent& SendMessageResponseInProgressEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responseId")) {
    m_responseId = jsonValue.GetString("responseId");
    m_responseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageResponseInProgressEvent::Jsonize() const {
  JsonValue payload;

  if (m_responseIdHasBeenSet) {
    payload.WithString("responseId", m_responseId);
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
