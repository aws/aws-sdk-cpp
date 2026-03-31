/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/MSTeamsTransmissionTarget.h>

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
 * <p>Configuration for MS Teams workspace integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MSTeamsConfiguration">AWS
 * API Reference</a></p>
 */
class MSTeamsConfiguration {
 public:
  AWS_DEVOPSAGENT_API MSTeamsConfiguration() = default;
  AWS_DEVOPSAGENT_API MSTeamsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MSTeamsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Associated MS Teams teams ID</p>
   */
  inline const Aws::String& GetTeamId() const { return m_teamId; }
  inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
  template <typename TeamIdT = Aws::String>
  void SetTeamId(TeamIdT&& value) {
    m_teamIdHasBeenSet = true;
    m_teamId = std::forward<TeamIdT>(value);
  }
  template <typename TeamIdT = Aws::String>
  MSTeamsConfiguration& WithTeamId(TeamIdT&& value) {
    SetTeamId(std::forward<TeamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Associated MS Teams team name</p>
   */
  inline const Aws::String& GetTeamName() const { return m_teamName; }
  inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
  template <typename TeamNameT = Aws::String>
  void SetTeamName(TeamNameT&& value) {
    m_teamNameHasBeenSet = true;
    m_teamName = std::forward<TeamNameT>(value);
  }
  template <typename TeamNameT = Aws::String>
  MSTeamsConfiguration& WithTeamName(TeamNameT&& value) {
    SetTeamName(std::forward<TeamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transmission targets for agent notification</p>
   */
  inline const MSTeamsTransmissionTarget& GetTransmissionTarget() const { return m_transmissionTarget; }
  inline bool TransmissionTargetHasBeenSet() const { return m_transmissionTargetHasBeenSet; }
  template <typename TransmissionTargetT = MSTeamsTransmissionTarget>
  void SetTransmissionTarget(TransmissionTargetT&& value) {
    m_transmissionTargetHasBeenSet = true;
    m_transmissionTarget = std::forward<TransmissionTargetT>(value);
  }
  template <typename TransmissionTargetT = MSTeamsTransmissionTarget>
  MSTeamsConfiguration& WithTransmissionTarget(TransmissionTargetT&& value) {
    SetTransmissionTarget(std::forward<TransmissionTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_teamId;

  Aws::String m_teamName;

  MSTeamsTransmissionTarget m_transmissionTarget;
  bool m_teamIdHasBeenSet = false;
  bool m_teamNameHasBeenSet = false;
  bool m_transmissionTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
