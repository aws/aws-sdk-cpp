/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CapacityReservationPreference.h>
#include <aws/ec2/model/CapacityReservationTargetResponse.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the instance's Capacity Reservation targeting preferences. The
   * action returns the <code>capacityReservationPreference</code> response element
   * if the instance is configured to run in On-Demand capacity, or if it is
   * configured in run in any <code>open</code> Capacity Reservation that has
   * matching attributes (instance type, platform, Availability Zone). The action
   * returns the <code>capacityReservationTarget</code> response element if the
   * instance explicily targets a specific Capacity Reservation or Capacity
   * Reservation group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class CapacityReservationSpecificationResponse
  {
  public:
    AWS_EC2_API CapacityReservationSpecificationResponse();
    AWS_EC2_API CapacityReservationSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline const CapacityReservationPreference& GetCapacityReservationPreference() const{ return m_capacityReservationPreference; }

    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }

    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(const CapacityReservationPreference& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }

    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(CapacityReservationPreference&& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = std::move(value); }

    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline CapacityReservationSpecificationResponse& WithCapacityReservationPreference(const CapacityReservationPreference& value) { SetCapacityReservationPreference(value); return *this;}

    /**
     * <p>Describes the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline CapacityReservationSpecificationResponse& WithCapacityReservationPreference(CapacityReservationPreference&& value) { SetCapacityReservationPreference(std::move(value)); return *this;}


    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline const CapacityReservationTargetResponse& GetCapacityReservationTarget() const{ return m_capacityReservationTarget; }

    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }

    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline void SetCapacityReservationTarget(const CapacityReservationTargetResponse& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = value; }

    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline void SetCapacityReservationTarget(CapacityReservationTargetResponse&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::move(value); }

    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline CapacityReservationSpecificationResponse& WithCapacityReservationTarget(const CapacityReservationTargetResponse& value) { SetCapacityReservationTarget(value); return *this;}

    /**
     * <p>Information about the targeted Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline CapacityReservationSpecificationResponse& WithCapacityReservationTarget(CapacityReservationTargetResponse&& value) { SetCapacityReservationTarget(std::move(value)); return *this;}

  private:

    CapacityReservationPreference m_capacityReservationPreference;
    bool m_capacityReservationPreferenceHasBeenSet = false;

    CapacityReservationTargetResponse m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
