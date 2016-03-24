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
#include <aws/elasticache/model/AZMode.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>ModifyCacheCluster</i> action.</p>
   */
  class AWS_ELASTICACHE_API ModifyCacheClusterRequest : public ElastiCacheRequest
  {
  public:
    ModifyCacheClusterRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline const Aws::String& GetCacheClusterId() const{ return m_cacheClusterId; }

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(const Aws::String& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(Aws::String&& value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId = value; }

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline void SetCacheClusterId(const char* value) { m_cacheClusterIdHasBeenSet = true; m_cacheClusterId.assign(value); }

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(const Aws::String& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(Aws::String&& value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The cache cluster identifier. This value is stored as a lowercase string.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheClusterId(const char* value) { SetCacheClusterId(value); return *this;}

    /**
     * <p>The number of cache nodes that the cache cluster should have. If the value
     * for <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * then more nodes will be added. If the value is less than the number of existing
     * cache nodes, then nodes will be removed. If the value is equal to the number of
     * current cache nodes, then any pending add or remove requests are canceled.</p>
     * <p>If you are removing cache nodes, you must use the
     * <code>CacheNodeIdsToRemove</code> parameter to provide the IDs of the specific
     * cache nodes to remove.</p> <p>For clusters running Redis, this value must be 1.
     * For clusters running Memcached, this value must be between 1 and 20.</p>
     * <p><b>Note:</b><br/>Adding or removing Memcached cache nodes can be applied
     * immediately or as a pending action. See <code>ApplyImmediately</code>.<br/> A
     * pending action to modify the number of cache nodes in a cluster during its
     * maintenance window, whether by adding or removing nodes in accordance with the
     * scale out architecture, is not queued. The customer's latest request to add or
     * remove nodes to the cluster overrides any previous pending actions to modify the
     * number of cache nodes in the cluster. For example, a request to remove 2 nodes
     * would override a previous pending action to remove 3 nodes. Similarly, a request
     * to add 2 nodes would override a previous pending action to remove 3 nodes and
     * vice versa. As Memcached cache nodes may now be provisioned in different
     * Availability Zones with flexible cache node placement, a request to add nodes
     * does not automatically override a previous pending action to add nodes. The
     * customer can modify the previous pending action to add more nodes or explicitly
     * cancel the pending request and retry the new request. To cancel pending actions
     * to modify the number of cache nodes in a cluster, use the
     * <code>ModifyCacheCluster</code> request and set <i>NumCacheNodes</i> equal to
     * the number of cache nodes currently in the cache cluster.</p>
     */
    inline long GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The number of cache nodes that the cache cluster should have. If the value
     * for <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * then more nodes will be added. If the value is less than the number of existing
     * cache nodes, then nodes will be removed. If the value is equal to the number of
     * current cache nodes, then any pending add or remove requests are canceled.</p>
     * <p>If you are removing cache nodes, you must use the
     * <code>CacheNodeIdsToRemove</code> parameter to provide the IDs of the specific
     * cache nodes to remove.</p> <p>For clusters running Redis, this value must be 1.
     * For clusters running Memcached, this value must be between 1 and 20.</p>
     * <p><b>Note:</b><br/>Adding or removing Memcached cache nodes can be applied
     * immediately or as a pending action. See <code>ApplyImmediately</code>.<br/> A
     * pending action to modify the number of cache nodes in a cluster during its
     * maintenance window, whether by adding or removing nodes in accordance with the
     * scale out architecture, is not queued. The customer's latest request to add or
     * remove nodes to the cluster overrides any previous pending actions to modify the
     * number of cache nodes in the cluster. For example, a request to remove 2 nodes
     * would override a previous pending action to remove 3 nodes. Similarly, a request
     * to add 2 nodes would override a previous pending action to remove 3 nodes and
     * vice versa. As Memcached cache nodes may now be provisioned in different
     * Availability Zones with flexible cache node placement, a request to add nodes
     * does not automatically override a previous pending action to add nodes. The
     * customer can modify the previous pending action to add more nodes or explicitly
     * cancel the pending request and retry the new request. To cancel pending actions
     * to modify the number of cache nodes in a cluster, use the
     * <code>ModifyCacheCluster</code> request and set <i>NumCacheNodes</i> equal to
     * the number of cache nodes currently in the cache cluster.</p>
     */
    inline void SetNumCacheNodes(long value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The number of cache nodes that the cache cluster should have. If the value
     * for <code>NumCacheNodes</code> is greater than the sum of the number of current
     * cache nodes and the number of cache nodes pending creation (which may be zero),
     * then more nodes will be added. If the value is less than the number of existing
     * cache nodes, then nodes will be removed. If the value is equal to the number of
     * current cache nodes, then any pending add or remove requests are canceled.</p>
     * <p>If you are removing cache nodes, you must use the
     * <code>CacheNodeIdsToRemove</code> parameter to provide the IDs of the specific
     * cache nodes to remove.</p> <p>For clusters running Redis, this value must be 1.
     * For clusters running Memcached, this value must be between 1 and 20.</p>
     * <p><b>Note:</b><br/>Adding or removing Memcached cache nodes can be applied
     * immediately or as a pending action. See <code>ApplyImmediately</code>.<br/> A
     * pending action to modify the number of cache nodes in a cluster during its
     * maintenance window, whether by adding or removing nodes in accordance with the
     * scale out architecture, is not queued. The customer's latest request to add or
     * remove nodes to the cluster overrides any previous pending actions to modify the
     * number of cache nodes in the cluster. For example, a request to remove 2 nodes
     * would override a previous pending action to remove 3 nodes. Similarly, a request
     * to add 2 nodes would override a previous pending action to remove 3 nodes and
     * vice versa. As Memcached cache nodes may now be provisioned in different
     * Availability Zones with flexible cache node placement, a request to add nodes
     * does not automatically override a previous pending action to add nodes. The
     * customer can modify the previous pending action to add more nodes or explicitly
     * cancel the pending request and retry the new request. To cancel pending actions
     * to modify the number of cache nodes in a cluster, use the
     * <code>ModifyCacheCluster</code> request and set <i>NumCacheNodes</i> equal to
     * the number of cache nodes currently in the cache cluster.</p>
     */
    inline ModifyCacheClusterRequest& WithNumCacheNodes(long value) { SetNumCacheNodes(value); return *this;}

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const{ return m_cacheNodeIdsToRemove; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline void SetCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline void SetCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToRemove(value); return *this;}

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToRemove(value); return *this;}

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const Aws::String& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(Aws::String&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs to be removed. A node ID is a numeric identifier
     * (0001, 0002, etc.). This parameter is only valid when <i>NumCacheNodes</i> is
     * less than the existing number of cache nodes. The number of cache node IDs
     * supplied in this parameter must match the difference between the existing number
     * of cache nodes in the cluster or pending cache nodes, whichever is greater, and
     * the value of <i>NumCacheNodes</i> in the request.</p> <p>For example: If you
     * have 3 active cache nodes, 7 pending cache nodes, and the number of cache nodes
     * in this <code>ModifyCacheCluser</code> call is 5, you must list 2 (7 - 5) cache
     * node IDs to remove.</p>
     */
    inline ModifyCacheClusterRequest& AddCacheNodeIdsToRemove(const char* value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cache cluster are all
     * created in a single Availability Zone or created across multiple Availability
     * Zones.</p> <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p>
     * <p>This option is only supported for Memcached cache clusters.</p> <note><p>You
     * cannot specify <code>single-az</code> if the Memcached cache cluster already has
     * cache nodes in different Availability Zones. If <code>cross-az</code> is
     * specified, existing Memcached nodes remain in their current Availability
     * Zone.</p> <p>Only newly created nodes will be located in different Availability
     * Zones. For instructions on how to move existing Memcached nodes to different
     * Availability Zones, see the <b>Availability Zone Considerations</b> section of
     * <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline const AZMode& GetAZMode() const{ return m_aZMode; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cache cluster are all
     * created in a single Availability Zone or created across multiple Availability
     * Zones.</p> <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p>
     * <p>This option is only supported for Memcached cache clusters.</p> <note><p>You
     * cannot specify <code>single-az</code> if the Memcached cache cluster already has
     * cache nodes in different Availability Zones. If <code>cross-az</code> is
     * specified, existing Memcached nodes remain in their current Availability
     * Zone.</p> <p>Only newly created nodes will be located in different Availability
     * Zones. For instructions on how to move existing Memcached nodes to different
     * Availability Zones, see the <b>Availability Zone Considerations</b> section of
     * <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline void SetAZMode(const AZMode& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cache cluster are all
     * created in a single Availability Zone or created across multiple Availability
     * Zones.</p> <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p>
     * <p>This option is only supported for Memcached cache clusters.</p> <note><p>You
     * cannot specify <code>single-az</code> if the Memcached cache cluster already has
     * cache nodes in different Availability Zones. If <code>cross-az</code> is
     * specified, existing Memcached nodes remain in their current Availability
     * Zone.</p> <p>Only newly created nodes will be located in different Availability
     * Zones. For instructions on how to move existing Memcached nodes to different
     * Availability Zones, see the <b>Availability Zone Considerations</b> section of
     * <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline void SetAZMode(AZMode&& value) { m_aZModeHasBeenSet = true; m_aZMode = value; }

    /**
     * <p>Specifies whether the new nodes in this Memcached cache cluster are all
     * created in a single Availability Zone or created across multiple Availability
     * Zones.</p> <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p>
     * <p>This option is only supported for Memcached cache clusters.</p> <note><p>You
     * cannot specify <code>single-az</code> if the Memcached cache cluster already has
     * cache nodes in different Availability Zones. If <code>cross-az</code> is
     * specified, existing Memcached nodes remain in their current Availability
     * Zone.</p> <p>Only newly created nodes will be located in different Availability
     * Zones. For instructions on how to move existing Memcached nodes to different
     * Availability Zones, see the <b>Availability Zone Considerations</b> section of
     * <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithAZMode(const AZMode& value) { SetAZMode(value); return *this;}

    /**
     * <p>Specifies whether the new nodes in this Memcached cache cluster are all
     * created in a single Availability Zone or created across multiple Availability
     * Zones.</p> <p>Valid values: <code>single-az</code> | <code>cross-az</code>.</p>
     * <p>This option is only supported for Memcached cache clusters.</p> <note><p>You
     * cannot specify <code>single-az</code> if the Memcached cache cluster already has
     * cache nodes in different Availability Zones. If <code>cross-az</code> is
     * specified, existing Memcached nodes remain in their current Availability
     * Zone.</p> <p>Only newly created nodes will be located in different Availability
     * Zones. For instructions on how to move existing Memcached nodes to different
     * Availability Zones, see the <b>Availability Zone Considerations</b> section of
     * <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> </note>
     */
    inline ModifyCacheClusterRequest& WithAZMode(AZMode&& value) { SetAZMode(value); return *this;}

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline const Aws::Vector<Aws::String>& GetNewAvailabilityZones() const{ return m_newAvailabilityZones; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline void SetNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = value; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline void SetNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones = value; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetNewAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline ModifyCacheClusterRequest& WithNewAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetNewAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const Aws::String& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(Aws::String&& value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones where the new Memcached cache nodes will be
     * created.</p> <p>This parameter is only valid when <i>NumCacheNodes</i> in the
     * request is greater than the sum of the number of active cache nodes and the
     * number of cache nodes pending creation (which may be zero). The number of
     * Availability Zones supplied in this list must match the cache nodes being added
     * in this request.</p> <p>This option is only supported on Memcached clusters.</p>
     * <p>Scenarios: <ul> <li><b>Scenario 1:</b> You have 3 active nodes and wish to
     * add 2 nodes.<br/> Specify <code>NumCacheNodes=5</code> (3 + 2) and optionally
     * specify two Availability Zones for the two new nodes.</li> <li><b>Scenario
     * 2:</b> You have 3 active nodes and 2 nodes pending creation (from the scenario 1
     * call) and want to add 1 more node.<br/> Specify <code>NumCacheNodes=6</code> ((3
     * + 2) + 1)</li> and optionally specify an Availability Zone for the new node.
     * <li><b>Scenario 3:</b> You want to cancel all pending actions.<br/> Specify
     * <code>NumCacheNodes=3</code> to cancel all pending actions.</li> </ul> </p>
     * <p>The Availability Zone placement of nodes pending creation cannot be modified.
     * If you wish to cancel any nodes pending creation, add 0 nodes by setting
     * <code>NumCacheNodes</code> to the number of current nodes.</p> <p>If
     * <code>cross-az</code> is specified, existing Memcached nodes remain in their
     * current Availability Zone. Only newly created nodes can be located in different
     * Availability Zones. For guidance on how to move existing Memcached nodes to
     * different Availability Zones, see the <b>Availability Zone Considerations</b>
     * section of <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheNode.Memcached.html">Cache
     * Node Considerations for Memcached</a>.</p> <p><b>Impact of new add/remove
     * requests upon pending requests</b></p> <ul> <li>Scenario-1 <ul> <li>Pending
     * Action: Delete</li> <li>New Request: Delete</li> <li>Result: The new delete,
     * pending or immediate, replaces the pending delete.</li> </ul></li>
     * <li>Scenario-2 <ul> <li>Pending Action: Delete</li> <li>New Request: Create</li>
     * <li>Result: The new create, pending or immediate, replaces the pending
     * delete.</li> </ul></li> <li>Scenario-3 <ul> <li>Pending Action: Create</li>
     * <li>New Request: Delete</li> <li>Result: The new delete, pending or immediate,
     * replaces the pending create.</li> </ul></li> <li>Scenario-4 <ul> <li>Pending
     * Action: Create</li> <li>New Request: Create</li> <li>Result: The new create is
     * added to the pending create. <b>Important:</b><br/>If the new create request is
     * <b>Apply Immediately - Yes</b>, all creates are performed immediately.<br/> If
     * the new create request is <b>Apply Immediately - No</b>, all creates are
     * pending.</li> </ul></li> </ul> <p>Example:
     * <code><![CDATA[NewAvailabilityZones.member.1=us-west-2a&amp;NewAvailabilityZones.member.2=us-west-2b&amp;NewAvailabilityZones.member.3=us-west-2c]]></code></p>
     */
    inline ModifyCacheClusterRequest& AddNewAvailabilityZones(const char* value) { m_newAvailabilityZonesHasBeenSet = true; m_newAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheSecurityGroupNames() const{ return m_cacheSecurityGroupNames; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline void SetCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline void SetCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames = value; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(const Aws::Vector<Aws::String>& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyCacheClusterRequest& WithCacheSecurityGroupNames(Aws::Vector<Aws::String>&& value) { SetCacheSecurityGroupNames(value); return *this;}

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const Aws::String& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(Aws::String&& value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>A list of cache security group names to authorize on this cache cluster. This
     * change is asynchronously applied as soon as possible.</p> <p>This parameter can
     * be used only with clusters that are created outside of an Amazon Virtual Private
     * Cloud (VPC).</p> <p>Constraints: Must contain no more than 255 alphanumeric
     * characters. Must not be &quot;Default".</p>
     */
    inline ModifyCacheClusterRequest& AddCacheSecurityGroupNames(const char* value) { m_cacheSecurityGroupNamesHasBeenSet = true; m_cacheSecurityGroupNames.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline ModifyCacheClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the VPC Security Groups associated with the cache cluster.</p>
     * <p>This parameter can be used only with clusters that are created in an Amazon
     * Virtual Private Cloud (VPC).</p>
     */
    inline ModifyCacheClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cache cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li><code>sun</code></li>
     * <li><code>mon</code></li> <li><code>tue</code></li> <li><code>wed</code></li>
     * <li><code>thu</code></li> <li><code>fri</code></li> <li><code>sat</code></li>
     * </ul> <p>Example: <code>sun:05:00-sun:09:00</code></p>
     */
    inline ModifyCacheClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note>The Amazon SNS topic owner must be same as the cache
     * cluster owner. </note>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline const Aws::String& GetCacheParameterGroupName() const{ return m_cacheParameterGroupName; }

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline void SetCacheParameterGroupName(const Aws::String& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline void SetCacheParameterGroupName(Aws::String&& value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName = value; }

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline void SetCacheParameterGroupName(const char* value) { m_cacheParameterGroupNameHasBeenSet = true; m_cacheParameterGroupName.assign(value); }

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const Aws::String& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(Aws::String&& value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cache parameter group to apply to this cache cluster. This
     * change is asynchronously applied as soon as possible for parameters when the
     * <i>ApplyImmediately</i> parameter is specified as <i>true</i> for this
     * request.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheParameterGroupName(const char* value) { SetCacheParameterGroupName(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The status of the Amazon SNS notification topic. Notifications are sent only
     * if the status is <i>active</i>.</p> <p>Valid values: <code>active</code> |
     * <code>inactive</code></p>
     */
    inline ModifyCacheClusterRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * cache cluster.</p> <p>If <code>false</code>, then changes to the cache cluster
     * are applied on the next maintenance reboot, or the next failure reboot,
     * whichever occurs first.</p> <important>If you perform a
     * <code>ModifyCacheCluster</code> before a pending modification is applied, the
     * pending modification is replaced by the newer modification.</important> <p>Valid
     * values: <code>true</code> | <code>false</code></p> <p>Default:
     * <code>false</code></p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * cache cluster.</p> <p>If <code>false</code>, then changes to the cache cluster
     * are applied on the next maintenance reboot, or the next failure reboot,
     * whichever occurs first.</p> <important>If you perform a
     * <code>ModifyCacheCluster</code> before a pending modification is applied, the
     * pending modification is replaced by the newer modification.</important> <p>Valid
     * values: <code>true</code> | <code>false</code></p> <p>Default:
     * <code>false</code></p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>If <code>true</code>, this parameter causes the modifications in this request
     * and any pending modifications to be applied, asynchronously and as soon as
     * possible, regardless of the <i>PreferredMaintenanceWindow</i> setting for the
     * cache cluster.</p> <p>If <code>false</code>, then changes to the cache cluster
     * are applied on the next maintenance reboot, or the next failure reboot,
     * whichever occurs first.</p> <important>If you perform a
     * <code>ModifyCacheCluster</code> before a pending modification is applied, the
     * pending modification is replaced by the newer modification.</important> <p>Valid
     * values: <code>true</code> | <code>false</code></p> <p>Default:
     * <code>false</code></p>
     */
    inline ModifyCacheClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The upgraded version of the cache engine to be run on the cache nodes.</p>
     * <p><b>Important:</b> You can upgrade to a newer engine version (see <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/SelectEngine.html#VersionManagement">Selecting
     * a Cache Engine and Version</a>), but you cannot downgrade to an earlier engine
     * version. If you want to use an earlier engine version, you must delete the
     * existing cache cluster and create it anew with the earlier engine version. </p>
     */
    inline ModifyCacheClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

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
    inline ModifyCacheClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>The number of days for which ElastiCache will retain automatic cache cluster
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline long GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which ElastiCache will retain automatic cache cluster
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline void SetSnapshotRetentionLimit(long value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which ElastiCache will retain automatic cache cluster
     * snapshots before deleting them. For example, if you set
     * <i>SnapshotRetentionLimit</i> to 5, then a snapshot that was taken today will be
     * retained for 5 days before being deleted.</p> <p><b>Important</b><br/>If the
     * value of SnapshotRetentionLimit is set to zero (0), backups are turned off.</p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotRetentionLimit(long value) { SetSnapshotRetentionLimit(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which ElastiCache will begin taking a
     * daily snapshot of your cache cluster. </p>
     */
    inline ModifyCacheClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>A valid cache node type that you want to scale this cache cluster to. The
     * value of this parameter must be one of the <i>ScaleUpModifications</i> values
     * returned by the <code>ListAllowedCacheNodeTypeModification</code> action.</p>
     */
    inline ModifyCacheClusterRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

  private:
    Aws::String m_cacheClusterId;
    bool m_cacheClusterIdHasBeenSet;
    long m_numCacheNodes;
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
    long m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet;
    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet;
    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
