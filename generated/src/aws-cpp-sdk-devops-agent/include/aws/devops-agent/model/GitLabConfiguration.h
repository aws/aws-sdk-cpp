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
 * <p>Configuration for GitLab project integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GitLabConfiguration">AWS
 * API Reference</a></p>
 */
class GitLabConfiguration {
 public:
  AWS_DEVOPSAGENT_API GitLabConfiguration() = default;
  AWS_DEVOPSAGENT_API GitLabConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GitLabConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>GitLab numeric project ID.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  GitLabConfiguration& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Full GitLab project path (e.g., namespace/project-name).</p>
   */
  inline const Aws::String& GetProjectPath() const { return m_projectPath; }
  inline bool ProjectPathHasBeenSet() const { return m_projectPathHasBeenSet; }
  template <typename ProjectPathT = Aws::String>
  void SetProjectPath(ProjectPathT&& value) {
    m_projectPathHasBeenSet = true;
    m_projectPath = std::forward<ProjectPathT>(value);
  }
  template <typename ProjectPathT = Aws::String>
  GitLabConfiguration& WithProjectPath(ProjectPathT&& value) {
    SetProjectPath(std::forward<ProjectPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitLab instance identifier (e.g., gitlab.com or
   * e2e.gamma.dev.us-east-1.gitlab.falco.ai.aws.dev)</p>
   */
  inline const Aws::String& GetInstanceIdentifier() const { return m_instanceIdentifier; }
  inline bool InstanceIdentifierHasBeenSet() const { return m_instanceIdentifierHasBeenSet; }
  template <typename InstanceIdentifierT = Aws::String>
  void SetInstanceIdentifier(InstanceIdentifierT&& value) {
    m_instanceIdentifierHasBeenSet = true;
    m_instanceIdentifier = std::forward<InstanceIdentifierT>(value);
  }
  template <typename InstanceIdentifierT = Aws::String>
  GitLabConfiguration& WithInstanceIdentifier(InstanceIdentifierT&& value) {
    SetInstanceIdentifier(std::forward<InstanceIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectId;

  Aws::String m_projectPath;

  Aws::String m_instanceIdentifier;
  bool m_projectIdHasBeenSet = false;
  bool m_projectPathHasBeenSet = false;
  bool m_instanceIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
