﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/RecurringCharge.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>PurchaseReservedCacheNodesOffering</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReservedCacheNode">AWS
   * API Reference</a></p>
   */
  class ReservedCacheNode
  {
  public:
    AWS_ELASTICACHE_API ReservedCacheNode();
    AWS_ELASTICACHE_API ReservedCacheNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReservedCacheNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedCacheNodeId() const{ return m_reservedCacheNodeId; }
    inline bool ReservedCacheNodeIdHasBeenSet() const { return m_reservedCacheNodeIdHasBeenSet; }
    inline void SetReservedCacheNodeId(const Aws::String& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = value; }
    inline void SetReservedCacheNodeId(Aws::String&& value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId = std::move(value); }
    inline void SetReservedCacheNodeId(const char* value) { m_reservedCacheNodeIdHasBeenSet = true; m_reservedCacheNodeId.assign(value); }
    inline ReservedCacheNode& WithReservedCacheNodeId(const Aws::String& value) { SetReservedCacheNodeId(value); return *this;}
    inline ReservedCacheNode& WithReservedCacheNodeId(Aws::String&& value) { SetReservedCacheNodeId(std::move(value)); return *this;}
    inline ReservedCacheNode& WithReservedCacheNodeId(const char* value) { SetReservedCacheNodeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedCacheNodesOfferingId() const{ return m_reservedCacheNodesOfferingId; }
    inline bool ReservedCacheNodesOfferingIdHasBeenSet() const { return m_reservedCacheNodesOfferingIdHasBeenSet; }
    inline void SetReservedCacheNodesOfferingId(const Aws::String& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = value; }
    inline void SetReservedCacheNodesOfferingId(Aws::String&& value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId = std::move(value); }
    inline void SetReservedCacheNodesOfferingId(const char* value) { m_reservedCacheNodesOfferingIdHasBeenSet = true; m_reservedCacheNodesOfferingId.assign(value); }
    inline ReservedCacheNode& WithReservedCacheNodesOfferingId(const Aws::String& value) { SetReservedCacheNodesOfferingId(value); return *this;}
    inline ReservedCacheNode& WithReservedCacheNodesOfferingId(Aws::String&& value) { SetReservedCacheNodesOfferingId(std::move(value)); return *this;}
    inline ReservedCacheNode& WithReservedCacheNodesOfferingId(const char* value) { SetReservedCacheNodesOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node type for the reserved cache nodes.</p> <p>The following node
     * types are supported by ElastiCache. Generally speaking, the current generation
     * types provide more memory and computational power at lower cost when compared to
     * their equivalent previous generation counterparts.</p> <ul> <li> <p>General
     * purpose:</p> <ul> <li> <p>Current generation: </p> <p> <b>M7g node types</b>:
     * <code>cache.m7g.large</code>, <code>cache.m7g.xlarge</code>,
     * <code>cache.m7g.2xlarge</code>, <code>cache.m7g.4xlarge</code>,
     * <code>cache.m7g.8xlarge</code>, <code>cache.m7g.12xlarge</code>,
     * <code>cache.m7g.16xlarge</code> </p>  <p>For region availability, see <a
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>M6g node types</b> (available only for Redis
     * engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
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
     * for Redis engine version 5.0.6 onward and Memcached engine version 1.5.16
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
     * href="https://docs.aws.amazon.com/AmazonElastiCache/latest/red-ug/CacheNodes.SupportedTypes.html#CacheNodes.SupportedTypesByRegion">Supported
     * Node Types</a> </p>  <p> <b>R6g node types</b> (available only for Redis
     * engine version 5.0.6 onward and for Memcached engine version 1.5.16 onward):
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
     * created in Amazon VPC by default.</p> </li> <li> <p>Redis append-only files
     * (AOF) are not supported for T1 or T2 instances.</p> </li> <li> <p>Redis Multi-AZ
     * with automatic failover is not supported on T1 instances.</p> </li> <li>
     * <p>Redis configuration variables <code>appendonly</code> and
     * <code>appendfsync</code> are not supported on Redis version 2.8.22 and
     * later.</p> </li> </ul>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline ReservedCacheNode& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline ReservedCacheNode& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline ReservedCacheNode& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReservedCacheNode& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReservedCacheNode& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedCacheNode& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed price charged for this reserved cache node.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedCacheNode& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price charged for this reserved cache node.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedCacheNode& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of cache nodes that have been reserved.</p>
     */
    inline int GetCacheNodeCount() const{ return m_cacheNodeCount; }
    inline bool CacheNodeCountHasBeenSet() const { return m_cacheNodeCountHasBeenSet; }
    inline void SetCacheNodeCount(int value) { m_cacheNodeCountHasBeenSet = true; m_cacheNodeCount = value; }
    inline ReservedCacheNode& WithCacheNodeCount(int value) { SetCacheNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the reserved cache node.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }
    inline ReservedCacheNode& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}
    inline ReservedCacheNode& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}
    inline ReservedCacheNode& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type of this reserved cache node.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }
    inline ReservedCacheNode& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}
    inline ReservedCacheNode& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}
    inline ReservedCacheNode& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reserved cache node.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ReservedCacheNode& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ReservedCacheNode& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ReservedCacheNode& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring price charged to run this reserved cache node.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedCacheNode& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedCacheNode& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedCacheNode& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedCacheNode& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the reserved cache node.</p> <p>Example:
     * <code>arn:aws:elasticache:us-east-1:123456789012:reserved-instance:ri-2017-03-27-08-33-25-582</code>
     * </p>
     */
    inline const Aws::String& GetReservationARN() const{ return m_reservationARN; }
    inline bool ReservationARNHasBeenSet() const { return m_reservationARNHasBeenSet; }
    inline void SetReservationARN(const Aws::String& value) { m_reservationARNHasBeenSet = true; m_reservationARN = value; }
    inline void SetReservationARN(Aws::String&& value) { m_reservationARNHasBeenSet = true; m_reservationARN = std::move(value); }
    inline void SetReservationARN(const char* value) { m_reservationARNHasBeenSet = true; m_reservationARN.assign(value); }
    inline ReservedCacheNode& WithReservationARN(const Aws::String& value) { SetReservationARN(value); return *this;}
    inline ReservedCacheNode& WithReservationARN(Aws::String&& value) { SetReservationARN(std::move(value)); return *this;}
    inline ReservedCacheNode& WithReservationARN(const char* value) { SetReservationARN(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedCacheNodeId;
    bool m_reservedCacheNodeIdHasBeenSet = false;

    Aws::String m_reservedCacheNodesOfferingId;
    bool m_reservedCacheNodesOfferingIdHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    int m_cacheNodeCount;
    bool m_cacheNodeCountHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Aws::String m_reservationARN;
    bool m_reservationARNHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
