/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about a Capacity Reservation in a Capacity Reservation
   * Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetCapacityReservation">AWS
   * API Reference</a></p>
   */
  class FleetCapacityReservation
  {
  public:
    AWS_EC2_API FleetCapacityReservation() = default;
    AWS_EC2_API FleetCapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetCapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    FleetCapacityReservation& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    FleetCapacityReservation& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline FleetCapacityReservation& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservationInstancePlatform GetInstancePlatform() const { return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline FleetCapacityReservation& WithInstancePlatform(CapacityReservationInstancePlatform value) { SetInstancePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    FleetCapacityReservation& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline FleetCapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of capacity units fulfilled by the Capacity Reservation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline double GetFulfilledCapacity() const { return m_fulfilledCapacity; }
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }
    inline FleetCapacityReservation& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Capacity Reservation reserves capacity for
     * EBS-optimized instance types.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline FleetCapacityReservation& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    FleetCapacityReservation& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-weight">Instance
     * type weight</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline double GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }
    inline FleetCapacityReservation& WithWeight(double value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">Instance
     * type priority</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline FleetCapacityReservation& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform{CapacityReservationInstancePlatform::NOT_SET};
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    double m_fulfilledCapacity{0.0};
    bool m_fulfilledCapacityHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    double m_weight{0.0};
    bool m_weightHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
