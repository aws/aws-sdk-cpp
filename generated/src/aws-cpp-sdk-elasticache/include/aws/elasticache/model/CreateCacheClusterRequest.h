/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/AZMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/OutpostMode.h>
#include <aws/elasticache/model/NetworkType.h>
#include <aws/elasticache/model/IpDiscovery.h>
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
   * <p>Represents the input of a CreateCacheCluster operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CreateCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class CreateCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateCacheClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCacheCluster"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 50 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheClusterId() const { return m_cacheClusterId; }
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }
    template<typename CacheClusterIdT = Aws::String>
    void SetCacheClusterId(CacheClusterIdT&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::forward<CacheClusterIdT>(value); }
    template<typename CacheClusterIdT = Aws::String>
    CreateCacheClusterRequest& WithCacheClusterId(CacheClusterIdT&& value) { SetCacheClusterId(std::forward<CacheClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the replication group to which this cluster should belong. If this
     * parameter is specified, the cluster is added to the specified replication group
     * as a read replica; otherwise, the cluster is a standalone primary that is not
     * part of any replication group.</p> <p>If the specified replication group is
     * Multi-AZ enabled and the Availability Zone is not specified, the cluster is
     * created in Availability Zones that provide the best spread of read replicas
     * across Availability Zones.</p>  <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> 
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    CreateCacheClusterRequest& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached clusters.</p>
     * <p>If the <code>AZMode</code> and <code>PreferredAvailabilityZones</code> are
     * not specified, ElastiCache assumes <code>single-az</code> mode.</p>
     */
    inline AZMode GetAZMode() const { return m_aZMode; }
    inline bool AZModeHasBeenSet() const { return m_aZModeHasBeenSet; }
    inline void SetAZMode(AZMode value) { m_aZModeHasBeenSet = true; m_aZMode = value; }
    inline CreateCacheClusterRequest& WithAZMode(AZMode value) { SetAZMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Availability Zone in which the cluster is created.</p> <p>All nodes
     * belonging to this cluster are placed in the preferred Availability Zone. If you
     * want to create your nodes across multiple Availability Zones, use
     * <code>PreferredAvailabilityZones</code>.</p> <p>Default: System chosen
     * Availability Zone.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const { return m_preferredAvailabilityZone; }
    inline bool PreferredAvailabilityZoneHasBeenSet() const { return m_preferredAvailabilityZoneHasBeenSet; }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    void SetPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = std::forward<PreferredAvailabilityZoneT>(value); }
    template<typename PreferredAvailabilityZoneT = Aws::String>
    CreateCacheClusterRequest& WithPreferredAvailabilityZone(PreferredAvailabilityZoneT&& value) { SetPreferredAvailabilityZone(std::forward<PreferredAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p>  <p>If you are creating your cluster in an Amazon VPC
     * (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p>  <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const { return m_preferredAvailabilityZones; }
    inline bool PreferredAvailabilityZonesHasBeenSet() const { return m_preferredAvailabilityZonesHasBeenSet; }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = std::forward<PreferredAvailabilityZonesT>(value); }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    CreateCacheClusterRequest& WithPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { SetPreferredAvailabilityZones(std::forward<PreferredAvailabilityZonesT>(value)); return *this;}
    template<typename PreferredAvailabilityZonesT = Aws::String>
    CreateCacheClusterRequest& AddPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.emplace_back(std::forward<PreferredAvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The initial number of cache nodes that the cluster has.</p> <p>For clusters
     * running Valkey or Redis OSS, this value must be 1. For clusters running
     * Memcached, this value must be between 1 and 40.</p> <p>If you need more than 40
     * nodes for your Memcached cluster, please fill out the ElastiCache Limit Increase
     * Request form at <a
     * href="http://aws.amazon.com/contact-us/elasticache-node-limit-request/">http://aws.amazon.com/contact-us/elasticache-node-limit-request/</a>.</p>
     */
    inline int GetNumCacheNodes() const { return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline CreateCacheClusterRequest& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
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
    CreateCacheClusterRequest& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cache engine to be used for this cluster.</p> <p>Valid values
     * for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    CreateCacheClusterRequest& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the cache engine to be used for this cluster. To view
     * the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster or replication group and create it anew with the earlier engine
     * version. </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    CreateCacheClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group to associate with this cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const { return m_cacheParameterGroupName; }
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }
    template<typename CacheParameterGroupNameT = Aws::String>
    void SetCacheParameterGroupName(CacheParameterGroupNameT&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::forward<CacheParameterGroupNameT>(value); }
    template<typename CacheParameterGroupNameT = Aws::String>
    CreateCacheClusterRequest& WithCacheParameterGroupName(CacheParameterGroupNameT&& value) { SetCacheParameterGroupName(std::forward<CacheParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the subnet group to be used for the cluster.</p> <p>Use this
     * parameter only when you are creating a cluster in an Amazon Virtual Private
     * Cloud (Amazon VPC).</p>  <p>If you're going to launch your cluster in
     * an Amazon VPC, you need to create a subnet group before you start creating a
     * cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/dg/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> 
     */
    inline const Aws::String& GetCacheSubnetGroupName() const { return m_cacheSubnetGroupName; }
    inline bool CacheSubnetGroupNameHasBeenSet() const { return m_cacheSubnetGroupNameHasBeenSet; }
    template<typename CacheSubnetGroupNameT = Aws::String>
    void SetCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = std::forward<CacheSubnetGroupNameT>(value); }
    template<typename CacheSubnetGroupNameT = Aws::String>
    CreateCacheClusterRequest& WithCacheSubnetGroupName(CacheSubnetGroupNameT&& value) { SetCacheSubnetGroupName(std::forward<CacheSubnetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security group names to associate with this cluster.</p> <p>Use
     * this parameter only when you are creating a cluster outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const { return m_cacheSecurityGroupNames; }
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    void SetCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::forward<CacheSecurityGroupNamesT>(value); }
    template<typename CacheSecurityGroupNamesT = Aws::Vector<Aws::String>>
    CreateCacheClusterRequest& WithCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { SetCacheSecurityGroupNames(std::forward<CacheSecurityGroupNamesT>(value)); return *this;}
    template<typename CacheSecurityGroupNamesT = Aws::String>
    CreateCacheClusterRequest& AddCacheSecurityGroupNames(CacheSecurityGroupNamesT&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.emplace_back(std::forward<CacheSecurityGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more VPC security groups associated with the cluster.</p> <p>Use this
     * parameter only when you are creating a cluster in an Amazon Virtual Private
     * Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateCacheClusterRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateCacheClusterRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCacheClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCacheClusterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Valkey or Redis OSS RDB snapshot file stored in Amazon S3.
     * The snapshot file is used to populate the node group (shard). The Amazon S3
     * object name in the ARN cannot contain any commas.</p>  <p>This parameter
     * is only valid if the <code>Engine</code> parameter is <code>redis</code>.</p>
     *  <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const { return m_snapshotArns; }
    inline bool SnapshotArnsHasBeenSet() const { return m_snapshotArnsHasBeenSet; }
    template<typename SnapshotArnsT = Aws::Vector<Aws::String>>
    void SetSnapshotArns(SnapshotArnsT&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = std::forward<SnapshotArnsT>(value); }
    template<typename SnapshotArnsT = Aws::Vector<Aws::String>>
    CreateCacheClusterRequest& WithSnapshotArns(SnapshotArnsT&& value) { SetSnapshotArns(std::forward<SnapshotArnsT>(value)); return *this;}
    template<typename SnapshotArnsT = Aws::String>
    CreateCacheClusterRequest& AddSnapshotArns(SnapshotArnsT&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.emplace_back(std::forward<SnapshotArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a Valkey or Redis OSS snapshot from which to restore data into
     * the new node group (shard). The snapshot status changes to
     * <code>restoring</code> while the new node group (shard) is being created.</p>
     *  <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> 
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    CreateCacheClusterRequest& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    CreateCacheClusterRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which each of the cache nodes accepts connections.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateCacheClusterRequest& WithPort(int value) { SetPort(value); return *this;}
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
    CreateCacheClusterRequest& WithNotificationTopicArn(NotificationTopicArnT&& value) { SetNotificationTopicArn(std::forward<NotificationTopicArnT>(value)); return *this;}
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
    inline CreateCacheClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot taken today is retained for 5 days before being deleted.</p> 
     * <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p>  <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline int GetSnapshotRetentionLimit() const { return m_snapshotRetentionLimit; }
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }
    inline CreateCacheClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}
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
    CreateCacheClusterRequest& WithSnapshotWindow(SnapshotWindowT&& value) { SetSnapshotWindow(std::forward<SnapshotWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Reserved parameter.</b> The password used to access a password protected
     * server.</p> <p>Password constraints:</p> <ul> <li> <p>Must be only printable
     * ASCII characters.</p> </li> <li> <p>Must be at least 16 characters and no more
     * than 128 characters in length.</p> </li> <li> <p>The only permitted printable
     * special characters are !, &amp;, #, $, ^, &lt;, &gt;, and -. Other printable
     * special characters cannot be used in the AUTH token.</p> </li> </ul> <p>For more
     * information, see <a href="http://redis.io/commands/AUTH">AUTH password</a> at
     * http://redis.io/commands/AUTH.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    inline bool AuthTokenHasBeenSet() const { return m_authTokenHasBeenSet; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    CreateCacheClusterRequest& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the nodes in the cluster are created in a single outpost or
     * across multiple outposts.</p>
     */
    inline OutpostMode GetOutpostMode() const { return m_outpostMode; }
    inline bool OutpostModeHasBeenSet() const { return m_outpostModeHasBeenSet; }
    inline void SetOutpostMode(OutpostMode value) { m_outpostModeHasBeenSet = true; m_outpostMode = value; }
    inline CreateCacheClusterRequest& WithOutpostMode(OutpostMode value) { SetOutpostMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARN in which the cache cluster is created.</p>
     */
    inline const Aws::String& GetPreferredOutpostArn() const { return m_preferredOutpostArn; }
    inline bool PreferredOutpostArnHasBeenSet() const { return m_preferredOutpostArnHasBeenSet; }
    template<typename PreferredOutpostArnT = Aws::String>
    void SetPreferredOutpostArn(PreferredOutpostArnT&& value) { m_preferredOutpostArnHasBeenSet = true; m_preferredOutpostArn = std::forward<PreferredOutpostArnT>(value); }
    template<typename PreferredOutpostArnT = Aws::String>
    CreateCacheClusterRequest& WithPreferredOutpostArn(PreferredOutpostArnT&& value) { SetPreferredOutpostArn(std::forward<PreferredOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outpost ARNs in which the cache cluster is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredOutpostArns() const { return m_preferredOutpostArns; }
    inline bool PreferredOutpostArnsHasBeenSet() const { return m_preferredOutpostArnsHasBeenSet; }
    template<typename PreferredOutpostArnsT = Aws::Vector<Aws::String>>
    void SetPreferredOutpostArns(PreferredOutpostArnsT&& value) { m_preferredOutpostArnsHasBeenSet = true; m_preferredOutpostArns = std::forward<PreferredOutpostArnsT>(value); }
    template<typename PreferredOutpostArnsT = Aws::Vector<Aws::String>>
    CreateCacheClusterRequest& WithPreferredOutpostArns(PreferredOutpostArnsT&& value) { SetPreferredOutpostArns(std::forward<PreferredOutpostArnsT>(value)); return *this;}
    template<typename PreferredOutpostArnsT = Aws::String>
    CreateCacheClusterRequest& AddPreferredOutpostArns(PreferredOutpostArnsT&& value) { m_preferredOutpostArnsHasBeenSet = true; m_preferredOutpostArns.emplace_back(std::forward<PreferredOutpostArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the destination, format and type of the logs. </p>
     */
    inline const Aws::Vector<LogDeliveryConfigurationRequest>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfigurationRequest>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<LogDeliveryConfigurationRequest>>
    CreateCacheClusterRequest& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = LogDeliveryConfigurationRequest>
    CreateCacheClusterRequest& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true.</p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline CreateCacheClusterRequest& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be either <code>ipv4</code> | <code>ipv6</code> |
     * <code>dual_stack</code>. IPv6 is supported for workloads using Valkey 7.2 and
     * above, Redis OSS engine version 6.2 to 7.1 and Memcached engine version 1.6.6
     * and above on all instances built on the <a
     * href="http://aws.amazon.com/ec2/nitro/">Nitro system</a>. </p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateCacheClusterRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
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
    inline CreateCacheClusterRequest& WithIpDiscovery(IpDiscovery value) { SetIpDiscovery(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet = false;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    AZMode m_aZMode{AZMode::NOT_SET};
    bool m_aZModeHasBeenSet = false;

    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet = false;

    int m_numCacheNodes{0};
    bool m_numCacheNodesHasBeenSet = false;

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

    OutpostMode m_outpostMode{OutpostMode::NOT_SET};
    bool m_outpostModeHasBeenSet = false;

    Aws::String m_preferredOutpostArn;
    bool m_preferredOutpostArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredOutpostArns;
    bool m_preferredOutpostArnsHasBeenSet = false;

    Aws::Vector<LogDeliveryConfigurationRequest> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    IpDiscovery m_ipDiscovery{IpDiscovery::NOT_SET};
    bool m_ipDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
