﻿/**
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
    AWS_ELASTICACHE_API ModifyReplicationGroupRequest();

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
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the replication group. Maximum length is 255
     * characters.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::move(value); }
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For replication groups with a single primary, if this parameter is specified,
     * ElastiCache promotes the specified cluster in the specified replication group to
     * the primary role. The nodes of all other clusters in the replication group are
     * read replicas.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::move(value); }
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group. This parameter cannot be set for Redis (cluster mode enabled) replication
     * groups.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }
    inline void SetSnapshottingClusterId(Aws::String&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::move(value); }
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(Aws::String&& value) { SetSnapshottingClusterId(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a read replica is automatically promoted to read/write
     * primary if the existing primary encounters a failure.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }
    inline ModifyReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to indicate MultiAZ is enabled.</p>
     */
    inline bool GetMultiAZEnabled() const{ return m_multiAZEnabled; }
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
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}
    inline ModifyReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }
    inline ModifyReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC Security Groups associated with the clusters in the
     * replication group.</p> <p>This parameter can be used only with replication group
     * containing clusters running in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline ModifyReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
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
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p>  <p>The Amazon SNS topic owner must be same as the
     * replication group owner. </p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache parameter group to apply to all of the clusters in this
     * replication group. This change is asynchronously applied as soon as possible for
     * parameters when the <code>ApplyImmediately</code> parameter is specified as
     * <code>true</code> for this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon SNS notification topic for the replication group.
     * Notifications are sent only if the status is <code>active</code>.</p> <p>Valid
     * values: <code>active</code> | <code>inactive</code> </p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}
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
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upgraded version of the cache engine to be run on the clusters in the
     * replication group.</p> <p> <b>Important:</b> You can upgrade to a newer engine
     * version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing replication group and create it anew with the earlier engine version.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ModifyReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ModifyReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Redis engine version 6.0 or later, set this parameter to
     * yes if you want to opt-in to the next auto minor version upgrade campaign. This
     * parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
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
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
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
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid cache node type that you want to scale this replication group to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline ModifyReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
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
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = std::move(value); }
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }
    inline ModifyReplicationGroupRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}
    inline ModifyReplicationGroupRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the strategy to use to update the AUTH token. This parameter must
     * be specified with the <code>auth-token</code> parameter. Possible values:</p>
     * <ul> <li> <p>ROTATE - default, if no update strategy is provided</p> </li> <li>
     * <p>SET - allowed only after ROTATE</p> </li> <li> <p>DELETE - allowed only when
     * transitioning to RBAC</p> </li> </ul> <p> For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/auth.html">Authenticating
     * Users with Redis AUTH</a> </p>
     */
    inline const AuthTokenUpdateStrategyType& GetAuthTokenUpdateStrategy() const{ return m_authTokenUpdateStrategy; }
    inline bool AuthTokenUpdateStrategyHasBeenSet() const { return m_authTokenUpdateStrategyHasBeenSet; }
    inline void SetAuthTokenUpdateStrategy(const AuthTokenUpdateStrategyType& value) { m_authTokenUpdateStrategyHasBeenSet = true; m_authTokenUpdateStrategy = value; }
    inline void SetAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType&& value) { m_authTokenUpdateStrategyHasBeenSet = true; m_authTokenUpdateStrategy = std::move(value); }
    inline ModifyReplicationGroupRequest& WithAuthTokenUpdateStrategy(const AuthTokenUpdateStrategyType& value) { SetAuthTokenUpdateStrategy(value); return *this;}
    inline ModifyReplicationGroupRequest& WithAuthTokenUpdateStrategy(AuthTokenUpdateStrategyType&& value) { SetAuthTokenUpdateStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user group you are associating with the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToAdd() const{ return m_userGroupIdsToAdd; }
    inline bool UserGroupIdsToAddHasBeenSet() const { return m_userGroupIdsToAddHasBeenSet; }
    inline void SetUserGroupIdsToAdd(const Aws::Vector<Aws::String>& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = value; }
    inline void SetUserGroupIdsToAdd(Aws::Vector<Aws::String>&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd = std::move(value); }
    inline ModifyReplicationGroupRequest& WithUserGroupIdsToAdd(const Aws::Vector<Aws::String>& value) { SetUserGroupIdsToAdd(value); return *this;}
    inline ModifyReplicationGroupRequest& WithUserGroupIdsToAdd(Aws::Vector<Aws::String>&& value) { SetUserGroupIdsToAdd(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToAdd(const Aws::String& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(value); return *this; }
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToAdd(Aws::String&& value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(std::move(value)); return *this; }
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToAdd(const char* value) { m_userGroupIdsToAddHasBeenSet = true; m_userGroupIdsToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the user group to disassociate from the replication group, meaning
     * the users in the group no longer can access the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIdsToRemove() const{ return m_userGroupIdsToRemove; }
    inline bool UserGroupIdsToRemoveHasBeenSet() const { return m_userGroupIdsToRemoveHasBeenSet; }
    inline void SetUserGroupIdsToRemove(const Aws::Vector<Aws::String>& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = value; }
    inline void SetUserGroupIdsToRemove(Aws::Vector<Aws::String>&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove = std::move(value); }
    inline ModifyReplicationGroupRequest& WithUserGroupIdsToRemove(const Aws::Vector<Aws::String>& value) { SetUserGroupIdsToRemove(value); return *this;}
    inline ModifyReplicationGroupRequest& WithUserGroupIdsToRemove(Aws::Vector<Aws::String>&& value) { SetUserGroupIdsToRemove(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToRemove(const Aws::String& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(value); return *this; }
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToRemove(Aws::String&& value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(std::move(value)); return *this; }
    inline ModifyReplicationGroupRequest& AddUserGroupIdsToRemove(const char* value) { m_userGroupIdsToRemoveHasBeenSet = true; m_userGroupIdsToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes the user group associated with this replication group.</p>
     */
    inline bool GetRemoveUserGroups() const{ return m_removeUserGroups; }
    inline bool RemoveUserGroupsHasBeenSet() const { return m_removeUserGroupsHasBeenSet; }
    inline void SetRemoveUserGroups(bool value) { m_removeUserGroupsHasBeenSet = true; m_removeUserGroups = value; }
    inline ModifyReplicationGroupRequest& WithRemoveUserGroups(bool value) { SetRemoveUserGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline ModifyReplicationGroupRequest& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline ModifyReplicationGroupRequest& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline ModifyReplicationGroupRequest& AddLogDeliveryConfigurations(const LogDeliveryConfigurationRequest& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline ModifyReplicationGroupRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationRequest&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network type you choose when modifying a cluster, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Redis engine version 6.2 onward or Memcached engine version 1.6.6 on all
     * instances built on the <a href="http://aws.amazon.com/ec2/nitro/">Nitro
     * system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }
    inline ModifyReplicationGroupRequest& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}
    inline ModifyReplicationGroupRequest& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true. If you are
     * enabling in-transit encryption for an existing cluster, you must also set
     * <code>TransitEncryptionMode</code> to <code>preferred</code>.</p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
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
     * time. Once you migrate all your Redis clients to use encrypted connections you
     * can set the value to <code>required</code> to allow encrypted connections
     * only.</p> <p>Setting <code>TransitEncryptionMode</code> to <code>required</code>
     * is a two-step process that requires you to first set the
     * <code>TransitEncryptionMode</code> to <code>preferred</code>, after that you can
     * set <code>TransitEncryptionMode</code> to <code>required</code>. </p>
     */
    inline const TransitEncryptionMode& GetTransitEncryptionMode() const{ return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(const TransitEncryptionMode& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode&& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = std::move(value); }
    inline ModifyReplicationGroupRequest& WithTransitEncryptionMode(const TransitEncryptionMode& value) { SetTransitEncryptionMode(value); return *this;}
    inline ModifyReplicationGroupRequest& WithTransitEncryptionMode(TransitEncryptionMode&& value) { SetTransitEncryptionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enabled or Disabled. To modify cluster mode from Disabled to Enabled, you
     * must first set the cluster mode to Compatible. Compatible mode allows your Redis
     * clients to connect using both cluster mode enabled and cluster mode disabled.
     * After you migrate all Redis clients to use cluster mode enabled, you can then
     * complete cluster mode configuration and set the cluster mode to Enabled.</p>
     */
    inline const ClusterMode& GetClusterMode() const{ return m_clusterMode; }
    inline bool ClusterModeHasBeenSet() const { return m_clusterModeHasBeenSet; }
    inline void SetClusterMode(const ClusterMode& value) { m_clusterModeHasBeenSet = true; m_clusterMode = value; }
    inline void SetClusterMode(ClusterMode&& value) { m_clusterModeHasBeenSet = true; m_clusterMode = std::move(value); }
    inline ModifyReplicationGroupRequest& WithClusterMode(const ClusterMode& value) { SetClusterMode(value); return *this;}
    inline ModifyReplicationGroupRequest& WithClusterMode(ClusterMode&& value) { SetClusterMode(std::move(value)); return *this;}
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

    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet = false;

    bool m_multiAZEnabled;
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

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    AuthTokenUpdateStrategyType m_authTokenUpdateStrategy;
    bool m_authTokenUpdateStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToAdd;
    bool m_userGroupIdsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIdsToRemove;
    bool m_userGroupIdsToRemoveHasBeenSet = false;

    bool m_removeUserGroups;
    bool m_removeUserGroupsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode;
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode;
    bool m_clusterModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
