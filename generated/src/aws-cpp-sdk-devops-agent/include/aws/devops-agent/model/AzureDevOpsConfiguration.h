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
 * <p>Configuration for Azure DevOps project integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AzureDevOpsConfiguration">AWS
 * API Reference</a></p>
 */
class AzureDevOpsConfiguration {
 public:
  AWS_DEVOPSAGENT_API AzureDevOpsConfiguration() = default;
  AWS_DEVOPSAGENT_API AzureDevOpsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AzureDevOpsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Azure DevOps organization name.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  AzureDevOpsConfiguration& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure DevOps project ID.</p>
   */
  inline const Aws::String& GetProjectId() const { return m_projectId; }
  inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
  template <typename ProjectIdT = Aws::String>
  void SetProjectId(ProjectIdT&& value) {
    m_projectIdHasBeenSet = true;
    m_projectId = std::forward<ProjectIdT>(value);
  }
  template <typename ProjectIdT = Aws::String>
  AzureDevOpsConfiguration& WithProjectId(ProjectIdT&& value) {
    SetProjectId(std::forward<ProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Azure DevOps project name.</p>
   */
  inline const Aws::String& GetProjectName() const { return m_projectName; }
  inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
  template <typename ProjectNameT = Aws::String>
  void SetProjectName(ProjectNameT&& value) {
    m_projectNameHasBeenSet = true;
    m_projectName = std::forward<ProjectNameT>(value);
  }
  template <typename ProjectNameT = Aws::String>
  AzureDevOpsConfiguration& WithProjectName(ProjectNameT&& value) {
    SetProjectName(std::forward<ProjectNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationName;

  Aws::String m_projectId;

  Aws::String m_projectName;
  bool m_organizationNameHasBeenSet = false;
  bool m_projectIdHasBeenSet = false;
  bool m_projectNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
