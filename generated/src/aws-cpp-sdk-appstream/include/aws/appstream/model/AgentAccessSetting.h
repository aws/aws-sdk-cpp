/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AgentAction.h>
#include <aws/appstream/model/Permission.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>A permission setting for an agent action. Each setting specifies an agent
 * action and whether it is enabled or disabled.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AgentAccessSetting">AWS
 * API Reference</a></p>
 */
class AgentAccessSetting {
 public:
  AWS_APPSTREAM_API AgentAccessSetting() = default;
  AWS_APPSTREAM_API AgentAccessSetting(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API AgentAccessSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The agent action to configure. Valid values are COMPUTER_VISION,
   * COMPUTER_INPUT, and FORWARD_MCP_TOOLS. If you enable COMPUTER_INPUT, you must
   * also enable COMPUTER_VISION.</p>
   */
  inline AgentAction GetAgentAction() const { return m_agentAction; }
  inline bool AgentActionHasBeenSet() const { return m_agentActionHasBeenSet; }
  inline void SetAgentAction(AgentAction value) {
    m_agentActionHasBeenSet = true;
    m_agentAction = value;
  }
  inline AgentAccessSetting& WithAgentAction(AgentAction value) {
    SetAgentAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the agent action is enabled or disabled.</p>
   */
  inline Permission GetPermission() const { return m_permission; }
  inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
  inline void SetPermission(Permission value) {
    m_permissionHasBeenSet = true;
    m_permission = value;
  }
  inline AgentAccessSetting& WithPermission(Permission value) {
    SetPermission(value);
    return *this;
  }
  ///@}
 private:
  AgentAction m_agentAction{AgentAction::NOT_SET};

  Permission m_permission{Permission::NOT_SET};
  bool m_agentActionHasBeenSet = false;
  bool m_permissionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
