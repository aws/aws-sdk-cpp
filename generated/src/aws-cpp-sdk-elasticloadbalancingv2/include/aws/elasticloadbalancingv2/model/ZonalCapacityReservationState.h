/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/CapacityReservationStatus.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>The capacity reservation status for each Availability Zone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ZonalCapacityReservationState">AWS
   * API Reference</a></p>
   */
  class ZonalCapacityReservationState
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState() = default;
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the capacity reservation.</p>
     */
    inline const CapacityReservationStatus& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = CapacityReservationStatus>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = CapacityReservationStatus>
    ZonalCapacityReservationState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ZonalCapacityReservationState& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of effective capacity units.</p>
     */
    inline double GetEffectiveCapacityUnits() const { return m_effectiveCapacityUnits; }
    inline bool EffectiveCapacityUnitsHasBeenSet() const { return m_effectiveCapacityUnitsHasBeenSet; }
    inline void SetEffectiveCapacityUnits(double value) { m_effectiveCapacityUnitsHasBeenSet = true; m_effectiveCapacityUnits = value; }
    inline ZonalCapacityReservationState& WithEffectiveCapacityUnits(double value) { SetEffectiveCapacityUnits(value); return *this;}
    ///@}
  private:

    CapacityReservationStatus m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    double m_effectiveCapacityUnits{0.0};
    bool m_effectiveCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
