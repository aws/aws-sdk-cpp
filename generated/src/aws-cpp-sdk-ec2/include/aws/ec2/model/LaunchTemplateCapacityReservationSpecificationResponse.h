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
   * <p>Information about the Capacity Reservation targeting option.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateCapacityReservationSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateCapacityReservationSpecificationResponse
  {
  public:
    AWS_EC2_API LaunchTemplateCapacityReservationSpecificationResponse() = default;
    AWS_EC2_API LaunchTemplateCapacityReservationSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateCapacityReservationSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates the instance's Capacity Reservation preferences. Possible
     * preferences include:</p> <ul> <li> <p> <code>open</code> - The instance can run
     * in any <code>open</code> Capacity Reservation that has matching attributes
     * (instance type, platform, Availability Zone).</p> </li> <li> <p>
     * <code>none</code> - The instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity.</p> </li> </ul>
     */
    inline CapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(CapacityReservationPreference value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline LaunchTemplateCapacityReservationSpecificationResponse& WithCapacityReservationPreference(CapacityReservationPreference value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the target Capacity Reservation or Capacity Reservation
     * group.</p>
     */
    inline const CapacityReservationTargetResponse& GetCapacityReservationTarget() const { return m_capacityReservationTarget; }
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }
    template<typename CapacityReservationTargetT = CapacityReservationTargetResponse>
    void SetCapacityReservationTarget(CapacityReservationTargetT&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::forward<CapacityReservationTargetT>(value); }
    template<typename CapacityReservationTargetT = CapacityReservationTargetResponse>
    LaunchTemplateCapacityReservationSpecificationResponse& WithCapacityReservationTarget(CapacityReservationTargetT&& value) { SetCapacityReservationTarget(std::forward<CapacityReservationTargetT>(value)); return *this;}
    ///@}
  private:

    CapacityReservationPreference m_capacityReservationPreference{CapacityReservationPreference::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    CapacityReservationTargetResponse m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
