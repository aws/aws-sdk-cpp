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
 * <p>Details specific to a registered Slack workspace.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredSlackServiceDetails">AWS
 * API Reference</a></p>
 */
class RegisteredSlackServiceDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredSlackServiceDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredSlackServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredSlackServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Slack team ID.</p>
   */
  inline const Aws::String& GetTeamId() const { return m_teamId; }
  inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
  template <typename TeamIdT = Aws::String>
  void SetTeamId(TeamIdT&& value) {
    m_teamIdHasBeenSet = true;
    m_teamId = std::forward<TeamIdT>(value);
  }
  template <typename TeamIdT = Aws::String>
  RegisteredSlackServiceDetails& WithTeamId(TeamIdT&& value) {
    SetTeamId(std::forward<TeamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Slack team name.</p>
   */
  inline const Aws::String& GetTeamName() const { return m_teamName; }
  inline bool TeamNameHasBeenSet() const { return m_teamNameHasBeenSet; }
  template <typename TeamNameT = Aws::String>
  void SetTeamName(TeamNameT&& value) {
    m_teamNameHasBeenSet = true;
    m_teamName = std::forward<TeamNameT>(value);
  }
  template <typename TeamNameT = Aws::String>
  RegisteredSlackServiceDetails& WithTeamName(TeamNameT&& value) {
    SetTeamName(std::forward<TeamNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_teamId;

  Aws::String m_teamName;
  bool m_teamIdHasBeenSet = false;
  bool m_teamNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
