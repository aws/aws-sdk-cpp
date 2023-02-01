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
    AWS_ECS_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline const ClusterServiceConnectDefaultsRequest& GetServiceConnectDefaults() const{ return m_serviceConnectDefaults; }

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
    inline bool ServiceConnectDefaultsHasBeenSet() const { return m_serviceConnectDefaultsHasBeenSet; }

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
    inline void SetServiceConnectDefaults(const ClusterServiceConnectDefaultsRequest& value) { m_serviceConnectDefaultsHasBeenSet = true; m_serviceConnectDefaults = value; }

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
    inline void SetServiceConnectDefaults(ClusterServiceConnectDefaultsRequest&& value) { m_serviceConnectDefaultsHasBeenSet = true; m_serviceConnectDefaults = std::move(value); }

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
    inline UpdateClusterRequest& WithServiceConnectDefaults(const ClusterServiceConnectDefaultsRequest& value) { SetServiceConnectDefaults(value); return *this;}

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
    inline UpdateClusterRequest& WithServiceConnectDefaults(ClusterServiceConnectDefaultsRequest&& value) { SetServiceConnectDefaults(std::move(value)); return *this;}

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
