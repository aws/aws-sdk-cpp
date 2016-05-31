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
   * <p>Represents the input of a <i>DescribeReservedCacheNodes</i> action.</p>
   */
  class AWS_ELASTICACHE_API DescribeReservedCacheNodesRequest : public ElastiCacheRequest
  {
  public:
    DescribeReservedCacheNodesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline const Aws::String& GetReservedCacheNodeId() const{ return m_reservedCacheNodeId; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedCacheNodeId(const Aws::String& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedCacheNodeId(Aws::String&& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedCacheNodeId(const char* value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId.assign(value); }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodeId(const Aws::String& value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodeId(Aws::String&& value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodeId(const char* value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline const Aws::String& GetReservedCacheNodesOfferingId() const{ return m_reservedCacheNodesOfferingId; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedCacheNodesOfferingId(const Aws::String& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedCacheNodesOfferingId(Aws::String&& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedCacheNodesOfferingId(const char* value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId.assign(value); }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodesOfferingId(const Aws::String& value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodesOfferingId(Aws::String&& value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodesOfferingId(const char* value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>Valid node types are
     * as follows:</p> <ul> <li> <p>General purpose:</p> <ul> <li> <p>Current
     * generation: <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code>, <code>cache.m3.medium</code>,
     * <code>cache.m3.large</code>, <code>cache.m3.xlarge</code>,
     * <code>cache.m3.2xlarge</code> </p> </li> <li> <p>Previous generation:
     * <code>cache.t1.micro</code>, <code>cache.m1.small</code>,
     * <code>cache.m1.medium</code>, <code>cache.m1.large</code>,
     * <code>cache.m1.xlarge</code> </p> </li> </ul> </li> <li> <p>Compute optimized:
     * <code>cache.c1.xlarge</code> </p> </li> <li> <p>Memory optimized:</p> <ul> <li>
     * <p>Current generation: <code>cache.r3.large</code>,
     * <code>cache.r3.xlarge</code>, <code>cache.r3.2xlarge</code>,
     * <code>cache.r3.4xlarge</code>, <code>cache.r3.8xlarge</code> </p> </li> <li>
     * <p>Previous generation: <code>cache.m2.xlarge</code>,
     * <code>cache.m2.2xlarge</code>, <code>cache.m2.4xlarge</code> </p> </li> </ul>
     * </li> </ul> <p> <b>Notes:</b> </p> <ul> <li> <p>All t2 instances are created in
     * an Amazon Virtual Private Cloud (VPC).</p> </li> <li> <p>Redis backup/restore is
     * not supported for t2 instances.</p> </li> <li> <p>Redis Append-only files (AOF)
     * functionality is not supported for t1 or t2 instances.</p> </li> </ul> <p>For a
     * complete listing of cache node types and specifications, see <a
     * href="http://aws.amazon.com/elasticache/details">Amazon ElastiCache Product
     * Features and Details</a> and <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Memcached.html#CacheParameterGroups.Memcached.NodeSpecific">Cache
     * Node Type-Specific Parameters for Memcached</a> or <a
     * href="http://docs.aws.amazon.com/AmazonElastiCache/latest/UserGuide/CacheParameterGroups.Redis.html#CacheParameterGroups.Redis.NodeSpecific">Cache
     * Node Type-Specific Parameters for Redis</a>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithDuration(Aws::String&& value) { SetDuration(value); return *this;}

    /**
     * <p>The duration filter value, specified in years or seconds. Use this parameter
     * to show only reservations for this duration.</p> <p>Valid Values: <code>1 | 3 |
     * 31536000 | 94608000</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithDuration(const char* value) { SetDuration(value); return *this;}

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithProductDescription(Aws::String&& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithOfferingType(Aws::String&& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type filter value. Use this parameter to show only the available
     * offerings matching the specified offering type.</p> <p>Valid values:
     * <code>"Light Utilization"|"Medium Utilization"|"Heavy Utilization"</code> </p>
     */
    inline DescribeReservedCacheNodesRequest& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <i>MaxRecords</i>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_reservedCacheNodeId;
    bool m_reservedCacheNodeIdHasBeenSet;
    Aws::String m_reservedCacheNodesOfferingId;
    bool m_reservedCacheNodesOfferingIdHasBeenSet;
    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet;
    Aws::String m_duration;
    bool m_durationHasBeenSet;
    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet;
    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
