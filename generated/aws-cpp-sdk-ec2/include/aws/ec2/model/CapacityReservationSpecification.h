﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CapacityReservationPreference.h>
#include <aws/ec2/model/CapacityReservationTarget.h>
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
   * <p>Describes an instance's Capacity Reservation targeting option. You can
   * specify only one parameter at a time. If you specify
   * <code>CapacityReservationPreference</code> and
   * <code>CapacityReservationTarget</code>, the request fails.</p> <p>Use the
   * <code>CapacityReservationPreference</code> parameter to configure the instance
   * to run as an On-Demand Instance or to run in any <code>open</code> Capacity
   * Reservation that has matching attributes (instance type, platform, Availability
   * Zone). Use the <code>CapacityReservationTarget</code> parameter to explicitly
   * target a specific Capacity Reservation or a Capacity Reservation
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CapacityReservationSpecification
  {
  public:
    CapacityReservationSpecification();
    CapacityReservationSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    CapacityReservationSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline const CapacityReservationPreference& GetCapacityReservationPreference() const{ return m_capacityReservationPreference; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(const CapacityReservationPreference& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline void SetCapacityReservationPreference(CapacityReservationPreference&& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = std::move(value); }

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline CapacityReservationSpecification& WithCapacityReservationPreference(const CapacityReservationPreference& value) { SetCapacityReservationPreference(value); return *this;}

    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs as an On-Demand Instance.</p> </li> </ul>
     */
    inline CapacityReservationSpecification& WithCapacityReservationPreference(CapacityReservationPreference&& value) { SetCapacityReservationPreference(std::move(value)); return *this;}


    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline const CapacityReservationTarget& GetCapacityReservationTarget() const{ return m_capacityReservationTarget; }

    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }

    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline void SetCapacityReservationTarget(const CapacityReservationTarget& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = value; }

    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline void SetCapacityReservationTarget(CapacityReservationTarget&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::move(value); }

    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline CapacityReservationSpecification& WithCapacityReservationTarget(const CapacityReservationTarget& value) { SetCapacityReservationTarget(value); return *this;}

    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline CapacityReservationSpecification& WithCapacityReservationTarget(CapacityReservationTarget&& value) { SetCapacityReservationTarget(std::move(value)); return *this;}

  private:

    CapacityReservationPreference m_capacityReservationPreference;
    bool m_capacityReservationPreferenceHasBeenSet;

    CapacityReservationTarget m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
