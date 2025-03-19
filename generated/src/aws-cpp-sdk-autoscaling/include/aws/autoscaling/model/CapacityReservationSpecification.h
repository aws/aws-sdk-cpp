/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/CapacityReservationPreference.h>
#include <aws/autoscaling/model/CapacityReservationTarget.h>
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
   * <p> Describes the Capacity Reservation preference and targeting options. If you
   * specify <code>open</code> or <code>none</code> for
   * <code>CapacityReservationPreference</code>, do not specify a
   * <code>CapacityReservationTarget</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CapacityReservationSpecification">AWS
   * API Reference</a></p>
   */
  class CapacityReservationSpecification
  {
  public:
    AWS_AUTOSCALING_API CapacityReservationSpecification() = default;
    AWS_AUTOSCALING_API CapacityReservationSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API CapacityReservationSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The capacity reservation preference. The following options are available:
     * </p> <ul> <li> <p> <code>capacity-reservations-only</code> - Auto Scaling will
     * only launch instances into a Capacity Reservation or Capacity Reservation
     * resource group. If capacity isn't available, instances will fail to launch.</p>
     * </li> <li> <p> <code>capacity-reservations-first</code> - Auto Scaling will try
     * to launch instances into a Capacity Reservation or Capacity Reservation resource
     * group first. If capacity isn't available, instances will run in On-Demand
     * capacity.</p> </li> <li> <p> <code>none</code> - Auto Scaling will not launch
     * instances into a Capacity Reservation. Instances will run in On-Demand capacity.
     * </p> </li> <li> <p> <code>default</code> - Auto Scaling uses the Capacity
     * Reservation preference from your launch template or an open Capacity
     * Reservation.</p> </li> </ul>
     */
    inline CapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(CapacityReservationPreference value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline CapacityReservationSpecification& WithCapacityReservationPreference(CapacityReservationPreference value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes a target Capacity Reservation or Capacity Reservation resource
     * group. </p>
     */
    inline const CapacityReservationTarget& GetCapacityReservationTarget() const { return m_capacityReservationTarget; }
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }
    template<typename CapacityReservationTargetT = CapacityReservationTarget>
    void SetCapacityReservationTarget(CapacityReservationTargetT&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::forward<CapacityReservationTargetT>(value); }
    template<typename CapacityReservationTargetT = CapacityReservationTarget>
    CapacityReservationSpecification& WithCapacityReservationTarget(CapacityReservationTargetT&& value) { SetCapacityReservationTarget(std::forward<CapacityReservationTargetT>(value)); return *this;}
    ///@}
  private:

    CapacityReservationPreference m_capacityReservationPreference{CapacityReservationPreference::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    CapacityReservationTarget m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
