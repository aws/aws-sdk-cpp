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
    AWS_ELASTICACHE_API CreateReplicationGroupRequest();

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
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}
    inline CreateReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }
    inline bool ReplicationGroupDescriptionHasBeenSet() const { return m_replicationGroupDescriptionHasBeenSet; }
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = std::move(value); }
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster that serves as the primary for this replication
     * group. This cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }
    inline bool PrimaryClusterIdHasBeenSet() const { return m_primaryClusterIdHasBeenSet; }
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = std::move(value); }
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>
     * <code>AutomaticFailoverEnabled</code> must be enabled for Valkey or Redis OSS
     * (cluster mode enabled) replication groups.</p> <p>Default: false</p>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }
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
    inline bool GetMultiAZEnabled() const{ return m_multiAZEnabled; }
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
    inline int GetNumCacheClusters() const{ return m_numCacheClusters; }
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
    inline const Aws::Vector<Aws::String>& GetPreferredCacheClusterAZs() const{ return m_preferredCacheClusterAZs; }
    inline bool PreferredCacheClusterAZsHasBeenSet() const { return m_preferredCacheClusterAZsHasBeenSet; }
    inline void SetPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = value; }
    inline void SetPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = std::move(value); }
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { SetPreferredCacheClusterAZs(value); return *this;}
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { SetPreferredCacheClusterAZs(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const Aws::String& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(Aws::String&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(std::move(value)); return *this; }
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const char* value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Valkey or Redis OSS (cluster mode enabled) replication group. For Valkey or
     * Redis OSS (cluster mode disabled) either omit this parameter or set it to 1.</p>
     * <p>Default: 1</p>
     */
    inline int GetNumNodeGroups() const{ return m_numNodeGroups; }
    inline bool NumNodeGroupsHasBeenSet() const { return m_numNodeGroupsHasBeenSet; }
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }
    inline CreateReplicationGroupRequest& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline int GetReplicasPerNodeGroup() const{ return m_replicasPerNodeGroup; }
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
    inline const Aws::Vector<NodeGroupConfiguration>& GetNodeGroupConfiguration() const{ return m_nodeGroupConfiguration; }
    inline bool NodeGroupConfigurationHasBeenSet() const { return m_nodeGroupConfigurationHasBeenSet; }
    inline void SetNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }
    inline void SetNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = std::move(value); }
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { SetNodeGroupConfiguration(value); return *this;}
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { SetNodeGroupConfiguration(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(const NodeGroupConfiguration& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(NodeGroupConfiguration&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline CreateReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline CreateReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine to be used for the clusters in this replication
     * group. The value must be set to <code>Redis</code>.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateReplicationGroupRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateReplicationGroupRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
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
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
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
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}
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
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::move(value); }
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateReplicationGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateReplicationGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const{ return m_snapshotArns; }
    inline bool SnapshotArnsHasBeenSet() const { return m_snapshotArnsHasBeenSet; }
    inline void SetSnapshotArns(const Aws::Vector<Aws::String>& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }
    inline void SetSnapshotArns(Aws::Vector<Aws::String>&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = std::move(value); }
    inline CreateReplicationGroupRequest& WithSnapshotArns(const Aws::Vector<Aws::String>& value) { SetSnapshotArns(value); return *this;}
    inline CreateReplicationGroupRequest& WithSnapshotArns(Aws::Vector<Aws::String>&& value) { SetSnapshotArns(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddSnapshotArns(const Aws::String& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddSnapshotArns(Aws::String&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(std::move(value)); return *this; }
    inline CreateReplicationGroupRequest& AddSnapshotArns(const char* value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline CreateReplicationGroupRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline CreateReplicationGroupRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
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
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }
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
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you are running Valkey 7.2 and above or Redis OSS engine version 6.0 and
     * above, set this parameter to yes to opt-in to the next auto minor version
     * upgrade campaign. This parameter is disabled for previous versions.  </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
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
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }
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
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}
    inline CreateReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}
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
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = std::move(value); }
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }
    inline CreateReplicationGroupRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}
    inline CreateReplicationGroupRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}
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
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
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
     * when creating a replication group in an Amazon VPC using Redis OSS version
     * <code>3.2.6</code>, <code>4.x</code> or later.</p> <p>Default:
     * <code>false</code> </p>
     */
    inline bool GetAtRestEncryptionEnabled() const{ return m_atRestEncryptionEnabled; }
    inline bool AtRestEncryptionEnabledHasBeenSet() const { return m_atRestEncryptionEnabledHasBeenSet; }
    inline void SetAtRestEncryptionEnabled(bool value) { m_atRestEncryptionEnabledHasBeenSet = true; m_atRestEncryptionEnabled = value; }
    inline CreateReplicationGroupRequest& WithAtRestEncryptionEnabled(bool value) { SetAtRestEncryptionEnabled(value); return *this;}
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
    inline CreateReplicationGroupRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateReplicationGroupRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user group to associate with the replication group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = value; }
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::move(value); }
    inline CreateReplicationGroupRequest& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}
    inline CreateReplicationGroupRequest& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddUserGroupIds(const Aws::String& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddUserGroupIds(Aws::String&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(std::move(value)); return *this; }
    inline CreateReplicationGroupRequest& AddUserGroupIds(const char* value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the destination, format and type of the logs.</p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline CreateReplicationGroupRequest& WithLogDeliveryConfigurations(const Aws::Vector<LogDeliveryConfigurationRequest>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline CreateReplicationGroupRequest& WithLogDeliveryConfigurations(Aws::Vector<LogDeliveryConfigurationRequest>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& AddLogDeliveryConfigurations(const LogDeliveryConfigurationRequest& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline CreateReplicationGroupRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationRequest&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables data tiering. Data tiering is only supported for replication groups
     * using the r6gd node type. This parameter must be set to true when using r6gd
     * nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool GetDataTieringEnabled() const{ return m_dataTieringEnabled; }
    inline bool DataTieringEnabledHasBeenSet() const { return m_dataTieringEnabledHasBeenSet; }
    inline void SetDataTieringEnabled(bool value) { m_dataTieringEnabledHasBeenSet = true; m_dataTieringEnabled = value; }
    inline CreateReplicationGroupRequest& WithDataTieringEnabled(bool value) { SetDataTieringEnabled(value); return *this;}
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
    inline CreateReplicationGroupRequest& WithNetworkType(const NetworkType& value) { SetNetworkType(value); return *this;}
    inline CreateReplicationGroupRequest& WithNetworkType(NetworkType&& value) { SetNetworkType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type you choose when creating a replication group, either
     * <code>ipv4</code> | <code>ipv6</code>. IPv6 is supported for workloads using
     * Valkey 7.2 and above, Redis OSS engine version 6.2 and above or Memcached engine
     * version 1.6.6 and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>.</p>
     */
    inline const IpDiscovery& GetIpDiscovery() const{ return m_ipDiscovery; }
    inline bool IpDiscoveryHasBeenSet() const { return m_ipDiscoveryHasBeenSet; }
    inline void SetIpDiscovery(const IpDiscovery& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = value; }
    inline void SetIpDiscovery(IpDiscovery&& value) { m_ipDiscoveryHasBeenSet = true; m_ipDiscovery = std::move(value); }
    inline CreateReplicationGroupRequest& WithIpDiscovery(const IpDiscovery& value) { SetIpDiscovery(value); return *this;}
    inline CreateReplicationGroupRequest& WithIpDiscovery(IpDiscovery&& value) { SetIpDiscovery(std::move(value)); return *this;}
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
    inline const TransitEncryptionMode& GetTransitEncryptionMode() const{ return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(const TransitEncryptionMode& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode&& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = std::move(value); }
    inline CreateReplicationGroupRequest& WithTransitEncryptionMode(const TransitEncryptionMode& value) { SetTransitEncryptionMode(value); return *this;}
    inline CreateReplicationGroupRequest& WithTransitEncryptionMode(TransitEncryptionMode&& value) { SetTransitEncryptionMode(std::move(value)); return *this;}
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
    inline CreateReplicationGroupRequest& WithClusterMode(const ClusterMode& value) { SetClusterMode(value); return *this;}
    inline CreateReplicationGroupRequest& WithClusterMode(ClusterMode&& value) { SetClusterMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot used to create a replication group. Available for
     * Valkey, Redis OSS only.</p>
     */
    inline const Aws::String& GetServerlessCacheSnapshotName() const{ return m_serverlessCacheSnapshotName; }
    inline bool ServerlessCacheSnapshotNameHasBeenSet() const { return m_serverlessCacheSnapshotNameHasBeenSet; }
    inline void SetServerlessCacheSnapshotName(const Aws::String& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = value; }
    inline void SetServerlessCacheSnapshotName(Aws::String&& value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName = std::move(value); }
    inline void SetServerlessCacheSnapshotName(const char* value) { m_serverlessCacheSnapshotNameHasBeenSet = true; m_serverlessCacheSnapshotName.assign(value); }
    inline CreateReplicationGroupRequest& WithServerlessCacheSnapshotName(const Aws::String& value) { SetServerlessCacheSnapshotName(value); return *this;}
    inline CreateReplicationGroupRequest& WithServerlessCacheSnapshotName(Aws::String&& value) { SetServerlessCacheSnapshotName(std::move(value)); return *this;}
    inline CreateReplicationGroupRequest& WithServerlessCacheSnapshotName(const char* value) { SetServerlessCacheSnapshotName(value); return *this;}
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

    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet = false;

    bool m_multiAZEnabled;
    bool m_multiAZEnabledHasBeenSet = false;

    int m_numCacheClusters;
    bool m_numCacheClustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredCacheClusterAZs;
    bool m_preferredCacheClusterAZsHasBeenSet = false;

    int m_numNodeGroups;
    bool m_numNodeGroupsHasBeenSet = false;

    int m_replicasPerNodeGroup;
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

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    bool m_atRestEncryptionEnabled;
    bool m_atRestEncryptionEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_dataTieringEnabled;
    bool m_dataTieringEnabledHasBeenSet = false;

    NetworkType m_networkType;
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery;
    bool m_ipDiscoveryHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode;
    bool m_transitEncryptionModeHasBeenSet = false;

    ClusterMode m_clusterMode;
    bool m_clusterModeHasBeenSet = false;

    Aws::String m_serverlessCacheSnapshotName;
    bool m_serverlessCacheSnapshotNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
