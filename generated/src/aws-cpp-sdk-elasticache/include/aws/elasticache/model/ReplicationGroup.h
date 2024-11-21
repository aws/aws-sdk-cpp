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
    AWS_ELASTICACHE_API ReplicationGroup();
    AWS_ELASTICACHE_API ReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline ReplicationGroup& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline ReplicationGroup& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline ReplicationGroup& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReplicationGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReplicationGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReplicationGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Global datastore and role of this replication group in the
     * Global datastore.</p>
     */
    inline const GlobalReplicationGroupInfo& GetGlobalReplicationGroupInfo() const{ return m_globalReplicationGroupInfo; }
    inline bool GlobalReplicationGroupInfoHasBeenSet() const { return m_globalReplicationGroupInfoHasBeenSet; }
    inline void SetGlobalReplicationGroupInfo(const GlobalReplicationGroupInfo& value) { m_globalReplicationGroupInfoHasBeenSet = true; m_globalReplicationGroupInfo = value; }
    inline void SetGlobalReplicationGroupInfo(GlobalReplicationGroupInfo&& value) { m_globalReplicationGroupInfoHasBeenSet = true; m_globalReplicationGroupInfo = std::move(value); }
    inline ReplicationGroup& WithGlobalReplicationGroupInfo(const GlobalReplicationGroupInfo& value) { SetGlobalReplicationGroupInfo(value); return *this;}
    inline ReplicationGroup& WithGlobalReplicationGroupInfo(GlobalReplicationGroupInfo&& value) { SetGlobalReplicationGroupInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ReplicationGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ReplicationGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ReplicationGroup& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline const ReplicationGroupPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }
    inline void SetPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }
    inline void SetPendingModifiedValues(ReplicationGroupPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }
    inline ReplicationGroup& WithPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}
    inline ReplicationGroup& WithPendingModifiedValues(ReplicationGroupPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClusters() const{ return m_memberClusters; }
    inline bool MemberClustersHasBeenSet() const { return m_memberClustersHasBeenSet; }
    inline void SetMemberClusters(const Aws::Vector<Aws::String>& value) { m_memberClustersHasBeenSet = true; m_memberClusters = value; }
    inline void SetMemberClusters(Aws::Vector<Aws::String>&& value) { m_memberClustersHasBeenSet = true; m_memberClusters = std::move(value); }
    inline ReplicationGroup& WithMemberClusters(const Aws::Vector<Aws::String>& value) { SetMemberClusters(value); return *this;}
    inline ReplicationGroup& WithMemberClusters(Aws::Vector<Aws::String>&& value) { SetMemberClusters(std::move(value)); return *this;}
    inline ReplicationGroup& AddMemberClusters(const Aws::String& value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }
    inline ReplicationGroup& AddMemberClusters(Aws::String&& value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(std::move(value)); return *this; }
    inline ReplicationGroup& AddMemberClusters(const char* value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of node groups in this replication group. For Valkey or Redis OSS
     * (cluster mode disabled) replication groups, this is a single-element list. For
     * Valkey or Redis OSS (cluster mode enabled) replication groups, the list contains
     * an entry for each node group (shard).</p>
     */
    inline const Aws::Vector<NodeGroup>& GetNodeGroups() const{ return m_nodeGroups; }
    inline bool NodeGroupsHasBeenSet() const { return m_nodeGroupsHasBeenSet; }
    inline void SetNodeGroups(const Aws::Vector<NodeGroup>& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = value; }
    inline void SetNodeGroups(Aws::Vector<NodeGroup>&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = std::move(value); }
    inline ReplicationGroup& WithNodeGroups(const Aws::Vector<NodeGroup>& value) { SetNodeGroups(value); return *this;}
    inline ReplicationGroup& WithNodeGroups(Aws::Vector<NodeGroup>&& value) { SetNodeGroups(std::move(value)); return *this;}
    inline ReplicationGroup& AddNodeGroups(const NodeGroup& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.push_back(value); return *this; }
    inline ReplicationGroup& AddNodeGroups(NodeGroup&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }
    inline void SetSnapshottingClusterId(Aws::String&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::move(value); }
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }
    inline ReplicationGroup& WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}
    inline ReplicationGroup& WithSnapshottingClusterId(Aws::String&& value) { SetSnapshottingClusterId(std::move(value)); return *this;}
    inline ReplicationGroup& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of automatic failover for this Valkey or Redis OSS
     * replication group.</p>
     */
    inline const AutomaticFailoverStatus& GetAutomaticFailover() const{ return m_automaticFailover; }
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }
    inline void SetAutomaticFailover(const AutomaticFailoverStatus& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }
    inline void SetAutomaticFailover(AutomaticFailoverStatus&& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = std::move(value); }
    inline ReplicationGroup& WithAutomaticFailover(const AutomaticFailoverStatus& value) { SetAutomaticFailover(value); return *this;}
    inline ReplicationGroup& WithAutomaticFailover(AutomaticFailoverStatus&& value) { SetAutomaticFailover(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline const MultiAZStatus& GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(const MultiAZStatus& value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline void SetMultiAZ(MultiAZStatus&& value) { m_multiAZHasBeenSet = true; m_multiAZ = std::move(value); }
    inline ReplicationGroup& WithMultiAZ(const MultiAZStatus& value) { SetMultiAZ(value); return *this;}
    inline ReplicationGroup& WithMultiAZ(MultiAZStatus&& value) { SetMultiAZ(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const{ return m_configurationEndpoint; }
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }
    inline void SetConfigurationEndpoint(const Endpoint& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = value; }
    inline void SetConfigurationEndpoint(Endpoint&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::move(value); }
    inline ReplicationGroup& WithConfigurationEndpoint(const Endpoint& value) { SetConfigurationEndpoint(value); return *this;}
    inline ReplicationGroup& WithConfigurationEndpoint(Endpoint&& value) { SetConfigurationEndpoint(std::move(value)); return *this;}
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
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
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
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline ReplicationGroup& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline ReplicationGroup& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline ReplicationGroup& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetClusterEnabled() const{ return m_clusterEnabled; }
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }
    inline ReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline ReplicationGroup& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline ReplicationGroup& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline ReplicationGroup& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Valkey or Redis OSS commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }
    inline ReplicationGroup& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the auth token was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetAuthTokenLastModifiedDate() const{ return m_authTokenLastModifiedDate; }
    inline bool AuthTokenLastModifiedDateHasBeenSet() const { return m_authTokenLastModifiedDateHasBeenSet; }
    inline void SetAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = value; }
    inline void SetAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = std::move(value); }
    inline ReplicationGroup& WithAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { SetAuthTokenLastModifiedDate(value); return *this;}
    inline ReplicationGroup& WithAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { SetAuthTokenLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p> <b>Required:</b> Only available when creating a replication group in an
     * Amazon VPC using Redis OSS version <code>3.2.6</code>, <code>4.x</code> or
     * later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
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
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline ReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClustersOutpostArns() const{ return m_memberClustersOutpostArns; }
    inline bool MemberClustersOutpostArnsHasBeenSet() const { return m_memberClustersOutpostArnsHasBeenSet; }
    inline void SetMemberClustersOutpostArns(const Aws::Vector<Aws::String>& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns = value; }
    inline void SetMemberClustersOutpostArns(Aws::Vector<Aws::String>&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns = std::move(value); }
    inline ReplicationGroup& WithMemberClustersOutpostArns(const Aws::Vector<Aws::String>& value) { SetMemberClustersOutpostArns(value); return *this;}
    inline ReplicationGroup& WithMemberClustersOutpostArns(Aws::Vector<Aws::String>&& value) { SetMemberClustersOutpostArns(std::move(value)); return *this;}
    inline ReplicationGroup& AddMemberClustersOutpostArns(const Aws::String& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(value); return *this; }
    inline ReplicationGroup& AddMemberClustersOutpostArns(Aws::String&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(std::move(value)); return *this; }
    inline ReplicationGroup& AddMemberClustersOutpostArns(const char* value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ReplicationGroup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ReplicationGroup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ReplicationGroup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline ReplicationGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ReplicationGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ReplicationGroup& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user group associated to the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = value; }
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::move(value); }
    inline ReplicationGroup& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}
    inline ReplicationGroup& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}
    inline ReplicationGroup& AddUserGroupIds(const Aws::String& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }
    inline ReplicationGroup& AddUserGroupIds(Aws::String&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(std::move(value)); return *this; }
    inline ReplicationGroup& AddUserGroupIds(const char* value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns the destination, format and type of the logs. </p>
     */
    inline const Aws::Vector<LogDeliveryConfiguration>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfiguration>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfiguration>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline ReplicationGroup& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfiguration>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline ReplicationGroup& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfiguration>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline ReplicationGroup& AddLogDeliveryConfigurations(const LogDeliveryConfiguration& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline ReplicationGroup& AddLogDeliveryConfigurations(LogDeliveryConfiguration&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationGroupCreateTime() const{ return m_replicationGroupCreateTime; }
    inline bool ReplicationGroupCreateTimeHasBeenSet() const { return m_replicationGroupCreateTimeHasBeenSet; }
    inline void SetReplicationGroupCreateTime(const Aws::Utils::DateTime& value) { m_replicationGroupCreateTimeHasBeenSet = true; m_replicationGroupCreateTime = value; }
    inline void SetReplicationGroupCreateTime(Aws::Utils::DateTime&& value) { m_replicationGroupCreateTimeHasBeenSet = true; m_replicationGroupCreateTime = std::move(value); }
    inline ReplicationGroup& WithReplicationGroupCreateTime(const Aws::Utils::DateTime& value) { SetReplicationGroupCreateTime(value); return *this;}
    inline ReplicationGroup& WithReplicationGroupCreateTime(Aws::Utils::DateTime&& value) { SetReplicationGroupCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline const DataTieringStatus& GetDataTiering() const{ return m_dataTiering; }
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }
    inline void SetDataTiering(const DataTieringStatus& value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }
    inline void SetDataTiering(DataTieringStatus&& value) { m_dataTieringHasBeenSet = true; m_dataTiering = std::move(value); }
    inline ReplicationGroup& WithDataTiering(const DataTieringStatus& value) { SetDataTiering(value); return *this;}
    inline ReplicationGroup& WithDataTiering(DataTieringStatus&& value) { SetDataTiering(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are running Valkey 7.2 and above, or Redis OSS engine version 6.0 and
     * above, set this parameter to yes if you want to opt-in to the next auto minor
     * version upgrade campaign. This parameter is disabled for previous versions. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ReplicationGroup& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 and above or Memcached engine version 1.6.6
     * and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const NetworkType& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const NetworkType& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(NetworkType&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline ReplicationGroup& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline ReplicationGroup& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type you choose when modifying a cluster, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 and above or Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }
    inline ReplicationGroup& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}
    inline ReplicationGroup& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline const TransitEncryptionMode& GetTransitEncryptionMode() const{ return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(const TransitEncryptionMode& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode&& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = std::move(value); }
    inline ReplicationGroup& WithTransitEncryptionMode(const TransitEncryptionMode& value) { SetTransitEncryptionMode(value); return *this;}
    inline ReplicationGroup& WithTransitEncryptionMode(TransitEncryptionMode&& value) { SetTransitEncryptionMode(std::move(value)); return *this;}
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
    inline const ClusterMode& GetClusterMode() const{ return m_clusterMode; }
    inline bool ClusterModeHasBeenSet() const { return m_clusterModeHasBeenSet; }
    inline void SetClusterMode(const ClusterMode& value) { m_clusterModeHasBeenSet = true; m_clusterMode = value; }
    inline void SetClusterMode(ClusterMode&& value) { m_clusterModeHasBeenSet = true; m_clusterMode = std::move(value); }
    inline ReplicationGroup& WithClusterMode(const ClusterMode& value) { SetClusterMode(value); return *this;}
    inline ReplicationGroup& WithClusterMode(ClusterMode&& value) { SetClusterMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine used in a replication group. The options are redis, memcached or
     * valkey.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ReplicationGroup& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ReplicationGroup& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ReplicationGroup& WithEngine(const char* value) { SetEngine(value); return *this;}
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

    AutomaticFailoverStatus m_automaticFailover;
    bool m_automaticFailoverHasBeenSet = false;

    MultiAZStatus m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Endpoint m_configurationEndpoint;
    bool m_configurationEndpointHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    bool m_clusterEnabled;
    bool m_clusterEnabledHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    bool m_authTokenEnabled;
    bool m_authTokenEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_authTokenLastModifiedDate;
    bool m_authTokenLastModifiedDateHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled;
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

    Aws::Utils::DateTime m_replicationGroupCreateTime;
    bool m_replicationGroupCreateTimeHasBeenSet = false;

    DataTieringStatus m_dataTiering;
    bool m_dataTieringHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode;
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode;
    bool m_clusterModeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
