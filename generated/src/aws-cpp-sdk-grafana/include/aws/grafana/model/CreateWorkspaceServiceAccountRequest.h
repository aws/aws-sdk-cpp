/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/model/Role.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class CreateWorkspaceServiceAccountRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceServiceAccount"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline const Role& GetGrafanaRole() const{ return m_grafanaRole; }

    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline bool GrafanaRoleHasBeenSet() const { return m_grafanaRoleHasBeenSet; }

    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline void SetGrafanaRole(const Role& value) { m_grafanaRoleHasBeenSet = true; m_grafanaRole = value; }

    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline void SetGrafanaRole(Role&& value) { m_grafanaRoleHasBeenSet = true; m_grafanaRole = std::move(value); }

    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline CreateWorkspaceServiceAccountRequest& WithGrafanaRole(const Role& value) { SetGrafanaRole(value); return *this;}

    /**
     * <p>The permission level to use for this service account.</p>  <p>For more
     * information about the roles and the permissions each has, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/Grafana-user-roles.html">User
     * roles</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     */
    inline CreateWorkspaceServiceAccountRequest& WithGrafanaRole(Role&& value) { SetGrafanaRole(std::move(value)); return *this;}


    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the service account. The name must be unique within the workspace,
     * as it determines the ID associated with the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace within which to create the service account.</p>
     */
    inline CreateWorkspaceServiceAccountRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Role m_grafanaRole;
    bool m_grafanaRoleHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
