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
    AWS_AUTOSCALING_API CapacityReservationTarget() = default;
    AWS_AUTOSCALING_API CapacityReservationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API CapacityReservationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The Capacity Reservation IDs to launch instances into. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const { return m_capacityReservationIds; }
    inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    void SetCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds = std::forward<CapacityReservationIdsT>(value); }
    template<typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
    CapacityReservationTarget& WithCapacityReservationIds(CapacityReservationIdsT&& value) { SetCapacityReservationIds(std::forward<CapacityReservationIdsT>(value)); return *this;}
    template<typename CapacityReservationIdsT = Aws::String>
    CapacityReservationTarget& AddCapacityReservationIds(CapacityReservationIdsT&& value) { m_capacityReservationIdsHasBeenSet = true; m_capacityReservationIds.emplace_back(std::forward<CapacityReservationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The resource group ARNs of the Capacity Reservation to launch instances
     * into. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationResourceGroupArns() const { return m_capacityReservationResourceGroupArns; }
    inline bool CapacityReservationResourceGroupArnsHasBeenSet() const { return m_capacityReservationResourceGroupArnsHasBeenSet; }
    template<typename CapacityReservationResourceGroupArnsT = Aws::Vector<Aws::String>>
    void SetCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns = std::forward<CapacityReservationResourceGroupArnsT>(value); }
    template<typename CapacityReservationResourceGroupArnsT = Aws::Vector<Aws::String>>
    CapacityReservationTarget& WithCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) { SetCapacityReservationResourceGroupArns(std::forward<CapacityReservationResourceGroupArnsT>(value)); return *this;}
    template<typename CapacityReservationResourceGroupArnsT = Aws::String>
    CapacityReservationTarget& AddCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) { m_capacityReservationResourceGroupArnsHasBeenSet = true; m_capacityReservationResourceGroupArns.emplace_back(std::forward<CapacityReservationResourceGroupArnsT>(value)); return *this; }
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
