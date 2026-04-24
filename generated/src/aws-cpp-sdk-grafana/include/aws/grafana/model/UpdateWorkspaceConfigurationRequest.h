/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class UpdateWorkspaceConfigurationRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API UpdateWorkspaceConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceConfiguration"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The new configuration string for the workspace. For more information about
   * the format and configuration options available, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
   * in your Grafana workspace</a>.</p>
   */
  inline const Aws::String& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = Aws::String>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = Aws::String>
  UpdateWorkspaceConfigurationRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace to update.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  UpdateWorkspaceConfigurationRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the version of Grafana to support in the workspace. If not
   * specified, keeps the current version of the workspace.</p> <p>Can only be used
   * to upgrade (for example, from 8.4 to 9.4), not downgrade (for example, from 9.4
   * to 8.4).</p> <p>To know what versions are available to upgrade to for a specific
   * workspace, see the <a
   * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_ListVersions.html">ListVersions</a>
   * operation.</p>
   */
  inline const Aws::String& GetGrafanaVersion() const { return m_grafanaVersion; }
  inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }
  template <typename GrafanaVersionT = Aws::String>
  void SetGrafanaVersion(GrafanaVersionT&& value) {
    m_grafanaVersionHasBeenSet = true;
    m_grafanaVersion = std::forward<GrafanaVersionT>(value);
  }
  template <typename GrafanaVersionT = Aws::String>
  UpdateWorkspaceConfigurationRequest& WithGrafanaVersion(GrafanaVersionT&& value) {
    SetGrafanaVersion(std::forward<GrafanaVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configuration;

  Aws::String m_workspaceId;

  Aws::String m_grafanaVersion;
  bool m_configurationHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_grafanaVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
