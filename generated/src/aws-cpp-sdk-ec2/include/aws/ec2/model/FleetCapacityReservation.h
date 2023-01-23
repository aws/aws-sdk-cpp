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
    AWS_EC2_API FleetCapacityReservation();
    AWS_EC2_API FleetCapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetCapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline FleetCapacityReservation& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline FleetCapacityReservation& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline FleetCapacityReservation& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline FleetCapacityReservation& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for which the Capacity Reservation reserves capacity.</p>
     */
    inline FleetCapacityReservation& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}

    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }

    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline FleetCapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}


    /**
     * <p>The number of capacity units fulfilled by the Capacity Reservation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline double GetFulfilledCapacity() const{ return m_fulfilledCapacity; }

    /**
     * <p>The number of capacity units fulfilled by the Capacity Reservation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }

    /**
     * <p>The number of capacity units fulfilled by the Capacity Reservation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }

    /**
     * <p>The number of capacity units fulfilled by the Capacity Reservation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline FleetCapacityReservation& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}


    /**
     * <p>Indicates whether the Capacity Reservation reserves capacity for
     * EBS-optimized instance types.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the Capacity Reservation reserves capacity for
     * EBS-optimized instance types.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Indicates whether the Capacity Reservation reserves capacity for
     * EBS-optimized instance types.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the Capacity Reservation reserves capacity for
     * EBS-optimized instance types.</p>
     */
    inline FleetCapacityReservation& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline FleetCapacityReservation& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline FleetCapacityReservation& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The weight of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-weight">
     * Instance type weight</a> in the Amazon EC2 User Guide.</p>
     */
    inline double GetWeight() const{ return m_weight; }

    /**
     * <p>The weight of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-weight">
     * Instance type weight</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The weight of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-weight">
     * Instance type weight</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The weight of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-weight">
     * Instance type weight</a> in the Amazon EC2 User Guide.</p>
     */
    inline FleetCapacityReservation& WithWeight(double value) { SetWeight(value); return *this;}


    /**
     * <p>The priority of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">
     * Instance type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">
     * Instance type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">
     * Instance type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the instance type in the Capacity Reservation Fleet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">
     * Instance type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline FleetCapacityReservation& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet = false;

    double m_fulfilledCapacity;
    bool m_fulfilledCapacityHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    double m_weight;
    bool m_weightHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
