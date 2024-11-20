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
   * <p>The capacity reservation status for each availability zone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/ZonalCapacityReservationState">AWS
   * API Reference</a></p>
   */
  class ZonalCapacityReservationState
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState();
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API ZonalCapacityReservationState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the capacity reservation.</p>
     */
    inline const CapacityReservationStatus& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CapacityReservationStatus& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CapacityReservationStatus&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ZonalCapacityReservationState& WithState(const CapacityReservationStatus& value) { SetState(value); return *this;}
    inline ZonalCapacityReservationState& WithState(CapacityReservationStatus&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the availability zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ZonalCapacityReservationState& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ZonalCapacityReservationState& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ZonalCapacityReservationState& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of effective capacity units.</p>
     */
    inline double GetEffectiveCapacityUnits() const{ return m_effectiveCapacityUnits; }
    inline bool EffectiveCapacityUnitsHasBeenSet() const { return m_effectiveCapacityUnitsHasBeenSet; }
    inline void SetEffectiveCapacityUnits(double value) { m_effectiveCapacityUnitsHasBeenSet = true; m_effectiveCapacityUnits = value; }
    inline ZonalCapacityReservationState& WithEffectiveCapacityUnits(double value) { SetEffectiveCapacityUnits(value); return *this;}
    ///@}
  private:

    CapacityReservationStatus m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    double m_effectiveCapacityUnits;
    bool m_effectiveCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
