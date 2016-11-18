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
#include <aws/elasticache/model/AZMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Tag.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a CreateCacheCluster operation.</p>
   */
  class AWS_ELASTICACHE_API CreateCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    CreateCacheClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The node group (shard) identifier. This parameter is stored as a lowercase
     * string.</p> <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1
     * to 20 alphanumeric characters or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <important> <p>Due to current limitations on Redis (cluster mode disabled), this
     * operation or parameter is not supported on Redis (cluster mode enabled)
     * replication groups.</p> </important> <p>The ID of the replication group to which
     * this cache cluster should belong. If this parameter is specified, the cache
     * cluster is added to the specified replication group as a read replica;
     * otherwise, the cache cluster is a standalone primary that is not part of any
     * replication group.</p> <p>If the specified replication group is Multi-AZ enabled
     * and the Availability Zone is not specified, the cache cluster is created in
     * Availability Zones that provide the best spread of read replicas across
     * Availability Zones.</p> <note> <p>This parameter is only valid if the
     * <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached cache
     * clusters.</p> <p>If the <code>AZMode</code> and
     * <code>PreferredAvailabilityZones</code> are not specified, ElastiCache assumes
     * <code>single-az</code> mode.</p>
     */
    inline const AZMode& GetAZMode() const{ return m_aZMode; }

    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached cache
     * clusters.</p> <p>If the <code>AZMode</code> and
     * <code>PreferredAvailabilityZones</code> are not specified, ElastiCache assumes
     * <code>single-az</code> mode.</p>
     */
    inline void SetAZMode(const AZMode& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }

    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached cache
     * clusters.</p> <p>If the <code>AZMode</code> and
     * <code>PreferredAvailabilityZones</code> are not specified, ElastiCache assumes
     * <code>single-az</code> mode.</p>
     */
    inline void SetAZMode(AZMode&& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }

    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached cache
     * clusters.</p> <p>If the <code>AZMode</code> and
     * <code>PreferredAvailabilityZones</code> are not specified, ElastiCache assumes
     * <code>single-az</code> mode.</p>
     */
    inline CreateCacheClusterRequest& WithAZMode(const AZMode& value) { SetAZMode(value); return *this;}

    /**
     * <p>Specifies whether the nodes in this Memcached cluster are created in a single
     * Availability Zone or created across multiple Availability Zones in the cluster's
     * region.</p> <p>This parameter is only supported for Memcached cache
     * clusters.</p> <p>If the <code>AZMode</code> and
     * <code>PreferredAvailabilityZones</code> are not specified, ElastiCache assumes
     * <code>single-az</code> mode.</p>
     */
    inline CreateCacheClusterRequest& WithAZMode(AZMode&& value) { SetAZMode(value); return *this;}

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline const Aws::String& GetPreferredAvailabilityZone() const{ return m_preferredAvailabilityZone; }

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline void SetPreferredAvailabilityZone(const Aws::String& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline void SetPreferredAvailabilityZone(Aws::String&& value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline void SetPreferredAvailabilityZone(const char* value) { m_preferredAvailabilityZoneHasBeenSet = true; m_preferredAvailabilityZone.assign(value); }

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline CreateCacheClusterRequest& WithPreferredAvailabilityZone(const Aws::String& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline CreateCacheClusterRequest& WithPreferredAvailabilityZone(Aws::String&& value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone in which the cache cluster is created.</p> <p>All
     * nodes belonging to this Memcached cache cluster are placed in the preferred
     * Availability Zone. If you want to create your nodes across multiple Availability
     * Zones, use <code>PreferredAvailabilityZones</code>.</p> <p>Default: System
     * chosen Availability Zone.</p>
     */
    inline CreateCacheClusterRequest& WithPreferredAvailabilityZone(const char* value) { SetPreferredAvailabilityZone(value); return *this;}

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const{ return m_preferredAvailabilityZones; }

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline void SetPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = value; }

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline void SetPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = value; }

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline CreateCacheClusterRequest& WithPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetPreferredAvailabilityZones(value); return *this;}

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline CreateCacheClusterRequest& WithPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetPreferredAvailabilityZones(value); return *this;}

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline CreateCacheClusterRequest& AddPreferredAvailabilityZones(const Aws::String& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline CreateCacheClusterRequest& AddPreferredAvailabilityZones(Aws::String&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of the Availability Zones in which cache nodes are created. The order
     * of the zones in the list is not important.</p> <p>This option is only supported
     * on Memcached.</p> <note> <p>If you are creating your cache cluster in an Amazon
     * VPC (recommended) you can only locate nodes in Availability Zones that are
     * associated with the subnets in the selected subnet group.</p> <p>The number of
     * Availability Zones listed must equal the value of
     * <code>NumCacheNodes</code>.</p> </note> <p>If you want all the nodes in the same
     * Availability Zone, use <code>PreferredAvailabilityZone</code> instead, or repeat
     * the Availability Zone multiple times in the list.</p> <p>Default: System chosen
     * Availability Zones.</p>
     */
    inline CreateCacheClusterRequest& AddPreferredAvailabilityZones(const char* value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>The initial number of cache nodes that the cache cluster has.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <p>If you need more than 20 nodes for
     * your Memcached cluster, please fill out the ElastiCache Limit Increase Request
     * form at <a
     * href="http://aws.amazon.com/contact-us/elasticache-node-limit-request/">http://aws.amazon.com/contact-us/elasticache-node-limit-request/</a>.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The initial number of cache nodes that the cache cluster has.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <p>If you need more than 20 nodes for
     * your Memcached cluster, please fill out the ElastiCache Limit Increase Request
     * form at <a
     * href="http://aws.amazon.com/contact-us/elasticache-node-limit-request/">http://aws.amazon.com/contact-us/elasticache-node-limit-request/</a>.</p>
     */
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The initial number of cache nodes that the cache cluster has.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <p>If you need more than 20 nodes for
     * your Memcached cluster, please fill out the ElastiCache Limit Increase Request
     * form at <a
     * href="http://aws.amazon.com/contact-us/elasticache-node-limit-request/">http://aws.amazon.com/contact-us/elasticache-node-limit-request/</a>.</p>
     */
    inline CreateCacheClusterRequest& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}

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
    inline CreateCacheClusterRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

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
    inline CreateCacheClusterRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

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
    inline CreateCacheClusterRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline CreateCacheClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline CreateCacheClusterRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the cache engine to be used for this cache cluster.</p> <p>Valid
     * values for this parameter are: <code>memcached</code> | <code>redis</code> </p>
     */
    inline CreateCacheClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline CreateCacheClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline CreateCacheClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the cache engine to be used for this cache cluster. To
     * view the supported cache engine versions, use the DescribeCacheEngineVersions
     * operation.</p> <p> <b>Important:</b> You can upgrade to a newer engine version
     * (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster or replication group and create it anew with the earlier
     * engine version. </p>
     */
    inline CreateCacheClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline CreateCacheClusterRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline CreateCacheClusterRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group to associate with this cache cluster. If this
     * argument is omitted, the default parameter group for the specified engine is
     * used. You cannot use any parameter group which has
     * <code>cluster-enabled='yes'</code> when creating a cluster.</p>
     */
    inline CreateCacheClusterRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline const Aws::String& GetCacheSubnetGroupName() const{ return m_cacheSubnetGroupName; }

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(const Aws::String& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(Aws::String&& value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline void SetCacheSubnetGroupName(const char* value) { m_cacheSubnetGroupNameHasBeenSet = true; m_cacheSubnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateCacheClusterRequest& WithCacheSubnetGroupName(const Aws::String& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateCacheClusterRequest& WithCacheSubnetGroupName(Aws::String&& value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be used for the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <important> <p>If you're going to launch your
     * cluster in an Amazon VPC, you need to create a subnet group before you start
     * creating a cluster. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SubnetGroups.html">Subnets
     * and Subnet Groups</a>.</p> </important>
     */
    inline CreateCacheClusterRequest& WithCacheSubnetGroupName(const char* value) { SetCacheSubnetGroupName(value); return *this;}

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of security group names to associate with this cache cluster.</p>
     * <p>Use this parameter only when you are creating a cache cluster outside of an
     * Amazon Virtual Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more VPC security groups associated with the cache cluster.</p> <p>Use
     * this parameter only when you are creating a cache cluster in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline CreateCacheClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

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
    inline CreateCacheClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateCacheClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateCacheClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of cost allocation tags to be added to this resource. A tag is a
     * key-value pair. A tag key must be accompanied by a tag value.</p>
     */
    inline CreateCacheClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const{ return m_snapshotArns; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(const Aws::Vector<Aws::String>& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline void SetSnapshotArns(Aws::Vector<Aws::String>&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateCacheClusterRequest& WithSnapshotArns(const Aws::Vector<Aws::String>& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateCacheClusterRequest& WithSnapshotArns(Aws::Vector<Aws::String>&& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateCacheClusterRequest& AddSnapshotArns(const Aws::String& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateCacheClusterRequest& AddSnapshotArns(Aws::String&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A single-element string list containing an Amazon Resource Name (ARN) that
     * uniquely identifies a Redis RDB snapshot file stored in Amazon S3. The snapshot
     * file is used to populate the node group (shard). The Amazon S3 object name in
     * the ARN cannot contain any commas.</p> <note> <p>This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p> </note> <p>Example
     * of an Amazon S3 ARN: <code>arn:aws:s3:::my_bucket/snapshot1.rdb</code> </p>
     */
    inline CreateCacheClusterRequest& AddSnapshotArns(const char* value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a Redis snapshot from which to restore data into the new node
     * group (shard). The snapshot status changes to <code>restoring</code> while the
     * new node group (shard) is being created.</p> <note> <p>This parameter is only
     * valid if the <code>Engine</code> parameter is <code>redis</code>.</p> </note>
     */
    inline CreateCacheClusterRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

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
    inline CreateCacheClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline CreateCacheClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline CreateCacheClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The port number on which each of the cache nodes accepts connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which each of the cache nodes accepts connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which each of the cache nodes accepts connections.</p>
     */
    inline CreateCacheClusterRequest& WithPort(int value) { SetPort(value); return *this;}

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
    inline CreateCacheClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline CreateCacheClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p> <note> <p>The Amazon SNS topic
     * owner must be the same as the cache cluster owner.</p> </note>
     */
    inline CreateCacheClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

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
    inline CreateCacheClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot taken today is retained for 5 days before being deleted.</p> <note>
     * <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot taken today is retained for 5 days before being deleted.</p> <note>
     * <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic snapshots before
     * deleting them. For example, if you set <code>SnapshotRetentionLimit</code> to 5,
     * a snapshot taken today is retained for 5 days before being deleted.</p> <note>
     * <p>This parameter is only valid if the <code>Engine</code> parameter is
     * <code>redis</code>.</p> </note> <p>Default: 0 (i.e., automatic backups are
     * disabled for this cache cluster).</p>
     */
    inline CreateCacheClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline CreateCacheClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline CreateCacheClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your node group (shard).</p> <p>Example: <code>05:00-09:00</code>
     * </p> <p>If you do not specify this parameter, ElastiCache automatically chooses
     * an appropriate time range.</p> <p> <b>Note:</b> This parameter is only valid if
     * the <code>Engine</code> parameter is <code>redis</code>.</p>
     */
    inline CreateCacheClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}

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
    inline CreateCacheClusterRequest& WithAuthToken(const Aws::String& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline CreateCacheClusterRequest& WithAuthToken(Aws::String&& value) { SetAuthToken(value); return *this;}

    /**
     * <p>The password used to access a password protected server.</p> <p>Password
     * constraints:</p> <ul> <li> <p>Must be only printable ASCII characters.</p> </li>
     * <li> <p>Must be at least 16 characters and no more than 128 characters in
     * length.</p> </li> <li> <p>Cannot contain any of the following characters: '/',
     * '"', or "@". </p> </li> </ul> <p>For more information, see <a
     * href="http://redis.io/commands/AUTH">AUTH password</a> at Redis.</p>
     */
    inline CreateCacheClusterRequest& WithAuthToken(const char* value) { SetAuthToken(value); return *this;}

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
    AZMode m_aZMode;
    bool m_aZModeHasBeenSet;
    Aws::String m_preferredAvailabilityZone;
    bool m_preferredAvailabilityZoneHasBeenSet;
    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet;
    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet;
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
