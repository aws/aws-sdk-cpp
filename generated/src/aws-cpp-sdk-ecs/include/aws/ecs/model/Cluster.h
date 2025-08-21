/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ClusterConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ClusterServiceConnectDefaults.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/Attachment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>A regional grouping of one or more container instances where you can run task
   * requests. Each account receives a default cluster the first time you use the
   * Amazon ECS service, but you may also create other clusters. Clusters may contain
   * more than one instance type simultaneously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Cluster">AWS API
   * Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_ECS_API Cluster() = default;
    AWS_ECS_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. For more
     * information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    Cluster& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-generated string that you use to identify your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    Cluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execute command and managed storage configuration for the cluster.</p>
     */
    inline const ClusterConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ClusterConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ClusterConfiguration>
    Cluster& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. The following are the possible states that are
     * returned.</p> <dl> <dt>ACTIVE</dt> <dd> <p>The cluster is ready to accept tasks
     * and if applicable you can register container instances with the cluster.</p>
     * </dd> <dt>PROVISIONING</dt> <dd> <p>The cluster has capacity providers that are
     * associated with it and the resources needed for the capacity provider are being
     * created.</p> </dd> <dt>DEPROVISIONING</dt> <dd> <p>The cluster has capacity
     * providers that are associated with it and the resources needed for the capacity
     * provider are being deleted.</p> </dd> <dt>FAILED</dt> <dd> <p>The cluster has
     * capacity providers that are associated with it and the resources needed for the
     * capacity provider have failed to create.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * cluster has been deleted. Clusters with an <code>INACTIVE</code> status may
     * remain discoverable in your account for a period of time. However, this behavior
     * is subject to change in the future. We don't recommend that you rely on
     * <code>INACTIVE</code> clusters persisting.</p> </dd> </dl>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Cluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status.</p>
     */
    inline int GetRegisteredContainerInstancesCount() const { return m_registeredContainerInstancesCount; }
    inline bool RegisteredContainerInstancesCountHasBeenSet() const { return m_registeredContainerInstancesCountHasBeenSet; }
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }
    inline Cluster& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state.</p>
     */
    inline int GetRunningTasksCount() const { return m_runningTasksCount; }
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }
    inline Cluster& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the <code>PENDING</code>
     * state.</p>
     */
    inline int GetPendingTasksCount() const { return m_pendingTasksCount; }
    inline bool PendingTasksCountHasBeenSet() const { return m_pendingTasksCountHasBeenSet; }
    inline void SetPendingTasksCount(int value) { m_pendingTasksCountHasBeenSet = true; m_pendingTasksCount = value; }
    inline Cluster& WithPendingTasksCount(int value) { SetPendingTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">ListServices</a>.</p>
     */
    inline int GetActiveServicesCount() const { return m_activeServicesCount; }
    inline bool ActiveServicesCountHasBeenSet() const { return m_activeServicesCountHasBeenSet; }
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }
    inline Cluster& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about your clusters that are separated by launch type.
     * They include the following:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>RunningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline const Aws::Vector<KeyValuePair>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<KeyValuePair>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<KeyValuePair>>
    Cluster& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    template<typename StatisticsT = KeyValuePair>
    Cluster& AddStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics.emplace_back(std::forward<StatisticsT>(value)); return *this; }
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
    Cluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Cluster& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The settings for the cluster. This parameter indicates whether CloudWatch
     * Container Insights is on or off for a cluster.</p>
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    Cluster& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = ClusterSetting>
    Cluster& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity providers associated with the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const { return m_capacityProviders; }
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    void SetCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::forward<CapacityProvidersT>(value); }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    Cluster& WithCapacityProviders(CapacityProvidersT&& value) { SetCapacityProviders(std::forward<CapacityProvidersT>(value)); return *this;}
    template<typename CapacityProvidersT = Aws::String>
    Cluster& AddCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default capacity provider strategy for the cluster. When services or
     * tasks are run in the cluster with no launch type or capacity provider strategy
     * specified, the default capacity provider strategy is used.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetDefaultCapacityProviderStrategy() const { return m_defaultCapacityProviderStrategy; }
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    void SetDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::forward<DefaultCapacityProviderStrategyT>(value); }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<CapacityProviderStrategyItem>>
    Cluster& WithDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { SetDefaultCapacityProviderStrategy(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this;}
    template<typename DefaultCapacityProviderStrategyT = CapacityProviderStrategyItem>
    Cluster& AddDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.emplace_back(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resources attached to a cluster. When using a capacity provider with a
     * cluster, the capacity provider and associated resources are returned as cluster
     * attachments.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<Attachment>>
    Cluster& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = Attachment>
    Cluster& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the capacity providers associated with the cluster. The
     * following are the states that are returned.</p> <dl> <dt>UPDATE_IN_PROGRESS</dt>
     * <dd> <p>The available capacity providers for the cluster are updating.</p> </dd>
     * <dt>UPDATE_COMPLETE</dt> <dd> <p>The capacity providers have successfully
     * updated.</p> </dd> <dt>UPDATE_FAILED</dt> <dd> <p>The capacity provider updates
     * failed.</p> </dd> </dl>
     */
    inline const Aws::String& GetAttachmentsStatus() const { return m_attachmentsStatus; }
    inline bool AttachmentsStatusHasBeenSet() const { return m_attachmentsStatusHasBeenSet; }
    template<typename AttachmentsStatusT = Aws::String>
    void SetAttachmentsStatus(AttachmentsStatusT&& value) { m_attachmentsStatusHasBeenSet = true; m_attachmentsStatus = std::forward<AttachmentsStatusT>(value); }
    template<typename AttachmentsStatusT = Aws::String>
    Cluster& WithAttachmentsStatus(AttachmentsStatusT&& value) { SetAttachmentsStatus(std::forward<AttachmentsStatusT>(value)); return *this;}
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
    inline const ClusterServiceConnectDefaults& GetServiceConnectDefaults() const { return m_serviceConnectDefaults; }
    inline bool ServiceConnectDefaultsHasBeenSet() const { return m_serviceConnectDefaultsHasBeenSet; }
    template<typename ServiceConnectDefaultsT = ClusterServiceConnectDefaults>
    void SetServiceConnectDefaults(ServiceConnectDefaultsT&& value) { m_serviceConnectDefaultsHasBeenSet = true; m_serviceConnectDefaults = std::forward<ServiceConnectDefaultsT>(value); }
    template<typename ServiceConnectDefaultsT = ClusterServiceConnectDefaults>
    Cluster& WithServiceConnectDefaults(ServiceConnectDefaultsT&& value) { SetServiceConnectDefaults(std::forward<ServiceConnectDefaultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    ClusterConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_registeredContainerInstancesCount{0};
    bool m_registeredContainerInstancesCountHasBeenSet = false;

    int m_runningTasksCount{0};
    bool m_runningTasksCountHasBeenSet = false;

    int m_pendingTasksCount{0};
    bool m_pendingTasksCountHasBeenSet = false;

    int m_activeServicesCount{0};
    bool m_activeServicesCountHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet = false;

    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_attachmentsStatus;
    bool m_attachmentsStatusHasBeenSet = false;

    ClusterServiceConnectDefaults m_serviceConnectDefaults;
    bool m_serviceConnectDefaultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
