/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/AuthTokenUpdateStrategyType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/ClusterMode.h>
#include <aws/elasticache/model/LogDeliveryConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ModifyReplicationGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class ModifyReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API ModifyReplicationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the replication group to modify.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    ModifyReplicationGroupRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const { return m_replicationGroupDescription; }
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    void SetReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::forward<ReplicationGroupDescriptionT>(value); }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    ModifyReplicationGroupRequest& WithReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { SetReplicationGroupDescription(std::forward<ReplicationGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const { return m_primaryClusterId; }
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }
    template<typename PrimaryClusterIdT = Aws::String>
    void SetPrimaryClusterId(PrimaryClusterIdT&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::forward<PrimaryClusterIdT>(value); }
    template<typename PrimaryClusterIdT = Aws::String>
    ModifyReplicationGroupRequest& WithPrimaryClusterId(PrimaryClusterIdT&& value) { SetPrimaryClusterId(std::forward<PrimaryClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Valkey or Redis OSS (cluster mode
     * enabled) replication groups.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const { return m_snapshottingClusterId; }
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }
    template<typename SnapshottingClusterIdT = Aws::String>
    void SetSnapshottingClusterId(SnapshottingClusterIdT&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::forward<SnapshottingClusterIdT>(value); }
    template<typename SnapshottingClusterIdT = Aws::String>
    ModifyReplicationGroupRequest& WithSnapshottingClusterId(SnapshottingClusterIdT&& value) { SetSnapshottingClusterId(std::forward<SnapshottingClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetAutomaticFailoverEnabled() const { return m_automaticFailoverEnabled; }
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }
    inline ModifyReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate MultiAZ is enabled.</p>
     */
    inline bool GetMultiAZEnabled() const { return m_multiAZEnabled; }
    inline bool MultiAZEnabledHasBeenSet() const { return m_multiAZEnabledHasBeenSet; }
    inline void SetMultiAZEnabled(bool value) { m_multiAZEnabledHasBeenSet = true; m_multiAZEnabled = value; }
    inline ModifyReplicationGroupRequest& WithMultiAZEnabled(bool value) { SetMultiAZEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security group names to authorize for the clusters in this
     * replication group. This change is asynchronously applied as soon as
     * possible.</p> <p>This parameter can be used only with replication group
     * containing clusters running outside of an Amazon Virtual Private Cloud (Amazon
     * VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric characters.
     * Must not be <code>Default</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const { return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    void SetCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::forward<CacheSecurityGroupNamesT>(value); }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { SetCacheSecurityGroupNames(std::forward<CacheSecurityGroupNamesT>(value)); return *this;}
    template<typename CacheSecurityGroupNamesT = Aws::String>
    ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.emplace_back(std::forward<CacheSecurityGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ModifyReplicationGroupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p>  <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const { return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    template<typename NotificationTopicArnT = Aws::String>
    void SetNotificationTopicArn(NotificationTopicArnT&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::forward<NotificationTopicArnT>(value); }
    template<typename NotificationTopicArnT = Aws::String>
    ModifyReplicationGroupRequest& WithNotificationTopicArn(NotificationTopicArnT&& value) { SetNotificationTopicArn(std::forward<NotificationTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    ModifyReplicationGroupRequest& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const { return m_notificationTopicStatus; }
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }
    template<typename NotificationTopicStatusT = Aws::String>
    void SetNotificationTopicStatus(NotificationTopicStatusT&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::forward<NotificationTopicStatusT>(value); }
    template<typename NotificationTopicStatusT = Aws::String>
    ModifyReplicationGroupRequest& WithNotificationTopicStatus(NotificationTopicStatusT&& value) { SetNotificationTopicStatus(std::forward<NotificationTopicStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the replication group.</p> <p>If <code>false</code>, changes to the nodes in the
     * replication group are applied on the next maintenance reboot, or the next
     * failure reboot, whichever occurs first.</p> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the engine listed in a replication group message. The options are
     * redis, memcached or valkey.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ModifyReplicationGroupRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyReplicationGroupRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey or Redis OSS engine version 6.0 or later, set this
     * parameter to yes if you want to opt-in to the next auto minor version upgrade
     * campaign. This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic node group (shard)
     * snapshots before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <p> <b>Important</b> If the value
     * of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ModifyReplicationGroupRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of the node group (shard) specified by
     * <code>SnapshottingClusterId</code>.</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    ModifyReplicationGroupRequest& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    ModifyReplicationGroupRequest& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved parameter. The password used to access a password protected server.
     * This parameter must be specified with the <code>auth-token-update-strategy
     * </code> parameter. Password constraints:</p> <ul> <li> <p>Must be only printable
     * ASCII characters</p> </li> <li> <p>Must be at least 16 characters and no more
     * than 128 characters in length</p> </li> <li> <p>Cannot contain any of the
     * following characters: '/', '"', or '@', '%'</p> </li> </ul> <p> For more
     * information, see AUTH password at <a
     * href="http://redis.io/commands/AUTH">AUTH</a>.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    ModifyReplicationGroupRequest& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the strategy to use to update the AUTH token. This parameter must
     * be specified with the <code>auth-token</code> parameter. Possible values:</p>
     * <ul> <li> <p>ROTATE - default, if no update strategy is provided</p> </li> <li>
     * <p>SET - allowed only after ROTATE</p> </li> <li> <p>DELETE - allowed only when
     * transitioning to RBAC</p> </li> </ul> <p> For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/auth.html">Authenticating
     * Users with AUTH</a> </p>
     */
    inline AuthTokenUpdateStrategyType GetAuthTokenUpdateStrategy() const { return m_authTokenUpdateStrategy; }
    inline bool AuthTokenUpdateStrategyHasBeenSet() const { return m_authTokenUpdateStrategyHasBeenSet; }
    inline void SetAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType value) { m_authTokenUpdateStrategyHasBeenSet = true; m_authTokenUpdateStrategy = value; }
    inline ModifyReplicationGroupRequest& WithAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType value) { SetAuthTokenUpdateStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user group you are associating with the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToAdd() const { return m_userGroupIdsToAdd; }
    inline bool UserGroupIdsToAddHasBeenSet() const { return m_userGroupIdsToAddHasBeenSet; }
    template<typename UserGroupIdsToAddT = Aws::Vector<Aws::String>>
    void SetUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = std::forward<UserGroupIdsToAddT>(value); }
    template<typename UserGroupIdsToAddT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupRequest& WithUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { SetUserGroupIdsToAdd(std::forward<UserGroupIdsToAddT>(value)); return *this;}
    template<typename UserGroupIdsToAddT = Aws::String>
    ModifyReplicationGroupRequest& AddUserGroupIdsToAdd(UserGroupIdsToAddT&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.emplace_back(std::forward<UserGroupIdsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the user group to disassociate from the replication group, meaning
     * the users in the group no longer can access the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToRemove() const { return m_userGroupIdsToRemove; }
    inline bool UserGroupIdsToRemoveHasBeenSet() const { return m_userGroupIdsToRemoveHasBeenSet; }
    template<typename UserGroupIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = std::forward<UserGroupIdsToRemoveT>(value); }
    template<typename UserGroupIdsToRemoveT = Aws::Vector<Aws::String>>
    ModifyReplicationGroupRequest& WithUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { SetUserGroupIdsToRemove(std::forward<UserGroupIdsToRemoveT>(value)); return *this;}
    template<typename UserGroupIdsToRemoveT = Aws::String>
    ModifyReplicationGroupRequest& AddUserGroupIdsToRemove(UserGroupIdsToRemoveT&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.emplace_back(std::forward<UserGroupIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes the user group associated with this replication group.</p>
     */
    inline bool GetRemoveUserGroups() const { return m_removeUserGroups; }
    inline bool RemoveUserGroupsHasBeenSet() const { return m_removeUserGroupsHasBeenSet; }
    inline void SetRemoveUserGroups(bool value) { m_removeUserGroupsHasBeenSet = true; m_removeUserGroups = value; }
    inline ModifyReplicationGroupRequest& WithRemoveUserGroups(bool value) { SetRemoveUserGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfigurationRequest>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfigurationRequest>>
    ModifyReplicationGroupRequest& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = LogDeliveryConfigurationRequest>
    ModifyReplicationGroupRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network type you choose when modifying a cluster, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 to 7.1 and Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline IpDiscovery GetIpDiscovery() const { return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(IpDiscovery value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline ModifyReplicationGroupRequest& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true. If you are
     * enabling in-transit encryption for an existing cluster, you must also set
     * <code>TransitEncryptionMode</code> to <code>preferred</code>.</p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline ModifyReplicationGroupRequest& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p> <p>You must set
     * <code>TransitEncryptionEnabled</code> to <code>true</code>, for your existing
     * cluster, and set <code>TransitEncryptionMode</code> to <code>preferred</code> in
     * the same request to allow both encrypted and unencrypted connections at the same
     * time. Once you migrate all your Valkey or Redis OSS clients to use encrypted
     * connections you can set the value to <code>required</code> to allow encrypted
     * connections only.</p> <p>Setting <code>TransitEncryptionMode</code> to
     * <code>required</code> is a two-step process that requires you to first set the
     * <code>TransitEncryptionMode</code> to <code>preferred</code>, after that you can
     * set <code>TransitEncryptionMode</code> to <code>required</code>. </p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline ModifyReplicationGroupRequest& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enabled or Disabled. To modify cluster mode from Disabled to Enabled, you
     * must first set the cluster mode to Compatible. Compatible mode allows your
     * Valkey or Redis OSS clients to connect using both cluster mode enabled and
     * cluster mode disabled. After you migrate all Valkey or Redis OSS clients to use
     * cluster mode enabled, you can then complete cluster mode configuration and set
     * the cluster mode to Enabled.</p>
     */
    inline ClusterMode GetClusterMode() const { return m_clusterMode; }
    inline bool ClusterModeHasBeenSet() const { return m_clusterModeHasBeenSet; }
    inline void SetClusterMode(ClusterMode value) { m_clusterModeHasBeenSet = true; m_clusterMode = value; }
    inline ModifyReplicationGroupRequest& WithClusterMode(ClusterMode value) { SetClusterMode(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet = false;

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet = false;

    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet = false;

    bool m_automaticFailoverEnabled{false};
    bool m_automaticFailoverEnabledHasBeenSet = false;

    bool m_multiAZEnabled{false};
    bool m_multiAZEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    AuthTokenUpdateStrategyType m_authTokenUpdateStrategy{AuthTokenUpdateStrategyType::NOT_SET};
    bool m_authTokenUpdateStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToAdd;
    bool m_userGroupIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToRemove;
    bool m_userGroupIdsToRemoveHasBeenSet = false;

    bool m_removeUserGroups{false};
    bool m_removeUserGroupsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode{ClusterMode::NOT_SET};
    bool m_clusterModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
