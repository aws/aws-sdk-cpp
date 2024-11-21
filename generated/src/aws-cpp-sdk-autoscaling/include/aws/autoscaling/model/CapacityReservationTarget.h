/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p> The target for the Capacity Reservation. Specify Capacity Reservations IDs
   * or Capacity Reservation resource group ARNs. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CapacityReservationTarget">AWS
   * API Reference</a></p>
   */
  class CapacityReservationTarget
  {
  public:
    AWS_AUTOSCALING_API CapacityReservationTarget();
    AWS_AUTOSCALING_API CapacityReservationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API CapacityReservationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The Capacity Reservation IDs to launch instances into. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const{ return m_capacityReservationIds; }
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
    inline void SetCapacityReservationIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = value; }
    inline void SetCapacityReservationIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::move(value); }
    inline CapacityReservationTarget& WithCapacityReservationIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationIds(value); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationIds(std::move(value)); return *this;}
    inline CapacityReservationTarget& AddCapacityReservationIds(const Aws::String& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }
    inline CapacityReservationTarget& AddCapacityReservationIds(Aws::String&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(std::move(value)); return *this; }
    inline CapacityReservationTarget& AddCapacityReservationIds(const char* value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The resource group ARNs of the Capacity Reservation to launch instances
     * into. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationResourceGroupArns() const{ return m_capacityReservationResourceGroupArns; }
    inline bool CapacityReservationResourceGroupArnsHasBeenSet() const { return m_capacityReservationResourceGroupArnsHasBeenSet; }
    inline void SetCapacityReservationResourceGroupArns(const Aws::Vector<Aws::String>& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns = value; }
    inline void SetCapacityReservationResourceGroupArns(Aws::Vector<Aws::String>&& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns = std::move(value); }
    inline CapacityReservationTarget& WithCapacityReservationResourceGroupArns(const Aws::Vector<Aws::String>& value) { SetCapacityReservationResourceGroupArns(value); return *this;}
    inline CapacityReservationTarget& WithCapacityReservationResourceGroupArns(Aws::Vector<Aws::String>&& value) { SetCapacityReservationResourceGroupArns(std::move(value)); return *this;}
    inline CapacityReservationTarget& AddCapacityReservationResourceGroupArns(const Aws::String& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns.push_back(value); return *this; }
    inline CapacityReservationTarget& AddCapacityReservationResourceGroupArns(Aws::String&& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns.push_back(std::move(value)); return *this; }
    inline CapacityReservationTarget& AddCapacityReservationResourceGroupArns(const char* value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_capacityReservationIds;
    bool m_capacityReservationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityReservationResourceGroupArns;
    bool m_capacityReservationResourceGroupArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
