/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/AZMode.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>ModifyCacheCluster</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ModifyCacheClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API ModifyCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    ModifyCacheClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCacheCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline bool CacheClusterIdHasBeenSet() const { return m_cacheClusterIdHasBeenSet; }

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = std::move(value); }

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}


    /**
     * <p>The number of cache nodes that the cluster should have. If the value for
     * <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * more nodes are added. If the value is less than the number of existing cache
     * nodes, nodes are removed. If the value is equal to the number of current cache
     * nodes, any pending add or remove requests are canceled.</p> <p>If you are
     * removing cache nodes, you must use the <code>CacheNodeIdsToRemove</code>
     * parameter to provide the IDs of the specific cache nodes to remove.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <note> <p>Adding or removing Memcached
     * cache nodes can be applied immediately or as a pending operation (see
     * <code>ApplyImmediately</code>).</p> <p>A pending operation to modify the number
     * of cache nodes in a cluster during its maintenance window, whether by adding or
     * removing nodes in accordance with the scale out architecture, is not queued. The
     * customer's latest request to add or remove nodes to the cluster overrides any
     * previous pending operations to modify the number of cache nodes in the cluster.
     * For example, a request to remove 2 nodes would override a previous pending
     * operation to remove 3 nodes. Similarly, a request to add 2 nodes would override
     * a previous pending operation to remove 3 nodes and vice versa. As Memcached
     * cache nodes may now be provisioned in different Availability Zones with flexible
     * cache node placement, a request to add nodes does not automatically override a
     * previous pending operation to add nodes. The customer can modify the previous
     * pending operation to add more nodes or explicitly cancel the pending request and
     * retry the new request. To cancel pending operations to modify the number of
     * cache nodes in a cluster, use the <code>ModifyCacheCluster</code> request and
     * set <code>NumCacheNodes</code> equal to the number of cache nodes currently in
     * the cluster.</p> </note>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The number of cache nodes that the cluster should have. If the value for
     * <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * more nodes are added. If the value is less than the number of existing cache
     * nodes, nodes are removed. If the value is equal to the number of current cache
     * nodes, any pending add or remove requests are canceled.</p> <p>If you are
     * removing cache nodes, you must use the <code>CacheNodeIdsToRemove</code>
     * parameter to provide the IDs of the specific cache nodes to remove.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <note> <p>Adding or removing Memcached
     * cache nodes can be applied immediately or as a pending operation (see
     * <code>ApplyImmediately</code>).</p> <p>A pending operation to modify the number
     * of cache nodes in a cluster during its maintenance window, whether by adding or
     * removing nodes in accordance with the scale out architecture, is not queued. The
     * customer's latest request to add or remove nodes to the cluster overrides any
     * previous pending operations to modify the number of cache nodes in the cluster.
     * For example, a request to remove 2 nodes would override a previous pending
     * operation to remove 3 nodes. Similarly, a request to add 2 nodes would override
     * a previous pending operation to remove 3 nodes and vice versa. As Memcached
     * cache nodes may now be provisioned in different Availability Zones with flexible
     * cache node placement, a request to add nodes does not automatically override a
     * previous pending operation to add nodes. The customer can modify the previous
     * pending operation to add more nodes or explicitly cancel the pending request and
     * retry the new request. To cancel pending operations to modify the number of
     * cache nodes in a cluster, use the <code>ModifyCacheCluster</code> request and
     * set <code>NumCacheNodes</code> equal to the number of cache nodes currently in
     * the cluster.</p> </note>
     */
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }

    /**
     * <p>The number of cache nodes that the cluster should have. If the value for
     * <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * more nodes are added. If the value is less than the number of existing cache
     * nodes, nodes are removed. If the value is equal to the number of current cache
     * nodes, any pending add or remove requests are canceled.</p> <p>If you are
     * removing cache nodes, you must use the <code>CacheNodeIdsToRemove</code>
     * parameter to provide the IDs of the specific cache nodes to remove.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <note> <p>Adding or removing Memcached
     * cache nodes can be applied immediately or as a pending operation (see
     * <code>ApplyImmediately</code>).</p> <p>A pending operation to modify the number
     * of cache nodes in a cluster during its maintenance window, whether by adding or
     * removing nodes in accordance with the scale out architecture, is not queued. The
     * customer's latest request to add or remove nodes to the cluster overrides any
     * previous pending operations to modify the number of cache nodes in the cluster.
     * For example, a request to remove 2 nodes would override a previous pending
     * operation to remove 3 nodes. Similarly, a request to add 2 nodes would override
     * a previous pending operation to remove 3 nodes and vice versa. As Memcached
     * cache nodes may now be provisioned in different Availability Zones with flexible
     * cache node placement, a request to add nodes does not automatically override a
     * previous pending operation to add nodes. The customer can modify the previous
     * pending operation to add more nodes or explicitly cancel the pending request and
     * retry the new request. To cancel pending operations to modify the number of
     * cache nodes in a cluster, use the <code>ModifyCacheCluster</code> request and
     * set <code>NumCacheNodes</code> equal to the number of cache nodes currently in
     * the cluster.</p> </note>
     */
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The number of cache nodes that the cluster should have. If the value for
     * <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * more nodes are added. If the value is less than the number of existing cache
     * nodes, nodes are removed. If the value is equal to the number of current cache
     * nodes, any pending add or remove requests are canceled.</p> <p>If you are
     * removing cache nodes, you must use the <code>CacheNodeIdsToRemove</code>
     * parameter to provide the IDs of the specific cache nodes to remove.</p> <p>For
     * clusters running Redis, this value must be 1. For clusters running Memcached,
     * this value must be between 1 and 20.</p> <note> <p>Adding or removing Memcached
     * cache nodes can be applied immediately or as a pending operation (see
     * <code>ApplyImmediately</code>).</p> <p>A pending operation to modify the number
     * of cache nodes in a cluster during its maintenance window, whether by adding or
     * removing nodes in accordance with the scale out architecture, is not queued. The
     * customer's latest request to add or remove nodes to the cluster overrides any
     * previous pending operations to modify the number of cache nodes in the cluster.
     * For example, a request to remove 2 nodes would override a previous pending
     * operation to remove 3 nodes. Similarly, a request to add 2 nodes would override
     * a previous pending operation to remove 3 nodes and vice versa. As Memcached
     * cache nodes may now be provisioned in different Availability Zones with flexible
     * cache node placement, a request to add nodes does not automatically override a
     * previous pending operation to add nodes. The customer can modify the previous
     * pending operation to add more nodes or explicitly cancel the pending request and
     * retry the new request. To cancel pending operations to modify the number of
     * cache nodes in a cluster, use the <code>ModifyCacheCluster</code> request and
     * set <code>NumCacheNodes</code> equal to the number of cache nodes currently in
     * the cluster.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}


    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const{ return m_cacheNodeIdsToRemove; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline bool CacheNodeIdsToRemoveHasBeenSet() const { return m_cacheNodeIdsToRemoveHasBeenSet; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline void SetCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline void SetCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = std::move(value); }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToRemove(value); return *this;}

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const Aws::String& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(Aws::String&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <code>NumCacheNodes</code>
     * is less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <code>NumCacheNodes</code> in the request.</p> <p>For example: If
     * you have 3 active cache nodes, 7 pending cache nodes, and the number of cache
     * nodes in this <code>ModifyCacheCluster</code> call is 5, you must list 2 (7 - 5)
     * cache node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const char* value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }


    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline const AZMode& GetAZMode() const{ return m_aZMode; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline bool AZModeHasBeenSet() const { return m_aZModeHasBeenSet; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline void SetAZMode(const AZMode& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline void SetAZMode(AZMode&& value) { m_aZModeHasBeenSet = true; m_aZMode = std::move(value); }

    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithAZMode(const AZMode& value) { SetAZMode(value); return *this;}

    /**
     * <p>Specifies whether the new nodes in this Memcached cluster are all created in
     * a single Availability Zone or created across multiple Availability Zones.</p>
     * <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p> <p>This
     * option is only supported for Memcached clusters.</p> <note> <p>You cannot
     * specify <code>single-az</code> if the Memcached cluster already has cache nodes
     * in different Availability Zones. If <code>cross-az</code> is specified, existing
     * Memcached nodes remain in their current Availability Zone.</p> <p>Only newly
     * created nodes are located in different Availability Zones. For instructions on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithAZMode(AZMode&& value) { SetAZMode(std::move(value)); return *this;}


    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetNewAvailabilityZones() const{ return m_newAvailabilityZones; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline bool NewAvailabilityZonesHasBeenSet() const { return m_newAvailabilityZonesHasBeenSet; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline void SetNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = value; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline void SetNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = std::move(value); }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetNewAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetNewAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const Aws::String& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(Aws::String&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes are
     * created.</p> <p>This parameter is only valid when <code>NumCacheNodes</code> in
     * the request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios:</p> <ul> <li> <p> <b>Scenario 1:</b> You have 3 active nodes and
     * wish to add 2 nodes. Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</p> </li> <li> <p>
     * <b>Scenario 2:</b> You have 3 active nodes and 2 nodes pending creation (from
     * the scenario 1 call) and want to add 1 more node. Specify
     * <code>NumCacheNodes=6</code> ((3 + 2) + 1) and optionally specify an
     * Availability Zone for the new node.</p> </li> <li> <p> <b>Scenario 3:</b> You
     * want to cancel all pending operations. Specify <code>NumCacheNodes=3</code> to
     * cancel all pending operations.</p> </li> </ul> <p>The Availability Zone
     * placement of nodes pending creation cannot be modified. If you wish to cancel
     * any nodes pending creation, add 0 nodes by setting <code>NumCacheNodes</code> to
     * the number of current nodes.</p> <p>If <code>cross-az</code> is specified,
     * existing Memcached nodes remain in their current Availability Zone. Only newly
     * created nodes can be located in different Availability Zones. For guidance on
     * how to move existing Memcached nodes to different Availability Zones, see the
     * <b>Availability Zone Considerations</b> section of <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/mem-ug/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p> <b>Impact of new add/remove
     * requests upon pending requests</b> </p> <ul> <li> <p>Scenario-1</p> <ul> <li>
     * <p>Pending Action: Delete</p> </li> <li> <p>New Request: Delete</p> </li> <li>
     * <p>Result: The new delete, pending or immediate, replaces the pending
     * delete.</p> </li> </ul> </li> <li> <p>Scenario-2</p> <ul> <li> <p>Pending
     * Action: Delete</p> </li> <li> <p>New Request: Create</p> </li> <li> <p>Result:
     * The new create, pending or immediate, replaces the pending delete.</p> </li>
     * </ul> </li> <li> <p>Scenario-3</p> <ul> <li> <p>Pending Action: Create</p> </li>
     * <li> <p>New Request: Delete</p> </li> <li> <p>Result: The new delete, pending or
     * immediate, replaces the pending create.</p> </li> </ul> </li> <li>
     * <p>Scenario-4</p> <ul> <li> <p>Pending Action: Create</p> </li> <li> <p>New
     * Request: Create</p> </li> <li> <p>Result: The new create is added to the pending
     * create.</p> <important> <p> <b>Important:</b> If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately. If the
     * new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</p> </important> </li> </ul> </li> </ul>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const char* value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }


    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline bool CacheSecurityGroupNamesHasBeenSet() const { return m_cacheSecurityGroupNamesHasBeenSet; }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = std::move(value); }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(std::move(value)); return *this;}

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cache security group names to authorize on this cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>You can use this
     * parameter only with clusters that are created outside of an Amazon Virtual
     * Private Cloud (Amazon VPC).</p> <p>Constraints: Must contain no more than 255
     * alphanumeric characters. Must not be "Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }


    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cluster.</p> <p>This
     * parameter can be used only with clusters that are created in an Amazon Virtual
     * Private Cloud (Amazon VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


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
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

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
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

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
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

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
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

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
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

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
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

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
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * are sent.</p> <note> <p>The Amazon SNS topic owner must be same as the cluster
     * owner.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}


    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline bool CacheParameterGroupNameHasBeenSet() const { return m_cacheParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to this cluster. This change
     * is asynchronously applied as soon as possible for parameters when the
     * <code>ApplyImmediately</code> parameter is specified as <code>true</code> for
     * this request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}


    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <code>active</code>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code> </p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}


    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the cluster.</p> <p>If <code>false</code>, changes to the cluster are applied on
     * the next maintenance reboot, or the next failure reboot, whichever occurs
     * first.</p> <important> <p>If you perform a <code>ModifyCacheCluster</code>
     * before a pending modification is applied, the pending modification is replaced
     * by the newer modification.</p> </important> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the cluster.</p> <p>If <code>false</code>, changes to the cluster are applied on
     * the next maintenance reboot, or the next failure reboot, whichever occurs
     * first.</p> <important> <p>If you perform a <code>ModifyCacheCluster</code>
     * before a pending modification is applied, the pending modification is replaced
     * by the newer modification.</p> </important> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the cluster.</p> <p>If <code>false</code>, changes to the cluster are applied on
     * the next maintenance reboot, or the next failure reboot, whichever occurs
     * first.</p> <important> <p>If you perform a <code>ModifyCacheCluster</code>
     * before a pending modification is applied, the pending modification is replaced
     * by the newer modification.</p> </important> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <code>PreferredMaintenanceWindow</code> setting for
     * the cluster.</p> <p>If <code>false</code>, changes to the cluster are applied on
     * the next maintenance reboot, or the next failure reboot, whichever occurs
     * first.</p> <important> <p>If you perform a <code>ModifyCacheCluster</code>
     * before a pending modification is applied, the pending modification is replaced
     * by the newer modification.</p> </important> <p>Valid values: <code>true</code> |
     * <code>false</code> </p> <p>Default: <code>false</code> </p>
     */
    inline ModifyCacheClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p> <b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>This parameter is currently disabled.</p>
     */
    inline ModifyCacheClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <note> <p>If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> </note>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <note> <p>If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> </note>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <note> <p>If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> </note>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache retains automatic cluster snapshots
     * before deleting them. For example, if you set
     * <code>SnapshotRetentionLimit</code> to 5, a snapshot that was taken today is
     * retained for 5 days before being deleted.</p> <note> <p>If the value of
     * <code>SnapshotRetentionLimit</code> is set to zero (0), backups are turned
     * off.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache begins taking a daily
     * snapshot of your cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this cluster up to.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

  private:

    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;

    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet;

    Aws::Vector<Aws::String> m_cacheNodeIdsToRemove;
    bool m_cacheNodeIdsToRemoveHasBeenSet;

    AZMode m_aZMode;
    bool m_aZModeHasBeenSet;

    Aws::Vector<Aws::String> m_newAvailabilityZones;
    bool m_newAvailabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_cacheSecurityGroupNames;
    bool m_cacheSecurityGroupNamesHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;

    Aws::String m_cacheParameterGroupName;
    bool m_cacheParameterGroupNameHasBeenSet;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
