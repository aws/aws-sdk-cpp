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
   * <p>Represents the input of a <code>PurchaseReservedCacheNodesOffering</code>
   * operation.</p>
   */
  class AWS_ELASTICACHE_API PurchaseReservedCacheNodesOfferingRequest : public ElastiCacheRequest
  {
  public:
    PurchaseReservedCacheNodesOfferingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline const Aws::String& GetReservedCacheNodesOfferingId() const{ return m_reservedCacheNodesOfferingId; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(const Aws::String& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(Aws::String&& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline void SetReservedCacheNodesOfferingId(const char* value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId.assign(value); }

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(const Aws::String& value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(Aws::String&& value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved cache node offering to purchase.</p> <p>Example:
     * <code>438012d3-4052-4cc7-b2e3-8d3372e0e706</code> </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodesOfferingId(const char* value) { SetReservedCacheNodesOfferingId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline const Aws::String& GetReservedCacheNodeId() const{ return m_reservedCacheNodeId; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(const Aws::String& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(Aws::String&& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline void SetReservedCacheNodeId(const char* value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId.assign(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(const Aws::String& value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(Aws::String&& value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p> <note> <p>The
     * Reserved Cache Node ID is an unique customer-specified identifier to track this
     * reservation. If this parameter is not specified, ElastiCache automatically
     * generates an identifier for the reservation.</p> </note> <p>Example:
     * myreservationID</p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithReservedCacheNodeId(const char* value) { SetReservedCacheNodeId(value); return *this;}

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline int GetCacheNodeCount() const{ return m_cacheNodeCount; }

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline void SetCacheNodeCount(int value) { m_cacheNodeCountHasBeenSet = true; m_cacheNodeCount = value; }

    /**
     * <p>The number of cache node instances to reserve.</p> <p>Default: <code>1</code>
     * </p>
     */
    inline PurchaseReservedCacheNodesOfferingRequest& WithCacheNodeCount(int value) { SetCacheNodeCount(value); return *this;}

  private:
    Aws::String m_reservedCacheNodesOfferingId;
    bool m_reservedCacheNodesOfferingIdHasBeenSet;
    Aws::String m_reservedCacheNodeId;
    bool m_reservedCacheNodeIdHasBeenSet;
    int m_cacheNodeCount;
    bool m_cacheNodeCountHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
