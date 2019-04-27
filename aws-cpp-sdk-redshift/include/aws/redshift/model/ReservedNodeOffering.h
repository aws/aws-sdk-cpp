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
   * <p>Describes a reserved node offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeOffering">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ReservedNodeOffering
  {
  public:
    ReservedNodeOffering();
    ReservedNodeOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReservedNodeOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const{ return m_reservedNodeOfferingId; }

    /**
     * <p>The offering identifier.</p>
     */
    inline bool ReservedNodeOfferingIdHasBeenSet() const { return m_reservedNodeOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodeOfferingId(const Aws::String& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = value; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodeOfferingId(Aws::String&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = std::move(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodeOfferingId(const char* value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId.assign(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodeOffering& WithReservedNodeOfferingId(const Aws::String& value) { SetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodeOffering& WithReservedNodeOfferingId(Aws::String&& value) { SetReservedNodeOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodeOffering& WithReservedNodeOfferingId(const char* value) { SetReservedNodeOfferingId(value); return *this;}


    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline ReservedNodeOffering& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline ReservedNodeOffering& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline ReservedNodeOffering& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline ReservedNodeOffering& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline ReservedNodeOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }

    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }

    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }

    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline ReservedNodeOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}


    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline ReservedNodeOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline ReservedNodeOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}

    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline ReservedNodeOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}


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
    inline ReservedNodeOffering& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline ReservedNodeOffering& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline ReservedNodeOffering& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline ReservedNodeOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline ReservedNodeOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline ReservedNodeOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline ReservedNodeOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


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
    inline ReservedNodeOffering& WithReservedNodeOfferingType(const ReservedNodeOfferingType& value) { SetReservedNodeOfferingType(value); return *this;}

    /**
     * <p/>
     */
    inline ReservedNodeOffering& WithReservedNodeOfferingType(ReservedNodeOfferingType&& value) { SetReservedNodeOfferingType(std::move(value)); return *this;}

  private:

    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet;

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
