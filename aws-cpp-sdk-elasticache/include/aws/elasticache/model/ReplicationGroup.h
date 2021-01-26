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
#include <aws/elasticache/model/NodeGroup.h>
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
   * <p>Contains all of the attributes of a specific Redis replication
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReplicationGroup">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ReplicationGroup
  {
  public:
    ReplicationGroup();
    ReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The identifier for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline ReplicationGroup& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline ReplicationGroup& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the replication group.</p>
     */
    inline ReplicationGroup& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline ReplicationGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline ReplicationGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user supplied description of the replication group.</p>
     */
    inline ReplicationGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline const GlobalReplicationGroupInfo& GetGlobalReplicationGroupInfo() const{ return m_globalReplicationGroupInfo; }

    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline bool GlobalReplicationGroupInfoHasBeenSet() const { return m_globalReplicationGroupInfoHasBeenSet; }

    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline void SetGlobalReplicationGroupInfo(const GlobalReplicationGroupInfo& value) { m_globalReplicationGroupInfoHasBeenSet = true; m_globalReplicationGroupInfo = value; }

    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline void SetGlobalReplicationGroupInfo(GlobalReplicationGroupInfo&& value) { m_globalReplicationGroupInfoHasBeenSet = true; m_globalReplicationGroupInfo = std::move(value); }

    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline ReplicationGroup& WithGlobalReplicationGroupInfo(const GlobalReplicationGroupInfo& value) { SetGlobalReplicationGroupInfo(value); return *this;}

    /**
     * <p>The name of the Global Datastore and role of this replication group in the
     * Global Datastore.</p>
     */
    inline ReplicationGroup& WithGlobalReplicationGroupInfo(GlobalReplicationGroupInfo&& value) { SetGlobalReplicationGroupInfo(std::move(value)); return *this;}


    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline ReplicationGroup& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline ReplicationGroup& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of this replication group - <code>creating</code>,
     * <code>available</code>, <code>modifying</code>, <code>deleting</code>,
     * <code>create-failed</code>, <code>snapshotting</code>.</p>
     */
    inline ReplicationGroup& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline const ReplicationGroupPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline void SetPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline void SetPendingModifiedValues(ReplicationGroupPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline ReplicationGroup& WithPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>A group of settings to be applied to the replication group, either
     * immediately or during the next maintenance window.</p>
     */
    inline ReplicationGroup& WithPendingModifiedValues(ReplicationGroupPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClusters() const{ return m_memberClusters; }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline bool MemberClustersHasBeenSet() const { return m_memberClustersHasBeenSet; }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline void SetMemberClusters(const Aws::Vector<Aws::String>& value) { m_memberClustersHasBeenSet = true; m_memberClusters = value; }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline void SetMemberClusters(Aws::Vector<Aws::String>&& value) { m_memberClustersHasBeenSet = true; m_memberClusters = std::move(value); }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline ReplicationGroup& WithMemberClusters(const Aws::Vector<Aws::String>& value) { SetMemberClusters(value); return *this;}

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline ReplicationGroup& WithMemberClusters(Aws::Vector<Aws::String>&& value) { SetMemberClusters(std::move(value)); return *this;}

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline ReplicationGroup& AddMemberClusters(const Aws::String& value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline ReplicationGroup& AddMemberClusters(Aws::String&& value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of all the cache clusters that are part of this replication
     * group.</p>
     */
    inline ReplicationGroup& AddMemberClusters(const char* value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }


    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline const Aws::Vector<NodeGroup>& GetNodeGroups() const{ return m_nodeGroups; }

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline bool NodeGroupsHasBeenSet() const { return m_nodeGroupsHasBeenSet; }

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline void SetNodeGroups(const Aws::Vector<NodeGroup>& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = value; }

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline void SetNodeGroups(Aws::Vector<NodeGroup>&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = std::move(value); }

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline ReplicationGroup& WithNodeGroups(const Aws::Vector<NodeGroup>& value) { SetNodeGroups(value); return *this;}

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline ReplicationGroup& WithNodeGroups(Aws::Vector<NodeGroup>&& value) { SetNodeGroups(std::move(value)); return *this;}

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline ReplicationGroup& AddNodeGroups(const NodeGroup& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.push_back(value); return *this; }

    /**
     * <p>A list of node groups in this replication group. For Redis (cluster mode
     * disabled) replication groups, this is a single-element list. For Redis (cluster
     * mode enabled) replication groups, the list contains an entry for each node group
     * (shard).</p>
     */
    inline ReplicationGroup& AddNodeGroups(NodeGroup&& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline bool SnapshottingClusterIdHasBeenSet() const { return m_snapshottingClusterIdHasBeenSet; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline void SetSnapshottingClusterId(Aws::String&& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = std::move(value); }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline ReplicationGroup& WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline ReplicationGroup& WithSnapshottingClusterId(Aws::String&& value) { SetSnapshottingClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster ID that is used as the daily snapshot source for the replication
     * group.</p>
     */
    inline ReplicationGroup& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}


    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline const AutomaticFailoverStatus& GetAutomaticFailover() const{ return m_automaticFailover; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline void SetAutomaticFailover(const AutomaticFailoverStatus& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline void SetAutomaticFailover(AutomaticFailoverStatus&& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = std::move(value); }

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline ReplicationGroup& WithAutomaticFailover(const AutomaticFailoverStatus& value) { SetAutomaticFailover(value); return *this;}

    /**
     * <p>Indicates the status of automatic failover for this Redis replication
     * group.</p>
     */
    inline ReplicationGroup& WithAutomaticFailover(AutomaticFailoverStatus&& value) { SetAutomaticFailover(std::move(value)); return *this;}


    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline const MultiAZStatus& GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline void SetMultiAZ(const MultiAZStatus& value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline void SetMultiAZ(MultiAZStatus&& value) { m_multiAZHasBeenSet = true; m_multiAZ = std::move(value); }

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline ReplicationGroup& WithMultiAZ(const MultiAZStatus& value) { SetMultiAZ(value); return *this;}

    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a> </p>
     */
    inline ReplicationGroup& WithMultiAZ(MultiAZStatus&& value) { SetMultiAZ(std::move(value)); return *this;}


    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline const Endpoint& GetConfigurationEndpoint() const{ return m_configurationEndpoint; }

    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline bool ConfigurationEndpointHasBeenSet() const { return m_configurationEndpointHasBeenSet; }

    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline void SetConfigurationEndpoint(const Endpoint& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = value; }

    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline void SetConfigurationEndpoint(Endpoint&& value) { m_configurationEndpointHasBeenSet = true; m_configurationEndpoint = std::move(value); }

    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline ReplicationGroup& WithConfigurationEndpoint(const Endpoint& value) { SetConfigurationEndpoint(value); return *this;}

    /**
     * <p>The configuration endpoint for this replication group. Use the configuration
     * endpoint to connect to this replication group.</p>
     */
    inline ReplicationGroup& WithConfigurationEndpoint(Endpoint&& value) { SetConfigurationEndpoint(std::move(value)); return *this;}


    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p>  <p> If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> 
     */
    inline ReplicationGroup& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline ReplicationGroup& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline ReplicationGroup& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline ReplicationGroup& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetClusterEnabled() const{ return m_clusterEnabled; }

    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline bool ClusterEnabledHasBeenSet() const { return m_clusterEnabledHasBeenSet; }

    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetClusterEnabled(bool value) { m_clusterEnabledHasBeenSet = true; m_clusterEnabled = value; }

    /**
     * <p>A flag indicating whether or not this replication group is cluster enabled;
     * i.e., whether its data can be partitioned across multiple shards (API/CLI: node
     * groups).</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
     */
    inline ReplicationGroup& WithClusterEnabled(bool value) { SetClusterEnabled(value); return *this;}


    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline ReplicationGroup& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline ReplicationGroup& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The name of the compute and memory capacity node type for each node in the
     * replication group.</p>
     */
    inline ReplicationGroup& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAuthTokenEnabled() const{ return m_authTokenEnabled; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AuthTokenEnabledHasBeenSet() const { return m_authTokenEnabledHasBeenSet; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAuthTokenEnabled(bool value) { m_authTokenEnabledHasBeenSet = true; m_authTokenEnabled = value; }

    /**
     * <p>A flag that enables using an <code>AuthToken</code> (password) when issuing
     * Redis commands.</p> <p>Default: <code>false</code> </p>
     */
    inline ReplicationGroup& WithAuthTokenEnabled(bool value) { SetAuthTokenEnabled(value); return *this;}


    /**
     * <p>The date the auth token was last modified</p>
     */
    inline const Aws::Utils::DateTime& GetAuthTokenLastModifiedDate() const{ return m_authTokenLastModifiedDate; }

    /**
     * <p>The date the auth token was last modified</p>
     */
    inline bool AuthTokenLastModifiedDateHasBeenSet() const { return m_authTokenLastModifiedDateHasBeenSet; }

    /**
     * <p>The date the auth token was last modified</p>
     */
    inline void SetAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = value; }

    /**
     * <p>The date the auth token was last modified</p>
     */
    inline void SetAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { m_authTokenLastModifiedDateHasBeenSet = true; m_authTokenLastModifiedDate = std::move(value); }

    /**
     * <p>The date the auth token was last modified</p>
     */
    inline ReplicationGroup& WithAuthTokenLastModifiedDate(const Aws::Utils::DateTime& value) { SetAuthTokenLastModifiedDate(value); return *this;}

    /**
     * <p>The date the auth token was last modified</p>
     */
    inline ReplicationGroup& WithAuthTokenLastModifiedDate(Aws::Utils::DateTime&& value) { SetAuthTokenLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }

    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>TransitEncryptionEnabled</code> after
     * the cluster is created. To enable in-transit encryption on a cluster you must
     * set <code>TransitEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline ReplicationGroup& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}


    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable encryption at-rest on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable encryption at-rest on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable encryption at-rest on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }

    /**
     * <p>A flag that enables encryption at-rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * cluster is created. To enable encryption at-rest on a cluster you must set
     * <code>AtRestEncryptionEnabled</code> to <code>true</code> when you create a
     * cluster.</p> <p> <b>Required:</b> Only available when creating a replication
     * group in an Amazon VPC using redis version <code>3.2.6</code>, <code>4.x</code>
     * or later.</p> <p>Default: <code>false</code> </p>
     */
    inline ReplicationGroup& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}


    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberClustersOutpostArns() const{ return m_memberClustersOutpostArns; }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline bool MemberClustersOutpostArnsHasBeenSet() const { return m_memberClustersOutpostArnsHasBeenSet; }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline void SetMemberClustersOutpostArns(const Aws::Vector<Aws::String>& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns = value; }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline void SetMemberClustersOutpostArns(Aws::Vector<Aws::String>&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns = std::move(value); }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline ReplicationGroup& WithMemberClustersOutpostArns(const Aws::Vector<Aws::String>& value) { SetMemberClustersOutpostArns(value); return *this;}

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline ReplicationGroup& WithMemberClustersOutpostArns(Aws::Vector<Aws::String>&& value) { SetMemberClustersOutpostArns(std::move(value)); return *this;}

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline ReplicationGroup& AddMemberClustersOutpostArns(const Aws::String& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(value); return *this; }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline ReplicationGroup& AddMemberClustersOutpostArns(Aws::String&& value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The outpost ARNs of the replication group's member clusters.</p>
     */
    inline ReplicationGroup& AddMemberClustersOutpostArns(const char* value) { m_memberClustersOutpostArnsHasBeenSet = true; m_memberClustersOutpostArns.push_back(value); return *this; }


    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline ReplicationGroup& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline ReplicationGroup& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the disk in the cluster.</p>
     */
    inline ReplicationGroup& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline ReplicationGroup& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline ReplicationGroup& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the replication group.</p>
     */
    inline ReplicationGroup& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = value; }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::move(value); }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline ReplicationGroup& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline ReplicationGroup& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline ReplicationGroup& AddUserGroupIds(const Aws::String& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline ReplicationGroup& AddUserGroupIds(Aws::String&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of user group IDs that have access to the replication group.</p>
     */
    inline ReplicationGroup& AddUserGroupIds(const char* value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    GlobalReplicationGroupInfo m_globalReplicationGroupInfo;
    bool m_globalReplicationGroupInfoHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    ReplicationGroupPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;

    Aws::Vector<Aws::String> m_memberClusters;
    bool m_memberClustersHasBeenSet;

    Aws::Vector<NodeGroup> m_nodeGroups;
    bool m_nodeGroupsHasBeenSet;

    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet;

    AutomaticFailoverStatus m_automaticFailover;
    bool m_automaticFailoverHasBeenSet;

    MultiAZStatus m_multiAZ;
    bool m_multiAZHasBeenSet;

    Endpoint m_configurationEndpoint;
    bool m_configurationEndpointHasBeenSet;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;

    bool m_clusterEnabled;
    bool m_clusterEnabledHasBeenSet;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;

    bool m_authTokenEnabled;
    bool m_authTokenEnabledHasBeenSet;

    Aws::Utils::DateTime m_authTokenLastModifiedDate;
    bool m_authTokenLastModifiedDateHasBeenSet;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet;

    Aws::Vector<Aws::String> m_memberClustersOutpostArns;
    bool m_memberClustersOutpostArnsHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
