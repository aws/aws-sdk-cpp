/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationContactParticipant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EvaluationContactParticipant::EvaluationContactParticipant(JsonView jsonValue) { *this = jsonValue; }

EvaluationContactParticipant& EvaluationContactParticipant::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactParticipantRole")) {
    m_contactParticipantRole =
        ContactParticipantRoleMapper::GetContactParticipantRoleForName(jsonValue.GetString("ContactParticipantRole"));
    m_contactParticipantRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactParticipantId")) {
    m_contactParticipantId = jsonValue.GetString("ContactParticipantId");
    m_contactParticipantIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationContactParticipant::Jsonize() const {
  JsonValue payload;

  if (m_contactParticipantRoleHasBeenSet) {
    payload.WithString("ContactParticipantRole", ContactParticipantRoleMapper::GetNameForContactParticipantRole(m_contactParticipantRole));
  }

  if (m_contactParticipantIdHasBeenSet) {
    payload.WithString("ContactParticipantId", m_contactParticipantId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
