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
#include <aws/ecs/model/ClusterServiceConnectDefaultsRequest.h>
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
  class UpdateClusterRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateClusterRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster settings for your cluster.</p>
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    UpdateClusterRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = ClusterSetting>
    UpdateClusterRequest& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The execute command configuration for the cluster.</p>
     */
    inline const ClusterConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ClusterConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ClusterConfiguration>
    UpdateClusterRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to set a default Service Connect namespace. After you set
     * a default Service Connect namespace, any new services with Service Connect
     * turned on that are created in the cluster are added as client services in the
     * namespace. This setting only applies to new services that set the
     * <code>enabled</code> parameter to <code>true</code> in the
     * <code>ServiceConnectConfiguration</code>. You can set the namespace of each
     * service individually in the <code>ServiceConnectConfiguration</code> to override
     * this default parameter.</p> <p>Tasks that run in a namespace can use short names
     * to connect to services in the namespace. Tasks can connect to services across
     * all of the clusters in the namespace. Tasks connect through a managed proxy
     * container that collects logs and metrics for increased visibility. Only the
     * tasks that Amazon ECS services create are supported with Service Connect. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const ClusterServiceConnectDefaultsRequest& GetServiceConnectDefaults() const { return m_serviceConnectDefaults; }
    inline bool ServiceConnectDefaultsHasBeenSet() const { return m_serviceConnectDefaultsHasBeenSet; }
    template<typename ServiceConnectDefaultsT = ClusterServiceConnectDefaultsRequest>
    void SetServiceConnectDefaults(ServiceConnectDefaultsT&& value) { m_serviceConnectDefaultsHasBeenSet = true; m_serviceConnectDefaults = std::forward<ServiceConnectDefaultsT>(value); }
    template<typename ServiceConnectDefaultsT = ClusterServiceConnectDefaultsRequest>
    UpdateClusterRequest& WithServiceConnectDefaults(ServiceConnectDefaultsT&& value) { SetServiceConnectDefaults(std::forward<ServiceConnectDefaultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet = false;

    ClusterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ClusterServiceConnectDefaultsRequest m_serviceConnectDefaults;
    bool m_serviceConnectDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
