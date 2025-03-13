/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NetworkType.h>
#include <aws/elasticache/model/IpDiscovery.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/ClusterMode.h>
#include <aws/elasticache/model/NodeGroupConfiguration.h>
#include <aws/elasticache/model/Tag.h>
#include <aws/elasticache/model/LogDeliveryConfigurationRequest.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateReplicationGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateReplicationGroupMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateReplicationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 40
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    CreateReplicationGroupRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const { return m_replicationGroupDescription; }
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    void SetReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::forward<ReplicationGroupDescriptionT>(value); }
    template<typename ReplicationGroupDescriptionT = Aws::String>
    CreateReplicationGroupRequest& WithReplicationGroupDescription(ReplicationGroupDescriptionT&& value) { SetReplicationGroupDescription(std::forward<ReplicationGroupDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const { return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    void SetGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::forward<GlobalReplicationGroupIdT>(value); }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    CreateReplicationGroupRequest& WithGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { SetGlobalReplicationGroupId(std::forward<GlobalReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const { return m_primaryClusterId; }
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }
    template<typename PrimaryClusterIdT = Aws::String>
    void SetPrimaryClusterId(PrimaryClusterIdT&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::forward<PrimaryClusterIdT>(value); }
    template<typename PrimaryClusterIdT = Aws::String>
    CreateReplicationGroupRequest& WithPrimaryClusterId(PrimaryClusterIdT&& value) { SetPrimaryClusterId(std::forward<PrimaryClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Valkey or Redis OSS
     * (cluster mode enabled) replication groups.</p> <p>Default: false</p>
     */
    inline bool GetAutomaticFailoverEnabled() const { return m_automaticFailoverEnabled; }
    inline bool AutomaticFailoverEnabledHasBeenSet() const { return m_automaticFailoverEnabledHasBeenSet; }
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }
    inline CreateReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating if you have Multi-AZ enabled to enhance fault tolerance.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/dg/AutoFailover.html">Minimizing
     * Downtime: Multi-AZ</a>.</p>
     */
    inline bool GetMultiAZEnabled() const { return m_multiAZEnabled; }
    inline bool MultiAZEnabledHasBeenSet() const { return m_multiAZEnabledHasBeenSet; }
    inline void SetMultiAZEnabled(bool value) { m_multiAZEnabledHasBeenSet = true; m_multiAZEnabled = value; }
    inline CreateReplicationGroupRequest& WithMultiAZEnabled(bool value) { SetMultiAZEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If
     * <code>AutomaticFailoverEnabled</code> is <code>true</code>, the value of this
     * parameter must be at least 2. If <code>AutomaticFailoverEnabled</code> is
     * <code>false</code> you can omit this parameter (it will default to 1), or you
     * can explicitly set it to a value between 2 and 6.</p> <p>The maximum permitted
     * value for <code>NumCacheClusters</code> is 6 (1 primary plus 5 replicas).</p>
     */
    inline int GetNumCacheClusters() const { return m_numCacheClusters; }
    inline bool NumCacheClustersHasBeenSet() const { return m_numCacheClustersHasBeenSet; }
    inline void SetNumCacheClusters(int value) { m_numCacheClustersHasBeenSet = true; m_numCacheClusters = value; }
    inline CreateReplicationGroupRequest& WithNumCacheClusters(int value) { SetNumCacheClusters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 Availability Zones in which the replication group's clusters
     * are created. The order of the Availability Zones in the list is the order in
     * which clusters are allocated. The primary cluster is created in the first AZ in
     * the list.</p> <p>This parameter is not used if there is more than one node group
     * (shard). You should use <code>NodeGroupConfiguration</code> instead.</p> 
     * <p>If you are creating your replication group in an Amazon VPC (recommended),
     * you can only locate clusters in Availability Zones associated with the subnets
     * in the selected subnet group.</p> <p>The number of Availability Zones listed
     * must equal the value of <code>NumCacheClusters</code>.</p>  <p>Default:
     * system chosen Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredCacheClusterAZs() const { return m_preferredCacheClusterAZs; }
    inline bool PreferredCacheClusterAZsHasBeenSet() const { return m_preferredCacheClusterAZsHasBeenSet; }
    template<typename PreferredCacheClusterAZsT = Aws::Vector<Aws::String>>
    void SetPreferredCacheClusterAZs(PreferredCacheClusterAZsT&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = std::forward<PreferredCacheClusterAZsT>(value); }
    template<typename PreferredCacheClusterAZsT = Aws::Vector<Aws::String>>
    CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(PreferredCacheClusterAZsT&& value) { SetPreferredCacheClusterAZs(std::forward<PreferredCacheClusterAZsT>(value)); return *this;}
    template<typename PreferredCacheClusterAZsT = Aws::String>
    CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(PreferredCacheClusterAZsT&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.emplace_back(std::forward<PreferredCacheClusterAZsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Valkey or Redis OSS (cluster mode enabled) replication group. For Valkey or
     * Redis OSS (cluster mode disabled) either omit this parameter or set it to 1.</p>
     * <p>Default: 1</p>
     */
    inline int GetNumNodeGroups() const { return m_numNodeGroups; }
    inline bool NumNodeGroupsHasBeenSet() const { return m_numNodeGroupsHasBeenSet; }
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }
    inline CreateReplicationGroupRequest& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline int GetReplicasPerNodeGroup() const { return m_replicasPerNodeGroup; }
    inline bool ReplicasPerNodeGroupHasBeenSet() const { return m_replicasPerNodeGroupHasBeenSet; }
    inline void SetReplicasPerNodeGroup(int value) { m_replicasPerNodeGroupHasBeenSet = true; m_replicasPerNodeGroup = value; }
    inline CreateReplicationGroupRequest& WithReplicasPerNodeGroup(int value) { SetReplicasPerNodeGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following members: <code>PrimaryAvailabilityZone</code>,
     * <code>ReplicaAvailabilityZones</code>, <code>ReplicaCount</code>, and
     * <code>Slots</code>.</p> <p>If you're creating a Valkey or Redis OSS (cluster
     * mode disabled) or a Valkey or Redis OSS (cluster mode enabled) replication
     * group, you can use this parameter to individually configure each node group
     * (shard), or you can omit this parameter. However, it is required when seeding a
     * Valkey or Redis OSS (cluster mode enabled) cluster from a S3 rdb file. You must
     * configure each node group (shard) using this parameter because you must specify
     * the slots for each node group.</p>
     */
    inline const Aws::Vector<NodeGroupConfiguration>& GetNodeGroupConfiguration() const { return m_nodeGroupConfiguration; }
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }
    template<typename NodeGroupConfigurationT = Aws::Vector<NodeGroupConfiguration>>
    void SetNodeGroupConfiguration(NodeGroupConfigurationT&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::forward<NodeGroupConfigurationT>(value); }
    template<typename NodeGroupConfigurationT = Aws::Vector<NodeGroupConfiguration>>
    CreateReplicationGroupRequest& WithNodeGroupConfiguration(NodeGroupConfigurationT&& value) { SetNodeGroupConfiguration(std::forward<NodeGroupConfigurationT>(value)); return *this;}
    template<typename NodeGroupConfigurationT = NodeGroupConfiguration>
    CreateReplicationGroupRequest& AddNodeGroupConfiguration(NodeGroupConfigurationT&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.emplace_back(std::forward<NodeGroupConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>The following node types are supported by ElastiCache. Generally speaking,
     * the current generation types provide more memory and computational power at
     * lower cost when compared to their equivalent previous generation
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
    CreateReplicationGroupRequest& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. The value must be set to <code>valkey</code> or <code>redis</code>.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateReplicationGroupRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the cache engine to be used for the clusters in this
     * replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cluster or replication group and
     * create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateReplicationGroupRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Valkey or Redis OSS version 3.2.4 or
     * later, only one node group (shard), and want to use a default parameter group,
     * we recommend that you specify the parameter group by name. </p> <ul> <li> <p>To
     * create a Valkey or Redis OSS (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Valkey or Redis OSS (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    CreateReplicationGroupRequest& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     *  <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    CreateReplicationGroupRequest& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const { return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    void SetCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::forward<CacheSecurityGroupNamesT>(value); }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    CreateReplicationGroupRequest& WithCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { SetCacheSecurityGroupNames(std::forward<CacheSecurityGroupNamesT>(value)); return *this;}
    template<typename CacheSecurityGroupNamesT = Aws::String>
    CreateReplicationGroupRequest& AddCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.emplace_back(std::forward<CacheSecurityGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateReplicationGroupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateReplicationGroupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=<code>myKey</code>, Value=<code>myKeyValue</code>. You
     * can include multiple tags as shown following: Key=<code>myKey</code>,
     * Value=<code>myKeyValue</code> Key=<code>mySecondKey</code>,
     * Value=<code>mySecondKeyValue</code>. Tags on replication groups will be
     * replicated to all nodes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateReplicationGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateReplicationGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Valkey or
     * Redis OSS RDB snapshot files stored in Amazon S3. The snapshot files are used to
     * populate the new replication group. The Amazon S3 object name in the ARN cannot
     * contain any commas. The new replication group will have the number of node
     * groups (console: shards) specified by the parameter <i>NumNodeGroups</i> or the
     * number of node groups configured by <i>NodeGroupConfiguration</i> regardless of
     * the number of ARNs specified here.</p> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const { return m_snapshotArns; }
    inline bool SnapshotArnsHasBeenSet() const { return m_snapshotArnsHasBeenSet; }
    template<typename SnapshotArnsT = Aws::Vector<Aws::String>>
    void SetSnapshotArns(SnapshotArnsT&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = std::forward<SnapshotArnsT>(value); }
    template<typename SnapshotArnsT = Aws::Vector<Aws::String>>
    CreateReplicationGroupRequest& WithSnapshotArns(SnapshotArnsT&& value) { SetSnapshotArns(std::forward<SnapshotArnsT>(value)); return *this;}
    template<typename SnapshotArnsT = Aws::String>
    CreateReplicationGroupRequest& AddSnapshotArns(SnapshotArnsT&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.emplace_back(std::forward<SnapshotArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    CreateReplicationGroupRequest& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
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
    CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateReplicationGroupRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>  <p>The Amazon SNS topic
     * owner must be the same as the cluster owner.</p> 
     */
    inline const Aws::String& GetNotificationTopicArn() const { return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    template<typename NotificationTopicArnT = Aws::String>
    void SetNotificationTopicArn(NotificationTopicArnT&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::forward<NotificationTopicArnT>(value); }
    template<typename NotificationTopicArnT = Aws::String>
    CreateReplicationGroupRequest& WithNotificationTopicArn(NotificationTopicArnT&& value) { SetNotificationTopicArn(std::forward<NotificationTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey 7.2 and above or Redis OSS engine version 6.0 and
     * above, set this parameter to yes to opt-in to the next auto minor version
     * upgrade campaign. This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const { return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline CreateReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <p>Default: 0 (i.e., automatic backups are disabled for this cluster).</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline CreateReplicationGroupRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const { return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    template<typename SnapshotWindowT = Aws::String>
    void SetSnapshotWindow(SnapshotWindowT&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::forward<SnapshotWindowT>(value); }
    template<typename SnapshotWindowT = Aws::String>
    CreateReplicationGroupRequest& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p> <code>AuthToken</code> can be specified only on replication
     * groups where <code>TransitEncryptionEnabled</code> is <code>true</code>.</p>
     *  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     * <p>Password constraints:</p> <ul> <li> <p>Must be only printable ASCII
     * characters.</p> </li> <li> <p>Must be at least 16 characters and no more than
     * 128 characters in length.</p> </li> <li> <p>The only permitted printable special
     * characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable special
     * characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    CreateReplicationGroupRequest& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to <code>true</code>.</p>
     * <p>This parameter is valid only if the <code>Engine</code> parameter is
     * <code>redis</code>, the <code>EngineVersion</code> parameter is
     * <code>3.2.6</code>, <code>4.x</code> or later, and the cluster is being created
     * in an Amazon VPC.</p> <p>If you enable in-transit encryption, you must also
     * specify a value for <code>CacheSubnetGroup</code>.</p> <p> <b>Required:</b> Only
     * available when creating a replication group in an Amazon VPC using Redis OSS
     * version <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>  <p>For HIPAA compliance, you must specify
     * <code>TransitEncryptionEnabled</code> as <code>true</code>, an
     * <code>AuthToken</code>, and a <code>CacheSubnetGroup</code>.</p> 
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline CreateReplicationGroupRequest& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that enables encryption at rest when set to <code>true</code>.</p>
     * <p>You cannot modify the value of <code>AtRestEncryptionEnabled</code> after the
     * replication group is created. To enable encryption at rest on a replication
     * group you must set <code>AtRestEncryptionEnabled</code> to <code>true</code>
     * when you create the replication group. </p> <p> <b>Required:</b> Only available
     * when creating a replication group in an Amazon VPC using Valkey 7.2 and later,
     * Redis OSS version <code>3.2.6</code>, or Redis OSS <code>4.x</code> and
     * later.</p> <p>Default: <code>true</code> when using Valkey, <code>false</code>
     * when using Redis OSS</p>
     */
    inline bool GetAtRestEncryptionEnabled() const { return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline CreateReplicationGroupRequest& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
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
    CreateReplicationGroupRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const { return m_userGroupIds; }
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }
    template<typename UserGroupIdsT = Aws::Vector<Aws::String>>
    void SetUserGroupIds(UserGroupIdsT&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::forward<UserGroupIdsT>(value); }
    template<typename UserGroupIdsT = Aws::Vector<Aws::String>>
    CreateReplicationGroupRequest& WithUserGroupIds(UserGroupIdsT&& value) { SetUserGroupIds(std::forward<UserGroupIdsT>(value)); return *this;}
    template<typename UserGroupIdsT = Aws::String>
    CreateReplicationGroupRequest& AddUserGroupIds(UserGroupIdsT&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.emplace_back(std::forward<UserGroupIdsT>(value)); return *this; }
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
    CreateReplicationGroupRequest& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = LogDeliveryConfigurationRequest>
    CreateReplicationGroupRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool GetDataTieringEnabled() const { return m_dataTieringEnabled; }
    inline bool DataTieringEnabledHasBeenSet() const { return m_dataTieringEnabledHasBeenSet; }
    inline void SetDataTieringEnabled(bool value) { m_dataTieringEnabledHasBeenSet = true; m_dataTieringEnabled = value; }
    inline CreateReplicationGroupRequest& WithDataTieringEnabled(bool value) { SetDataTieringEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 to 7.1 and Memcached engine version 1.6.6
     * and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateReplicationGroupRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 to 7.1 or Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline IpDiscovery GetIpDiscovery() const { return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(IpDiscovery value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline CreateReplicationGroupRequest& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p> <p>When setting
     * <code>TransitEncryptionEnabled</code> to <code>true</code>, you can set your
     * <code>TransitEncryptionMode</code> to <code>preferred</code> in the same
     * request, to allow both encrypted and unencrypted connections at the same time.
     * Once you migrate all your Valkey or Redis OSS clients to use encrypted
     * connections you can modify the value to <code>required</code> to allow encrypted
     * connections only.</p> <p>Setting <code>TransitEncryptionMode</code> to
     * <code>required</code> is a two-step process that requires you to first set the
     * <code>TransitEncryptionMode</code> to <code>preferred</code>, after that you can
     * set <code>TransitEncryptionMode</code> to <code>required</code>.</p> <p>This
     * process will not trigger the replacement of the replication group.</p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline CreateReplicationGroupRequest& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
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
    inline CreateReplicationGroupRequest& WithClusterMode(ClusterMode value) { SetClusterMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot used to create a replication group. Available for
     * Valkey, Redis OSS only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const { return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    void SetServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::forward<ServerlessCacheSnapshotNameT>(value); }
    template<typename ServerlessCacheSnapshotNameT = Aws::String>
    CreateReplicationGroupRequest& WithServerlessCacheSnapshotName(ServerlessCacheSnapshotNameT&& value) { SetServerlessCacheSnapshotName(std::forward<ServerlessCacheSnapshotNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet = false;

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet = false;

    bool m_automaticFailoverEnabled{false};
    bool m_automaticFailoverEnabledHasBeenSet = false;

    bool m_multiAZEnabled{false};
    bool m_multiAZEnabledHasBeenSet = false;

    int m_numCacheClusters{0};
    bool m_numCacheClustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredCacheClusterAZs;
    bool m_preferredCacheClusterAZsHasBeenSet = false;

    int m_numNodeGroups{0};
    bool m_numNodeGroupsHasBeenSet = false;

    int m_replicasPerNodeGroup{0};
    bool m_replicasPerNodeGroupHasBeenSet = false;

    Aws::Vector<NodeGroupConfiguration> m_nodeGroupConfiguration;
    bool m_nodeGroupConfigurationHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet = false;

    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotArns;
    bool m_snapshotArnsHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    bool m_autoMinorVersionUpgrade{false};
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit{0};
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled{false};
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_dataTieringEnabled{false};
    bool m_dataTieringEnabledHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode{ClusterMode::NOT_SET};
    bool m_clusterModeHasBeenSet = false;

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
