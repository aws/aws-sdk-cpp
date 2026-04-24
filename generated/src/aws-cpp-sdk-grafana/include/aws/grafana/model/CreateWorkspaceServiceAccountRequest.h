/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class CreateWorkspaceServiceAccountRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceServiceAccount"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A name for the service account. The name must be unique within the workspace,
   * as it determines the ID associated with the service account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateWorkspaceServiceAccountRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission level to use for this service account.</p>  <p>For more
   * information about the roles and the permissions each has, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
   * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p>
   */
  inline Role GetGrafanaRole() const { return m_grafanaRole; }
  inline bool GrafanaRoleHasBeenSet() const { return m_grafanaRoleHasBeenSet; }
  inline void SetGrafanaRole(Role value) {
    m_grafanaRoleHasBeenSet = true;
    m_grafanaRole = value;
  }
  inline CreateWorkspaceServiceAccountRequest& WithGrafanaRole(Role value) {
    SetGrafanaRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace within which to create the service account.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  CreateWorkspaceServiceAccountRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Role m_grafanaRole{Role::NOT_SET};

  Aws::String m_workspaceId;
  bool m_nameHasBeenSet = false;
  bool m_grafanaRoleHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
