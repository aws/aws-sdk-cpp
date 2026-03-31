/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ChatParticipantConnection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ChatParticipantConnection::ChatParticipantConnection(JsonView jsonValue) { *this = jsonValue; }

ChatParticipantConnection& ChatParticipantConnection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("initialContactId")) {
    m_initialContactId = jsonValue.GetString("initialContactId");
    m_initialContactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("participantId")) {
    m_participantId = jsonValue.GetString("participantId");
    m_participantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("participantToken")) {
    m_participantToken = jsonValue.GetString("participantToken");
    m_participantTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatParticipantConnection::Jsonize() const {
  JsonValue payload;

  if (m_initialContactIdHasBeenSet) {
    payload.WithString("initialContactId", m_initialContactId);
  }

  if (m_participantIdHasBeenSet) {
    payload.WithString("participantId", m_participantId);
  }

  if (m_participantTokenHasBeenSet) {
    payload.WithString("participantToken", m_participantToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
