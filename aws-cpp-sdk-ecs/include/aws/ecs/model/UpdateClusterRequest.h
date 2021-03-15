/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ClusterConfiguration.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API UpdateClusterRequest : public ECSRequest
  {
  public:
    UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline UpdateClusterRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline UpdateClusterRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline UpdateClusterRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const{ return m_settings; }

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline void SetSettings(const Aws::Vector<ClusterSetting>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline void SetSettings(Aws::Vector<ClusterSetting>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline UpdateClusterRequest& WithSettings(const Aws::Vector<ClusterSetting>& value) { SetSettings(value); return *this;}

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline UpdateClusterRequest& WithSettings(Aws::Vector<ClusterSetting>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline UpdateClusterRequest& AddSettings(const ClusterSetting& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline UpdateClusterRequest& AddSettings(ClusterSetting&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }


    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline const ClusterConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline void SetConfiguration(const ClusterConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline void SetConfiguration(ClusterConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline UpdateClusterRequest& WithConfiguration(const ClusterConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline UpdateClusterRequest& WithConfiguration(ClusterConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet;

    ClusterConfiguration m_configuration;
    bool m_configurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
