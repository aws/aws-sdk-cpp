/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeChannelDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeChannelDefinition::MedicalScribeChannelDefinition(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeChannelDefinition& MedicalScribeChannelDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("channelId")) {
    m_channelId = jsonValue.GetInteger("channelId");
    m_channelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("participantRole")) {
    m_participantRole = MedicalScribeParticipantRoleMapper::GetMedicalScribeParticipantRoleForName(jsonValue.GetString("participantRole"));
    m_participantRoleHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeChannelDefinition::Jsonize() const {
  JsonValue payload;

  if (m_channelIdHasBeenSet) {
    payload.WithInteger("channelId", m_channelId);
  }

  if (m_participantRoleHasBeenSet) {
    payload.WithString("participantRole", MedicalScribeParticipantRoleMapper::GetNameForMedicalScribeParticipantRole(m_participantRole));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
