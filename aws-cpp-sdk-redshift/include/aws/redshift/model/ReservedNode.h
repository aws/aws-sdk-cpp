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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ReservedNodeOfferingType.h>
#include <aws/redshift/model/RecurringCharge.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a reserved node. You can call the
   * <a>DescribeReservedNodeOfferings</a> API to obtain the available reserved node
   * offerings. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNode">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ReservedNode
  {
  public:
    ReservedNode();
    ReservedNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedNode& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedNode& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline ReservedNode& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}


    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const{ return m_reservedNodeOfferingId; }

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline bool ReservedNodeOfferingIdHasBeenSet() const { return m_reservedNodeOfferingIdHasBeenSet; }

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline void SetReservedNodeOfferingId(const Aws::String& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = value; }

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline void SetReservedNodeOfferingId(Aws::String&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = std::move(value); }

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline void SetReservedNodeOfferingId(const char* value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId.assign(value); }

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline ReservedNode& WithReservedNodeOfferingId(const Aws::String& value) { SetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline ReservedNode& WithReservedNodeOfferingId(Aws::String&& value) { SetReservedNodeOfferingId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline ReservedNode& WithReservedNodeOfferingId(const char* value) { SetReservedNodeOfferingId(value); return *this;}


    /**
     * <p>The node type of the reserved node.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline ReservedNode& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline ReservedNode& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type of the reserved node.</p>
     */
    inline ReservedNode& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline ReservedNode& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline ReservedNode& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the node reservation in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the node reservation in seconds.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the node reservation in seconds.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the node reservation in seconds.</p>
     */
    inline ReservedNode& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The fixed cost Amazon Redshift charges you for this reserved node.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The fixed cost Amazon Redshift charges you for this reserved node.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The fixed cost Amazon Redshift charges you for this reserved node.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The fixed cost Amazon Redshift charges you for this reserved node.</p>
     */
    inline ReservedNode& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The hourly rate Amazon Redshift charges you for this reserved node.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The hourly rate Amazon Redshift charges you for this reserved node.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The hourly rate Amazon Redshift charges you for this reserved node.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The hourly rate Amazon Redshift charges you for this reserved node.</p>
     */
    inline ReservedNode& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline ReservedNode& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline ReservedNode& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline ReservedNode& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


    /**
     * <p>The number of reserved compute nodes.</p>
     */
    inline int GetNodeCount() const{ return m_nodeCount; }

    /**
     * <p>The number of reserved compute nodes.</p>
     */
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }

    /**
     * <p>The number of reserved compute nodes.</p>
     */
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }

    /**
     * <p>The number of reserved compute nodes.</p>
     */
    inline ReservedNode& WithNodeCount(int value) { SetNodeCount(value); return *this;}


    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline ReservedNode& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline ReservedNode& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline ReservedNode& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline ReservedNode& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline ReservedNode& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline ReservedNode& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline ReservedNode& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline ReservedNode& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline ReservedNode& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline ReservedNode& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const ReservedNodeOfferingType& GetReservedNodeOfferingType() const{ return m_reservedNodeOfferingType; }

    /**
     * <p/>
     */
    inline bool ReservedNodeOfferingTypeHasBeenSet() const { return m_reservedNodeOfferingTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetReservedNodeOfferingType(const ReservedNodeOfferingType& value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = value; }

    /**
     * <p/>
     */
    inline void SetReservedNodeOfferingType(ReservedNodeOfferingType&& value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = std::move(value); }

    /**
     * <p/>
     */
    inline ReservedNode& WithReservedNodeOfferingType(const ReservedNodeOfferingType& value) { SetReservedNodeOfferingType(value); return *this;}

    /**
     * <p/>
     */
    inline ReservedNode& WithReservedNodeOfferingType(ReservedNodeOfferingType&& value) { SetReservedNodeOfferingType(std::move(value)); return *this;}

  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet;

    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

    int m_nodeCount;
    bool m_nodeCountHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet;

    ReservedNodeOfferingType m_reservedNodeOfferingType;
    bool m_reservedNodeOfferingTypeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
