/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/NodeGroupConfiguration.h>
#include <aws/elasticache/model/Tag.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateReplicationGroup</code> operation.</p>
   */
  class AWS_ELASTICACHE_API CreateReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    CreateReplicationGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The replication group identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline const Aws::String& GetReplicationGroupDescription() const{ return m_replicationGroupDescription; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(const Aws::String& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(Aws::String&& value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription = value; }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline void SetReplicationGroupDescription(const char* value) { m_replicationGroupDescriptionHasBeenSet = true; m_replicationGroupDescription.assign(value); }

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const Aws::String& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(Aws::String&& value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>A user-created description for the replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicationGroupDescription(const char* value) { SetReplicationGroupDescription(value); return *this;}

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline const Aws::String& GetPrimaryClusterId() const{ return m_primaryClusterId; }

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(const Aws::String& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(Aws::String&& value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId = value; }

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline void SetPrimaryClusterId(const char* value) { m_primaryClusterIdHasBeenSet = true; m_primaryClusterId.assign(value); }

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const Aws::String& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(Aws::String&& value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>The identifier of the cache cluster that serves as the primary for this
     * replication group. This cache cluster must already exist and have a status of
     * <code>available</code>.</p> <p>This parameter is not required if
     * <code>NumCacheClusters</code>, <code>NumNodeGroups</code>, or
     * <code>ReplicasPerNodeGroup</code> is specified.</p>
     */
    inline CreateReplicationGroupRequest& WithPrimaryClusterId(const char* value) { SetPrimaryClusterId(value); return *this;}

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>If <code>true</code>, Multi-AZ is
     * enabled for this replication group. If <code>false</code>, Multi-AZ is disabled
     * for this replication group.</p> <p> <code>AutomaticFailoverEnabled</code> must
     * be enabled for Redis (cluster mode enabled) replication groups.</p> <p>Default:
     * false</p> <note> <p>ElastiCache Multi-AZ replication groups is not supported
     * on:</p> <ul> <li> <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis
     * (cluster mode disabled): T1 and T2 node types.</p> <p>Redis (cluster mode
     * enabled): T2 node types.</p> </li> </ul> </note>
     */
    inline bool GetAutomaticFailoverEnabled() const{ return m_automaticFailoverEnabled; }

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>If <code>true</code>, Multi-AZ is
     * enabled for this replication group. If <code>false</code>, Multi-AZ is disabled
     * for this replication group.</p> <p> <code>AutomaticFailoverEnabled</code> must
     * be enabled for Redis (cluster mode enabled) replication groups.</p> <p>Default:
     * false</p> <note> <p>ElastiCache Multi-AZ replication groups is not supported
     * on:</p> <ul> <li> <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis
     * (cluster mode disabled): T1 and T2 node types.</p> <p>Redis (cluster mode
     * enabled): T2 node types.</p> </li> </ul> </note>
     */
    inline void SetAutomaticFailoverEnabled(bool value) { m_automaticFailoverEnabledHasBeenSet = true; m_automaticFailoverEnabled = value; }

    /**
     * <p>Specifies whether a read-only replica is automatically promoted to read/write
     * primary if the existing primary fails.</p> <p>If <code>true</code>, Multi-AZ is
     * enabled for this replication group. If <code>false</code>, Multi-AZ is disabled
     * for this replication group.</p> <p> <code>AutomaticFailoverEnabled</code> must
     * be enabled for Redis (cluster mode enabled) replication groups.</p> <p>Default:
     * false</p> <note> <p>ElastiCache Multi-AZ replication groups is not supported
     * on:</p> <ul> <li> <p>Redis versions earlier than 2.8.6.</p> </li> <li> <p>Redis
     * (cluster mode disabled): T1 and T2 node types.</p> <p>Redis (cluster mode
     * enabled): T2 node types.</p> </li> </ul> </note>
     */
    inline CreateReplicationGroupRequest& WithAutomaticFailoverEnabled(bool value) { SetAutomaticFailoverEnabled(value); return *this;}

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If <code>Multi-AZ</code>
     * is <code>enabled</code>, the value of this parameter must be at least 2.</p>
     * <p>The maximum permitted value for <code>NumCacheClusters</code> is 6 (primary
     * plus 5 replicas).</p>
     */
    inline int GetNumCacheClusters() const{ return m_numCacheClusters; }

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If <code>Multi-AZ</code>
     * is <code>enabled</code>, the value of this parameter must be at least 2.</p>
     * <p>The maximum permitted value for <code>NumCacheClusters</code> is 6 (primary
     * plus 5 replicas).</p>
     */
    inline void SetNumCacheClusters(int value) { m_numCacheClustersHasBeenSet = true; m_numCacheClusters = value; }

    /**
     * <p>The number of clusters this replication group initially has.</p> <p>This
     * parameter is not used if there is more than one node group (shard). You should
     * use <code>ReplicasPerNodeGroup</code> instead.</p> <p>If <code>Multi-AZ</code>
     * is <code>enabled</code>, the value of this parameter must be at least 2.</p>
     * <p>The maximum permitted value for <code>NumCacheClusters</code> is 6 (primary
     * plus 5 replicas).</p>
     */
    inline CreateReplicationGroupRequest& WithNumCacheClusters(int value) { SetNumCacheClusters(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredCacheClusterAZs() const{ return m_preferredCacheClusterAZs; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline void SetPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = value; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline void SetPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs = value; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(const Aws::Vector<Aws::String>& value) { SetPreferredCacheClusterAZs(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& WithPreferredCacheClusterAZs(Aws::Vector<Aws::String>&& value) { SetPreferredCacheClusterAZs(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const Aws::String& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(Aws::String&& value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones in which the replication group's cache
     * clusters are created. The order of the Availability Zones in the list is the
     * order in which clusters are allocated. The primary cluster is created in the
     * first AZ in the list.</p> <p>This parameter is not used if there is more than
     * one node group (shard). You should use <code>NodeGroupConfiguration</code>
     * instead.</p> <note> <p>If you are creating your replication group in an Amazon
     * VPC (recommended), you can only locate cache clusters in Availability Zones
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheClusters</code>.</p> </note> <p>Default: system chosen
     * Availability Zones.</p>
     */
    inline CreateReplicationGroupRequest& AddPreferredCacheClusterAZs(const char* value) { m_preferredCacheClusterAZsHasBeenSet = true; m_preferredCacheClusterAZs.push_back(value); return *this; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline int GetNumNodeGroups() const{ return m_numNodeGroups; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline void SetNumNodeGroups(int value) { m_numNodeGroupsHasBeenSet = true; m_numNodeGroups = value; }

    /**
     * <p>An optional parameter that specifies the number of node groups (shards) for
     * this Redis (cluster mode enabled) replication group. For Redis (cluster mode
     * disabled) either omit this parameter or set it to 1.</p> <p>Default: 1</p>
     */
    inline CreateReplicationGroupRequest& WithNumNodeGroups(int value) { SetNumNodeGroups(value); return *this;}

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline int GetReplicasPerNodeGroup() const{ return m_replicasPerNodeGroup; }

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline void SetReplicasPerNodeGroup(int value) { m_replicasPerNodeGroupHasBeenSet = true; m_replicasPerNodeGroup = value; }

    /**
     * <p>An optional parameter that specifies the number of replica nodes in each node
     * group (shard). Valid values are 0 to 5.</p>
     */
    inline CreateReplicationGroupRequest& WithReplicasPerNodeGroup(int value) { SetReplicasPerNodeGroup(value); return *this;}

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline const Aws::Vector<NodeGroupConfiguration>& GetNodeGroupConfiguration() const{ return m_nodeGroupConfiguration; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline void SetNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline void SetNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration = value; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(const Aws::Vector<NodeGroupConfiguration>& value) { SetNodeGroupConfiguration(value); return *this;}

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline CreateReplicationGroupRequest& WithNodeGroupConfiguration(Aws::Vector<NodeGroupConfiguration>&& value) { SetNodeGroupConfiguration(value); return *this;}

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(const NodeGroupConfiguration& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of node group (shard) configuration options. Each node group (shard)
     * configuration has the following: Slots, PrimaryAvailabilityZone,
     * ReplicaAvailabilityZones, ReplicaCount.</p> <p>If you're creating a Redis
     * (cluster mode disabled) or a Redis (cluster mode enabled) replication group, you
     * can use this parameter to configure one node group (shard) or you can omit this
     * parameter.</p>
     */
    inline CreateReplicationGroupRequest& AddNodeGroupConfiguration(NodeGroupConfiguration&& value) { m_nodeGroupConfigurationHasBeenSet = true; m_nodeGroupConfiguration.push_back(value); return *this; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the node group (shard).</p>
     * <p>Valid node types are as follows:</p> <ul> <li> <p>General purpose:</p> <ul>
     * <li> <p>Current generation: <code>cache.t2.micro</code>,
     * <code>cache.t2.small</code>, <code>cache.t2.medium</code>,
     * <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code>,
     * <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All T2 instances are created in
     * an Amazon Virtual Private Cloud (Amazon VPC).</p> </li> <li> <p>Redis
     * backup/restore is not supported for Redis (cluster mode disabled) T1 and T2
     * instances. Backup/restore is supported on Redis (cluster mode enabled) T2
     * instances.</p> </li> <li> <p>Redis Append-only files (AOF) functionality is not
     * supported for T1 or T2 instances.</p> </li> </ul> <p>For a complete listing of
     * node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and either <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#ParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#ParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for the cache clusters in this
     * replication group.</p>
     */
    inline CreateReplicationGroupRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for the cache clusters in
     * this replication group. To view the supported cache engine versions, use the
     * <code>DescribeCacheEngineVersions</code> operation.</p> <p> <b>Important:</b>
     * You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>) in the <i>ElastiCache User Guide</i>, but you
     * cannot downgrade to an earlier engine version. If you want to use an earlier
     * engine version, you must delete the existing cache cluster or replication group
     * and create it anew with the earlier engine version. </p>
     */
    inline CreateReplicationGroupRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this replication group. If
     * this argument is omitted, the default cache parameter group for the specified
     * engine is used.</p> <p>If you are running Redis version 3.2.4 or later, only one
     * node group (shard), and want to use a default parameter group, we recommend that
     * you specify the parameter group by name. </p> <ul> <li> <p>To create a Redis
     * (cluster mode disabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2</code>.</p> </li> <li> <p>To
     * create a Redis (cluster mode enabled) replication group, use
     * <code>CacheParameterGroupName=default.redis3.2.cluster.on</code>.</p> </li>
     * </ul>
     */
    inline CreateReplicationGroupRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cache subnet group to be used for the replication group.</p>
     * <important> <p>If you're going to launch your cluster in an Amazon VPC, you need
     * to create a subnet group before you start creating a cluster. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateReplicationGroupRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to associate with this replication
     * group.</p>
     */
    inline CreateReplicationGroupRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more Amazon VPC security groups associated with this replication
     * group.</p> <p>Use this parameter only when you are creating a replication group
     * in an Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateReplicationGroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateReplicationGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateReplicationGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateReplicationGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateReplicationGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const{ return m_snapshotArns; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(const Aws::Vector<Aws::String>& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(Aws::Vector<Aws::String>&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotArns(const Aws::Vector<Aws::String>& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotArns(Aws::Vector<Aws::String>&& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(const Aws::String& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(Aws::String&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the Redis RDB
     * snapshot files stored in Amazon S3. The snapshot files are used to populate the
     * replication group. The Amazon S3 object name in the ARN cannot contain any
     * commas. The list must match the number of node groups (shards) in the
     * replication group, which means you cannot repartition.</p> <note> <p>This
     * parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Example of an Amazon S3 ARN:
     * <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateReplicationGroupRequest& AddSnapshotArns(const char* value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new replication
     * group. The snapshot status changes to <code>restoring</code> while the new
     * replication group is being created.</p> <note> <p>This parameter is only valid
     * if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <p>Specifies the weekly time range during
     * which maintenance on the cluster is performed. It is specified as a range in the
     * format ddd:hh24:mi-ddd:hh24:mi (24H Clock UTC). The minimum maintenance window
     * is a 60 minute period.</p> <p>Valid values for <code>ddd</code> are:</p> <ul>
     * <li> <p> <code>sun</code> </p> </li> <li> <p> <code>mon</code> </p> </li> <li>
     * <p> <code>tue</code> </p> </li> <li> <p> <code>wed</code> </p> </li> <li> <p>
     * <code>thu</code> </p> </li> <li> <p> <code>fri</code> </p> </li> <li> <p>
     * <code>sat</code> </p> </li> </ul> <p>Example: <code>sun:23:00-mon:01:30</code>
     * </p>
     */
    inline CreateReplicationGroupRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which each member of the replication group accepts
     * connections.</p>
     */
    inline CreateReplicationGroupRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline CreateReplicationGroupRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <note> <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <note> <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot that was taken today is retained for 5 days before being deleted.</p>
     * <note> <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline CreateReplicationGroupRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateReplicationGroupRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline const Aws::String& GetAuthToken() const{ return m_authToken; }

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline void SetAuthToken(const Aws::String& value) { m_authTokenHasBeenSet = true; m_authToken = value; }

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline void SetAuthToken(Aws::String&& value) { m_authTokenHasBeenSet = true; m_authToken = value; }

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline void SetAuthToken(const char* value) { m_authTokenHasBeenSet = true; m_authToken.assign(value); }

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline CreateReplicationGroupRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}

  private:
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
    Aws::String m_replicationGroupDescription;
    bool m_replicationGroupDescriptionHasBeenSet;
    Aws::String m_primaryClusterId;
    bool m_primaryClusterIdHasBeenSet;
    bool m_automaticFailoverEnabled;
    bool m_automaticFailoverEnabledHasBeenSet;
    int m_numCacheClusters;
    bool m_numCacheClustersHasBeenSet;
    Aws::Vector<Aws::String> m_preferredCacheClusterAZs;
    bool m_preferredCacheClusterAZsHasBeenSet;
    int m_numNodeGroups;
    bool m_numNodeGroupsHasBeenSet;
    int m_replicasPerNodeGroup;
    bool m_replicasPerNodeGroupHasBeenSet;
    Aws::Vector<NodeGroupConfiguration> m_nodeGroupConfiguration;
    bool m_nodeGroupConfigurationHasBeenSet;
    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;
    Aws::String m_cacheSubnetGroupName;
    bool m_cacheSubnetGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet;
    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::Vector<Aws::String> m_snapshotArns;
    bool m_snapshotArnsHasBeenSet;
    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;
    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;
    Aws::String m_authToken;
    bool m_authTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
