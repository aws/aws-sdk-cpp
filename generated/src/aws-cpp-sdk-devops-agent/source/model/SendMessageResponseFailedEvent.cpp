/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageResponseFailedEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

SendMessageResponseFailedEvent::SendMessageResponseFailedEvent(JsonView jsonValue) { *this = jsonValue; }

SendMessageResponseFailedEvent& SendMessageResponseFailedEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responseId")) {
    m_responseId = jsonValue.GetString("responseId");
    m_responseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sequenceNumber")) {
    m_sequenceNumber = jsonValue.GetInteger("sequenceNumber");
    m_sequenceNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue SendMessageResponseFailedEvent::Jsonize() const {
  JsonValue payload;

  if (m_responseIdHasBeenSet) {
    payload.WithString("responseId", m_responseId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_sequenceNumberHasBeenSet) {
    payload.WithInteger("sequenceNumber", m_sequenceNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
