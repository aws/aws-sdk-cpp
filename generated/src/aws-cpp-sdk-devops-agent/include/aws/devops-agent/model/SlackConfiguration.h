/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SlackTransmissionTarget.h>

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
 * <p>Configuration for Slack workspace integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SlackConfiguration">AWS
 * API Reference</a></p>
 */
class SlackConfiguration {
 public:
  AWS_DEVOPSAGENT_API SlackConfiguration() = default;
  AWS_DEVOPSAGENT_API SlackConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SlackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Associated Slack workspace ID</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  SlackConfiguration& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Associated Slack workspace name</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  SlackConfiguration& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Transmission targets for agent notifications</p>
   */
  inline const SlackTransmissionTarget& GetTransmissionTarget() const { return m_transmissionTarget; }
  inline bool TransmissionTargetHasBeenSet() const { return m_transmissionTargetHasBeenSet; }
  template <typename TransmissionTargetT = SlackTransmissionTarget>
  void SetTransmissionTarget(TransmissionTargetT&& value) {
    m_transmissionTargetHasBeenSet = true;
    m_transmissionTarget = std::forward<TransmissionTargetT>(value);
  }
  template <typename TransmissionTargetT = SlackTransmissionTarget>
  SlackConfiguration& WithTransmissionTarget(TransmissionTargetT&& value) {
    SetTransmissionTarget(std::forward<TransmissionTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  Aws::String m_workspaceName;

  SlackTransmissionTarget m_transmissionTarget;
  bool m_workspaceIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_transmissionTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
