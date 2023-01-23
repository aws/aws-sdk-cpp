/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
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
  class UpdateWorkspaceConfigurationRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceConfiguration"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The new configuration string for the workspace. For more information about
     * the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceConfigurationRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
