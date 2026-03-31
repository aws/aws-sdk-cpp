/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeParticipantRole.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Defines a channel in the audio stream</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeChannelDefinition">AWS
 * API Reference</a></p>
 */
class MedicalScribeChannelDefinition {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeChannelDefinition() = default;
  AWS_CONNECTHEALTH_API MedicalScribeChannelDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeChannelDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channel identifier</p>
   */
  inline int GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  inline void SetChannelId(int value) {
    m_channelIdHasBeenSet = true;
    m_channelId = value;
  }
  inline MedicalScribeChannelDefinition& WithChannelId(int value) {
    SetChannelId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the participant on this channel</p>
   */
  inline MedicalScribeParticipantRole GetParticipantRole() const { return m_participantRole; }
  inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
  inline void SetParticipantRole(MedicalScribeParticipantRole value) {
    m_participantRoleHasBeenSet = true;
    m_participantRole = value;
  }
  inline MedicalScribeChannelDefinition& WithParticipantRole(MedicalScribeParticipantRole value) {
    SetParticipantRole(value);
    return *this;
  }
  ///@}
 private:
  int m_channelId{0};

  MedicalScribeParticipantRole m_participantRole{MedicalScribeParticipantRole::NOT_SET};
  bool m_channelIdHasBeenSet = false;
  bool m_participantRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
