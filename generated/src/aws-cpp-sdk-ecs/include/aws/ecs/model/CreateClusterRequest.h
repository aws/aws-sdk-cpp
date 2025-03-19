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
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public ECSRequest
  {
  public:
    AWS_ECS_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your cluster. If you don't specify a name for your cluster, you
     * create a cluster that's named <code>default</code>. Up to 255 letters (uppercase
     * and lowercase), numbers, underscores, and hyphens are allowed. </p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the cluster to help you categorize and
     * organize them. Each tag consists of a key and an optional value. You define
     * both.</p> <p>The following basic restrictions apply to tags:</p> <ul> <li>
     * <p>Maximum number of tags per resource - 50</p> </li> <li> <p>For each resource,
     * each tag key must be unique, and each tag key can have only one value.</p> </li>
     * <li> <p>Maximum key length - 128 Unicode characters in UTF-8</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateClusterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The setting to use when creating a cluster. This parameter is used to turn on
     * CloudWatch Container Insights for a cluster. If this value is specified, it
     * overrides the <code>containerInsights</code> value set with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSetting.html">PutAccountSetting</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSettingDefault.html">PutAccountSettingDefault</a>.</p>
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    CreateClusterRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = ClusterSetting>
    CreateClusterRequest& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>execute</code> command configuration for the cluster.</p>
     */
    inline const ClusterConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ClusterConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ClusterConfiguration>
    CreateClusterRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster. A capacity provider must be associated with a cluster before it can be
     * included as part of the default capacity provider strategy of the cluster or
     * used in a capacity provider strategy when calling the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html">CreateService</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">RunTask</a>
     * actions.</p> <p>If specifying a capacity provider that uses an Auto Scaling
     * group, the capacity provider must be created but not associated with another
     * cluster. New Auto Scaling group capacity providers can be created with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateCapacityProvider.html">CreateCapacityProvider</a>
     * API operation.</p> <p>To use a Fargate capacity provider, specify either the
     * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The
     * Fargate capacity providers are available to all accounts and only need to be
     * associated with a cluster to be used.</p> <p>The <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutCapacityProvider.html">PutCapacityProvider</a>
     * API operation is used to update the list of available capacity providers for a
     * cluster after the cluster is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const { return m_capacityProviders; }
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    void SetCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::forward<CapacityProvidersT>(value); }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    CreateClusterRequest& WithCapacityProviders(CapacityProvidersT&& value) { SetCapacityProviders(std::forward<CapacityProvidersT>(value)); return *this;}
    template<typename CapacityProvidersT = Aws::String>
    CreateClusterRequest& AddCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to set as the default for the cluster. After a
     * default capacity provider strategy is set for a cluster, when you call the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateService.html">CreateService</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">RunTask</a>
     * APIs with no capacity provider strategy or launch type specified, the default
     * capacity provider strategy for the cluster is used.</p> <p>If a default capacity
     * provider strategy isn't defined for a cluster when it was created, it can be
     * defined later with the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutClusterCapacityProviders.html">PutClusterCapacityProviders</a>
     * API operation.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetDefaultCapacityProviderStrategy() const { return m_defaultCapacityProviderStrategy; }
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::forward<DefaultCapacityProviderStrategyT>(value); }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    CreateClusterRequest& WithDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { SetDefaultCapacityProviderStrategy(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this;}
    template<typename DefaultCapacityProviderStrategyT = CapacityProviderStrategyItem>
    CreateClusterRequest& AddDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.emplace_back(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this; }
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
    CreateClusterRequest& WithServiceConnectDefaults(ServiceConnectDefaultsT&& value) { SetServiceConnectDefaults(std::forward<ServiceConnectDefaultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet = false;

    ClusterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet = false;

    ClusterServiceConnectDefaultsRequest m_serviceConnectDefaults;
    bool m_serviceConnectDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
