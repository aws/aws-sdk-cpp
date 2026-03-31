/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a chat participant connection with all its properties and
 * metadata</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ChatParticipantConnection">AWS
 * API Reference</a></p>
 */
class ChatParticipantConnection {
 public:
  AWS_DEVOPSAGENT_API ChatParticipantConnection() = default;
  AWS_DEVOPSAGENT_API ChatParticipantConnection(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ChatParticipantConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the contact in this instance of Amazon Connect</p>
   */
  inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
  inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
  template <typename InitialContactIdT = Aws::String>
  void SetInitialContactId(InitialContactIdT&& value) {
    m_initialContactIdHasBeenSet = true;
    m_initialContactId = std::forward<InitialContactIdT>(value);
  }
  template <typename InitialContactIdT = Aws::String>
  ChatParticipantConnection& WithInitialContactId(InitialContactIdT&& value) {
    SetInitialContactId(std::forward<InitialContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a chat participant</p>
   */
  inline const Aws::String& GetParticipantId() const { return m_participantId; }
  inline bool ParticipantIdHasBeenSet() const { return m_participantIdHasBeenSet; }
  template <typename ParticipantIdT = Aws::String>
  void SetParticipantId(ParticipantIdT&& value) {
    m_participantIdHasBeenSet = true;
    m_participantId = std::forward<ParticipantIdT>(value);
  }
  template <typename ParticipantIdT = Aws::String>
  ChatParticipantConnection& WithParticipantId(ParticipantIdT&& value) {
    SetParticipantId(std::forward<ParticipantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token used by the chat participant to call
   * CreateParticipantConnection</p>
   */
  inline const Aws::String& GetParticipantToken() const { return m_participantToken; }
  inline bool ParticipantTokenHasBeenSet() const { return m_participantTokenHasBeenSet; }
  template <typename ParticipantTokenT = Aws::String>
  void SetParticipantToken(ParticipantTokenT&& value) {
    m_participantTokenHasBeenSet = true;
    m_participantToken = std::forward<ParticipantTokenT>(value);
  }
  template <typename ParticipantTokenT = Aws::String>
  ChatParticipantConnection& WithParticipantToken(ParticipantTokenT&& value) {
    SetParticipantToken(std::forward<ParticipantTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_initialContactId;

  Aws::String m_participantId;

  Aws::String m_participantToken;
  bool m_initialContactIdHasBeenSet = false;
  bool m_participantIdHasBeenSet = false;
  bool m_participantTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
