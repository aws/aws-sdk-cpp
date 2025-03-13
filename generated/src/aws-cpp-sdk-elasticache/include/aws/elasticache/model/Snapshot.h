/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/DataTieringStatus.h>
#include <aws/elasticache/model/NodeSnapshot.h>
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
   * <p>Represents a copy of an entire Valkey or Redis OSS cluster as of the time
   * when the snapshot was taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/Snapshot">AWS
   * API Reference</a></p>
   */
  class Snapshot
  {
  public:
    AWS_ELASTICACHE_API Snapshot() = default;
    AWS_ELASTICACHE_API Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of a snapshot. For an automatic snapshot, the name is
     * system-generated. For a manual snapshot, this is the user-provided name.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    Snapshot& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the source replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    Snapshot& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the source replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const { return m_replicationGroupDescription; }
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    void SetReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::forward<ReplicationGroupDescriptionT>(value); }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    Snapshot& WithReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { SetReplicationGroupDescription(std::forward<ReplicationGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-supplied identifier of the source cluster.</p>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    Snapshot& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the snapshot. Valid values: <code>creating</code> |
     * <code>available</code> | <code>restoring</code> | <code>copying</code> |
     * <code>deleting</code>.</p>
     */
    inline const Aws::String& GetSnapshotStatus() const { return m_snapshotStatus; }
    inline bool SnapshotStatusHasBeenSet() const { return m_snapshotStatusHasBeenSet; }
    template<typename SnapshotStatusT = Aws::String>
    void SetSnapshotStatus(SnapshotStatusT&& value) { m_snapshotStatusHasBeenSet = true; m_snapshotStatus = std::forward<SnapshotStatusT>(value); }
    template<typename SnapshotStatusT = Aws::String>
    Snapshot& WithSnapshotStatus(SnapshotStatusT&& value) { SetSnapshotStatus(std::forward<SnapshotStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the snapshot is from an automatic backup
     * (<code>automated</code>) or was created manually (<code>manual</code>).</p>
     */
    inline const Aws::String& GetSnapshotSource() const { return m_snapshotSource; }
    inline bool SnapshotSourceHasBeenSet() const { return m_snapshotSourceHasBeenSet; }
    template<typename SnapshotSourceT = Aws::String>
    void SetSnapshotSource(SnapshotSourceT&& value) { m_snapshotSourceHasBeenSet = true; m_snapshotSource = std::forward<SnapshotSourceT>(value); }
    template<typename SnapshotSourceT = Aws::String>
    Snapshot& WithSnapshotSource(SnapshotSourceT&& value) { SetSnapshotSource(std::forward<SnapshotSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute and memory capacity node type for the source
     * cluster.</p> <p>The following node types are supported by ElastiCache. Generally
     * speaking, the current generation types provide more memory and computational
     * power at lower cost when compared to their equivalent previous generation
     * counterparts.</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: </p> <p> <b>M7g node types</b>: <code>cache.m7g.large</code>,
     * <code>cache.m7g.xlarge</code>, <code>cache.m7g.2xlarge</code>,
     * <code>cache.m7g.4xlarge</code>, <code>cache.m7g.8xlarge</code>,
     * <code>cache.m7g.12xlarge</code>, <code>cache.m7g.16xlarge</code> </p> 
     * <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M6g node types</b> (available only for Redis
     * OSS engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.m6g.large</code>, <code>cache.m6g.xlarge</code>,
     * <code>cache.m6g.2xlarge</code>, <code>cache.m6g.4xlarge</code>,
     * <code>cache.m6g.8xlarge</code>, <code>cache.m6g.12xlarge</code>,
     * <code>cache.m6g.16xlarge</code> </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T4g node types</b> (available only
     * for Redis OSS engine version 5.0.6 onward and Memcached engine version 1.5.16
     * onward): <code>cache.t4g.micro</code>, <code>cache.t4g.small</code>,
     * <code>cache.t4g.medium</code> </p> <p> <b>T3 node types:</b>
     * <code>cache.t3.micro</code>, <code>cache.t3.small</code>,
     * <code>cache.t3.medium</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended. Existing clusters are still supported but creation of new clusters
     * is not supported for these types.)</p> <p> <b>T1 node types:</b>
     * <code>cache.t1.micro</code> </p> <p> <b>M1 node types:</b>
     * <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended. Existing clusters are still supported but creation of new clusters
     * is not supported for these types.)</p> <p> <b>C1 node types:</b>
     * <code>cache.c1.xlarge</code> </p> </li> </ul> </li> <li> <p>Memory
     * optimized:</p> <ul> <li> <p>Current generation: </p> <p> <b>R7g node types</b>:
     * <code>cache.r7g.large</code>, <code>cache.r7g.xlarge</code>,
     * <code>cache.r7g.2xlarge</code>, <code>cache.r7g.4xlarge</code>,
     * <code>cache.r7g.8xlarge</code>, <code>cache.r7g.12xlarge</code>,
     * <code>cache.r7g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R6g node types</b> (available only for Redis
     * OSS engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
     * <code>cache.r6g.large</code>, <code>cache.r6g.xlarge</code>,
     * <code>cache.r6g.2xlarge</code>, <code>cache.r6g.4xlarge</code>,
     * <code>cache.r6g.8xlarge</code>, <code>cache.r6g.12xlarge</code>,
     * <code>cache.r6g.16xlarge</code> </p> <p> <b>R5 node types:</b>
     * <code>cache.r5.large</code>, <code>cache.r5.xlarge</code>,
     * <code>cache.r5.2xlarge</code>, <code>cache.r5.4xlarge</code>,
     * <code>cache.r5.12xlarge</code>, <code>cache.r5.24xlarge</code> </p> <p> <b>R4
     * node types:</b> <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended. Existing clusters are still supported
     * but creation of new clusters is not supported for these types.)</p> <p> <b>M2
     * node types:</b> <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Valkey or Redis OSS
     * append-only files (AOF) are not supported for T1 or T2 instances.</p> </li> <li>
     * <p>Valkey or Redis OSS Multi-AZ with automatic failover is not supported on T1
     * instances.</p> </li> <li> <p>The configuration variables <code>appendonly</code>
     * and <code>appendfsync</code> are not supported on Valkey, or on Redis OSS
     * version 2.8.22 and later.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    Snapshot& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine (<code>memcached</code> or <code>redis</code>)
     * used by the source cluster.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    Snapshot& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the cache engine version that is used by the source
     * cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    Snapshot& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cache nodes in the source cluster.</p> <p>For clusters running
     * Valkey or Redis OSS, this value must be 1. For clusters running Memcached, this
     * value must be between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const { return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline Snapshot& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone in which the source cluster is located.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const { return m_preferredAvailabilityZone; }
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    void SetPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::forward<PreferredAvailabilityZoneT>(value); }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    Snapshot& WithPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { SetPreferredAvailabilityZone(std::forward<PreferredAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the preferred outpost.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const { return m_preferredOutpostArn; }
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }
    template<typename PreferredOutpostArnT = Aws::String>
    void SetPreferredOutpostArn(PreferredOutpostArnT&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::forward<PreferredOutpostArnT>(value); }
    template<typename PreferredOutpostArnT = Aws::String>
    Snapshot& WithPreferredOutpostArn(PreferredOutpostArnT&& value) { SetPreferredOutpostArn(std::forward<PreferredOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the source cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCacheClusterCreateTime() const { return m_cacheClusterCreateTime; }
    inline bool CacheClusterCreateTimeHasBeenSet() const { return m_cacheClusterCreateTimeHasBeenSet; }
    template<typename CacheClusterCreateTimeT = Aws::Utils::DateTime>
    void SetCacheClusterCreateTime(CacheClusterCreateTimeT&& value) { m_cacheClusterCreateTimeHasBeenSet = true; m_cacheClusterCreateTime = std::forward<CacheClusterCreateTimeT>(value); }
    template<typename CacheClusterCreateTimeT = Aws::Utils::DateTime>
    Snapshot& WithCacheClusterCreateTime(CacheClusterCreateTimeT&& value) { SetCacheClusterCreateTime(std::forward<CacheClusterCreateTimeT>(value)); return *this;}
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
    Snapshot& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the topic used by the source cluster for
     * publishing notifications.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    Snapshot& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number used by each cache nodes in the source cluster.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Snapshot& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache parameter group that is associated with the source cluster.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    Snapshot& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache subnet group associated with the source cluster.</p>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    Snapshot& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Virtual Private Cloud identifier (VPC ID) of the cache subnet
     * group for the source cluster.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Snapshot& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey 7.2 and above or Redis OSS engine version 6.0 and
     * above, set this parameter to yes if you want to opt-in to the next auto minor
     * version upgrade campaign. This parameter is disabled for previous versions. 
     * </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline Snapshot& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an automatic snapshot, the number of days for which ElastiCache retains
     * the snapshot before deleting it.</p> <p>For manual snapshots, this field
     * reflects the <code>SnapshotRetentionLimit</code> for the source cluster when the
     * snapshot was created. This field is otherwise ignored: Manual snapshots do not
     * expire, and can only be deleted using the <code>DeleteSnapshot</code> operation.
     * </p> <p> <b>Important</b> If the value of SnapshotRetentionLimit is set to zero
     * (0), backups are turned off.</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline Snapshot& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which ElastiCache takes daily snapshots of the
     * source cluster.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    Snapshot& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of node groups (shards) in this snapshot. When restoring from a
     * snapshot, the number of node groups (shards) in the snapshot and in the restored
     * replication group must be the same.</p>
     */
    inline int GetNumNodeGroups() const { return m_numNodeGroups; }
    inline bool NumNodeGroupsHasBeenSet() const { return m_numNodeGroupsHasBeenSet; }
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }
    inline Snapshot& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of automatic failover for the source Valkey or Redis OSS
     * replication group.</p>
     */
    inline AutomaticFailoverStatus GetAutomaticFailover() const { return m_automaticFailover; }
    inline bool AutomaticFailoverHasBeenSet() const { return m_automaticFailoverHasBeenSet; }
    inline void SetAutomaticFailover(AutomaticFailoverStatus value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }
    inline Snapshot& WithAutomaticFailover(AutomaticFailoverStatus value) { SetAutomaticFailover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the cache nodes in the source cluster.</p>
     */
    inline const Aws::Vector<NodeSnapshot>& GetNodeSnapshots() const { return m_nodeSnapshots; }
    inline bool NodeSnapshotsHasBeenSet() const { return m_nodeSnapshotsHasBeenSet; }
    template<typename NodeSnapshotsT = Aws::Vector<NodeSnapshot>>
    void SetNodeSnapshots(NodeSnapshotsT&& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots = std::forward<NodeSnapshotsT>(value); }
    template<typename NodeSnapshotsT = Aws::Vector<NodeSnapshot>>
    Snapshot& WithNodeSnapshots(NodeSnapshotsT&& value) { SetNodeSnapshots(std::forward<NodeSnapshotsT>(value)); return *this;}
    template<typename NodeSnapshotsT = NodeSnapshot>
    Snapshot& AddNodeSnapshots(NodeSnapshotsT&& value) { m_nodeSnapshotsHasBeenSet = true; m_nodeSnapshots.emplace_back(std::forward<NodeSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Snapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the snapshot.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    Snapshot& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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
    inline Snapshot& WithDataTiering(DataTieringStatus value) { SetDataTiering(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet = false;

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_snapshotStatus;
    bool m_snapshotStatusHasBeenSet = false;

    Aws::String m_snapshotSource;
    bool m_snapshotSourceHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_numCacheNodes{0};
    bool m_numCacheNodesHasBeenSet = false;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet = false;

    Aws::String m_preferredOutpostArn;
    bool m_preferredOutpostArnHasBeenSet = false;

    Aws::Utils::DateTime m_cacheClusterCreateTime{};
    bool m_cacheClusterCreateTimeHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    int m_numNodeGroups{0};
    bool m_numNodeGroupsHasBeenSet = false;

    AutomaticFailoverStatus m_automaticFailover{AutomaticFailoverStatus::NOT_SET};
    bool m_automaticFailoverHasBeenSet = false;

    Aws::Vector<NodeSnapshot> m_nodeSnapshots;
    bool m_nodeSnapshotsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    DataTieringStatus m_dataTiering{DataTieringStatus::NOT_SET};
    bool m_dataTieringHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
