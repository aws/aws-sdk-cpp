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
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeReservedCacheNodes</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeReservedCacheNodesMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API DescribeReservedCacheNodesRequest : public ElastiCacheRequest
  {
  public:
    DescribeReservedCacheNodesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedCacheNodes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline const Aws::String& GetReservedCacheNodeId() const{ return m_reservedCacheNodeId; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline bool ReservedCacheNodeIdHasBeenSet() const { return m_reservedCacheNodeIdHasBeenSet; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedCacheNodeId(const Aws::String& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>The reserved cache node identifier filter value. Use this parameter to show
     * only the reservation that matches the specified reservation ID.</p>
     */
    inline void SetReservedCacheNodeId(Aws::String&& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = std::move(value); }

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
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodeId(Aws::String&& value) { SetReservedCacheNodeId(std::move(value)); return *this;}

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
    inline bool ReservedCacheNodesOfferingIdHasBeenSet() const { return m_reservedCacheNodesOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedCacheNodesOfferingId(const Aws::String& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline void SetReservedCacheNodesOfferingId(Aws::String&& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = std::move(value); }

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
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodesOfferingId(Aws::String&& value) { SetReservedCacheNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithReservedCacheNodesOfferingId(const char* value) { SetReservedCacheNodesOfferingId(value); return *this;}


    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline DescribeReservedCacheNodesRequest& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline DescribeReservedCacheNodesRequest& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The cache node type filter value. Use this parameter to show only those
     * reservations matching the specified cache node type.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M5 node types:</b>
     * <code>cache.m5.large</code>, <code>cache.m5.xlarge</code>,
     * <code>cache.m5.2xlarge</code>, <code>cache.m5.4xlarge</code>,
     * <code>cache.m5.12xlarge</code>, <code>cache.m5.24xlarge</code> </p> <p> <b>M4
     * node types:</b> <code>cache.m4.large</code>, <code>cache.m4.xlarge</code>,
     * <code>cache.m4.2xlarge</code>, <code>cache.m4.4xlarge</code>,
     * <code>cache.m4.10xlarge</code> </p> <p> <b>T2 node types:</b>
     * <code>cache.t2.micro</code>, <code>cache.t2.small</code>,
     * <code>cache.t2.medium</code> </p> </li> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>T1 node types:</b> <code>cache.t1.micro</code> </p> <p>
     * <b>M1 node types:</b> <code>cache.m1.small</code>, <code>cache.m1.medium</code>,
     * <code>cache.m1.large</code>, <code>cache.m1.xlarge</code> </p> <p> <b>M3 node
     * types:</b> <code>cache.m3.medium</code>, <code>cache.m3.large</code>,
     * <code>cache.m3.xlarge</code>, <code>cache.m3.2xlarge</code> </p> </li> </ul>
     * </li> <li> <p>Compute optimized:</p> <ul> <li> <p>Previous generation: (not
     * recommended)</p> <p> <b>C1 node types:</b> <code>cache.c1.xlarge</code> </p>
     * </li> </ul> </li> <li> <p>Memory optimized:</p> <ul> <li> <p>Current generation:
     * </p> <p> <b>R5 node types:</b> <code>cache.r5.large</code>,
     * <code>cache.r5.xlarge</code>, <code>cache.r5.2xlarge</code>,
     * <code>cache.r5.4xlarge</code>, <code>cache.r5.12xlarge</code>,
     * <code>cache.r5.24xlarge</code> </p> <p> <b>R4 node types:</b>
     * <code>cache.r4.large</code>, <code>cache.r4.xlarge</code>,
     * <code>cache.r4.2xlarge</code>, <code>cache.r4.4xlarge</code>,
     * <code>cache.r4.8xlarge</code>, <code>cache.r4.16xlarge</code> </p> </li> <li>
     * <p>Previous generation: (not recommended)</p> <p> <b>M2 node types:</b>
     * <code>cache.m2.xlarge</code>, <code>cache.m2.2xlarge</code>,
     * <code>cache.m2.4xlarge</code> </p> <p> <b>R3 node types:</b>
     * <code>cache.r3.large</code>, <code>cache.r3.xlarge</code>,
     * <code>cache.r3.2xlarge</code>, <code>cache.r3.4xlarge</code>,
     * <code>cache.r3.8xlarge</code> </p> </li> </ul> </li> </ul> <p> <b>Additional
     * node type info</b> </p> <ul> <li> <p>All current generation instance types are
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
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
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

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
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }

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
    inline DescribeReservedCacheNodesRequest& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}

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
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description filter value. Use this parameter to show only those
     * reservations matching the specified product description.</p>
     */
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }

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
    inline DescribeReservedCacheNodesRequest& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}

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
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

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
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

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
    inline DescribeReservedCacheNodesRequest& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

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
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeReservedCacheNodesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
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

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
