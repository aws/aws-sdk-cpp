/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/GlobalReplicationGroupInfo.h>
#include <aws/elasticache/model/ReplicationGroupPendingModifiedValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
#include <aws/elasticache/model/MultiAZStatus.h>
#include <aws/elasticache/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/DataTieringStatus.h>
#include <aws/elasticache/model/NetworkType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/ClusterMode.h>
#include <aws/elasticache/model/NodeGroup.h>
#include <aws/elasticache/model/LogDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Contains all of the attributes of a specific Valkey or Redis OSS replication
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReplicationGroup">AWS
   * API Reference</a></p>
   */
  class ReplicationGroup
  {
  public:
    AWS_ELASTICACHE_API ReplicationGroup() = default;
    AWS_ELASTICACHE_API ReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    ReplicationGroup& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReplicationGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Global datastore and role of this replication group in the
     * Global datastore.</p>
     */
    inline const GlobalReplicationGroupInfo& GetGlobalReplicationGroupInfo() const { return m_globalReplicationGroupInfo; }
    inline bool GlobalReplicationGroupInfoHasBeenSet() const { return m_globalReplicationGroupInfoHasBeenSet; }
    template<typename GlobalReplicationGroupInfoT = GlobalReplicationGroupInfo>
    void SetGlobalReplicationGroupInfo(GlobalReplicationGroupInfoT&& value) { m_globalReplicationGroupInfoHasBeenSet = true; m_globalReplicationGroupInfo = std::forward<GlobalReplicationGroupInfoT>(value); }
    template<typename GlobalReplicationGroupInfoT = GlobalReplicationGroupInfo>
    ReplicationGroup& WithGlobalReplicationGroupInfo(GlobalReplicationGroupInfoT&& value) { SetGlobalReplicationGroupInfo(std::forward<GlobalReplicationGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReplicationGroup& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline const ReplicationGroupPendingModifiedValues& GetPendingModifiedValues() const { return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    template<typename PendingModifiedValuesT = ReplicationGroupPendingModifiedValues>
    void SetPendingModifiedValues(PendingModifiedValuesT&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::forward<PendingModifiedValuesT>(value); }
    template<typename PendingModifiedValuesT = ReplicationGroupPendingModifiedValues>
    ReplicationGroup& WithPendingModifiedValues(PendingModifiedValuesT&& value) { SetPendingModifiedValues(std::forward<PendingModifiedValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClusters() const { return m_memberClusters; }
    inline bool MemberClustersHasBeenSet() const { return m_memberClustersHasBeenSet; }
    template<typename MemberClustersT = Aws::Vector<Aws::String>>
    void SetMemberClusters(MemberClustersT&& value) { m_memberClustersHasBeenSet = true; m_memberClusters = std::forward<MemberClustersT>(value); }
    template<typename MemberClustersT = Aws::Vector<Aws::String>>
    ReplicationGroup& WithMemberClusters(MemberClustersT&& value) { SetMemberClusters(std::forward<MemberClustersT>(value)); return *this;}
    template<typename MemberClustersT = Aws::String>
    ReplicationGroup& AddMemberClusters(MemberClustersT&& value) { m_memberClustersHasBeenSet = true; m_memberClusters.emplace_back(std::forward<MemberClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of node groups in this replication group. For Valkey or Redis OSS
     * (cluster mode disabled) replication groups, this is a single-element list. For
     * Valkey or Redis OSS (cluster mode enabled) replication groups, the list contains
     * an entry for each node group (shard).</p>
     */
    inline const Aws::Vector<NodeGroup>& GetNodeGroups() const { return m_nodeGroups; }
    inline bool NodeGroupsHasBeenSet() const { return m_nodeGroupsHasBeenSet; }
    template<typename NodeGroupsT = Aws::Vector<NodeGroup>>
    void SetNodeGroups(NodeGroupsT&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = std::forward<NodeGroupsT>(value); }
    template<typename NodeGroupsT = Aws::Vector<NodeGroup>>
    ReplicationGroup& WithNodeGroups(NodeGroupsT&& value) { SetNodeGroups(std::forward<NodeGroupsT>(value)); return *this;}
    template<typename NodeGroupsT = NodeGroup>
    ReplicationGroup& AddNodeGroups(NodeGroupsT&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.emplace_back(std::forward<NodeGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const { return m_snapshottingClusterId; }
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }
    template<typename SnapshottingClusterIdT = Aws::String>
    void SetSnapshottingClusterId(SnapshottingClusterIdT&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::forward<SnapshottingClusterIdT>(value); }
    template<typename SnapshottingClusterIdT = Aws::String>
    ReplicationGroup& WithSnapshottingClusterId(SnapshottingClusterIdT&& value) { SetSnapshottingClusterId(std::forward<SnapshottingClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of automatic failover for this Valkey or Redis OSS
     * replication group.</p>
     */
    inline AutomaticFailoverStatus GetAutomaticFailover() const { return m_automaticFailover; }
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }
    inline void SetAutomaticFailover(AutomaticFailoverStatus value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }
    inline ReplicationGroup& WithAutomaticFailover(AutomaticFailoverStatus value) { SetAutomaticFailover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline MultiAZStatus GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(MultiAZStatus value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReplicationGroup& WithMultiAZ(MultiAZStatus value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const { return m_configurationEndpoint; }
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }
    template<typename ConfigurationEndpointT = Endpoint>
    void SetConfigurationEndpoint(ConfigurationEndpointT&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::forward<ConfigurationEndpointT>(value); }
    template<typename ConfigurationEndpointT = Endpoint>
    ReplicationGroup& WithConfigurationEndpoint(ConfigurationEndpointT&& value) { SetConfigurationEndpoint(std::forward<ConfigurationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline ReplicationGroup& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    ReplicationGroup& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetClusterEnabled() const { return m_clusterEnabled; }
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }
    inline ReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    ReplicationGroup& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const { return m_authTokenEnabled; }
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }
    inline ReplicationGroup& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the auth token was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetAuthTokenLastModifiedDate() const { return m_authTokenLastModifiedDate; }
    inline bool AuthTokenLastModifiedDateHasBeenSet() const { return m_authTokenLastModifiedDateHasBeenSet; }
    template<typename AuthTokenLastModifiedDateT = Aws::Utils::DateTime>
    void SetAuthTokenLastModifiedDate(AuthTokenLastModifiedDateT&& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = std::forward<AuthTokenLastModifiedDateT>(value); }
    template<typename AuthTokenLastModifiedDateT = Aws::Utils::DateTime>
    ReplicationGroup& WithAuthTokenLastModifiedDate(AuthTokenLastModifiedDateT&& value) { SetAuthTokenLastModifiedDate(std::forward<AuthTokenLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using Redis OSS version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline ReplicationGroup& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable encryption at-rest on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using Redis OSS version <code>3.2.6</code>,
     * <code>4.x</code> or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const { return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline ReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClustersOutpostArns() const { return m_memberClustersOutpostArns; }
    inline bool MemberClustersOutpostArnsHasBeenSet() const { return m_memberClustersOutpostArnsHasBeenSet; }
    template<typename MemberClustersOutpostArnsT = Aws::Vector<Aws::String>>
    void SetMemberClustersOutpostArns(MemberClustersOutpostArnsT&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns = std::forward<MemberClustersOutpostArnsT>(value); }
    template<typename MemberClustersOutpostArnsT = Aws::Vector<Aws::String>>
    ReplicationGroup& WithMemberClustersOutpostArns(MemberClustersOutpostArnsT&& value) { SetMemberClustersOutpostArns(std::forward<MemberClustersOutpostArnsT>(value)); return *this;}
    template<typename MemberClustersOutpostArnsT = Aws::String>
    ReplicationGroup& AddMemberClustersOutpostArns(MemberClustersOutpostArnsT&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.emplace_back(std::forward<MemberClustersOutpostArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ReplicationGroup& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ReplicationGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user group associated to the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const { return m_userGroupIds; }
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }
    template<typename UserGroupIdsT = Aws::Vector<Aws::String>>
    void SetUserGroupIds(UserGroupIdsT&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::forward<UserGroupIdsT>(value); }
    template<typename UserGroupIdsT = Aws::Vector<Aws::String>>
    ReplicationGroup& WithUserGroupIds(UserGroupIdsT&& value) { SetUserGroupIds(std::forward<UserGroupIdsT>(value)); return *this;}
    template<typename UserGroupIdsT = Aws::String>
    ReplicationGroup& AddUserGroupIds(UserGroupIdsT&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.emplace_back(std::forward<UserGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the destination, format and type of the logs. </p>
     */
    inline const Aws::Vector<LogDeliveryConfiguration>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfiguration>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfiguration>>
    ReplicationGroup& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = LogDeliveryConfiguration>
    ReplicationGroup& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationGroupCreateTime() const { return m_replicationGroupCreateTime; }
    inline bool ReplicationGroupCreateTimeHasBeenSet() const { return m_replicationGroupCreateTimeHasBeenSet; }
    template<typename ReplicationGroupCreateTimeT = Aws::Utils::DateTime>
    void SetReplicationGroupCreateTime(ReplicationGroupCreateTimeT&& value) { m_replicationGroupCreateTimeHasBeenSet = true; m_replicationGroupCreateTime = std::forward<ReplicationGroupCreateTimeT>(value); }
    template<typename ReplicationGroupCreateTimeT = Aws::Utils::DateTime>
    ReplicationGroup& WithReplicationGroupCreateTime(ReplicationGroupCreateTimeT&& value) { SetReplicationGroupCreateTime(std::forward<ReplicationGroupCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline DataTieringStatus GetDataTiering() const { return m_dataTiering; }
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }
    inline void SetDataTiering(DataTieringStatus value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }
    inline ReplicationGroup& WithDataTiering(DataTieringStatus value) { SetDataTiering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are running Valkey 7.2 and above, or Redis OSS engine version 6.0 and
     * above, set this parameter to yes if you want to opt-in to the next auto minor
     * version upgrade campaign. This parameter is disabled for previous versions. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ReplicationGroup& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 to 7.1 or Memcached engine version 1.6.6 and
     * above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline ReplicationGroup& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type you choose when modifying a cluster, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 to 7.1 or Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline IpDiscovery GetIpDiscovery() const { return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(IpDiscovery value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline ReplicationGroup& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline ReplicationGroup& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
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
    inline ReplicationGroup& WithClusterMode(ClusterMode value) { SetClusterMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine used in a replication group. The options are redis, memcached or
     * valkey.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ReplicationGroup& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GlobalReplicationGroupInfo m_globalReplicationGroupInfo;
    bool m_globalReplicationGroupInfoHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ReplicationGroupPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberClusters;
    bool m_memberClustersHasBeenSet = false;

    Aws::Vector<NodeGroup> m_nodeGroups;
    bool m_nodeGroupsHasBeenSet = false;

    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet = false;

    AutomaticFailoverStatus m_automaticFailover{AutomaticFailoverStatus::NOT_SET};
    bool m_automaticFailoverHasBeenSet = false;

    MultiAZStatus m_multiAZ{MultiAZStatus::NOT_SET};
    bool m_multiAZHasBeenSet = false;

    Endpoint m_configurationEndpoint;
    bool m_configurationEndpointHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    bool m_clusterEnabled{false};
    bool m_clusterEnabledHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    bool m_authTokenEnabled{false};
    bool m_authTokenEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_authTokenLastModifiedDate{};
    bool m_authTokenLastModifiedDateHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled{false};
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberClustersOutpostArns;
    bool m_memberClustersOutpostArnsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    Aws::Utils::DateTime m_replicationGroupCreateTime{};
    bool m_replicationGroupCreateTimeHasBeenSet = false;

    DataTieringStatus m_dataTiering{DataTieringStatus::NOT_SET};
    bool m_dataTieringHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode{ClusterMode::NOT_SET};
    bool m_clusterModeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
