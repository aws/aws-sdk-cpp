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

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The input parameters for the <code>ListAllowedNodeTypeModifications</code>
   * operation.</p>
   */
  class AWS_ELASTICACHE_API ListAllowedNodeTypeModificationsRequest : public ElastiCacheRequest
  {
  public:
    ListAllowedNodeTypeModificationsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The name of the cache cluster you want to scale up to a larger node instanced
     * type. ElastiCache uses the cluster id to identify the current node type of this
     * cluster and from that to create a list of node types you can scale up to.</p>
     * <important> <p>You must provide a value for either the
     * <code>CacheClusterId</code> or the <code>ReplicationGroupId</code>.</p>
     * </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the replication group want to scale up to a larger node type.
     * ElastiCache uses the replication group id to identify the current node type
     * being used by this replication group, and from that to create a list of node
     * types you can scale up to.</p> <important> <p>You must provide a value for
     * either the <code>CacheClusterId</code> or the
     * <code>ReplicationGroupId</code>.</p> </important>
     */
    inline ListAllowedNodeTypeModificationsRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
