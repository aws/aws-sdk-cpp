/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about an instance type to use in a Capacity Reservation
   * Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservationFleetInstanceSpecification">AWS
   * API Reference</a></p>
   */
  class ReservationFleetInstanceSpecification
  {
  public:
    AWS_EC2_API ReservationFleetInstanceSpecification();
    AWS_EC2_API ReservationFleetInstanceSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservationFleetInstanceSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline ReservationFleetInstanceSpecification& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for which the Capacity Reservation Fleet reserves
     * capacity.</p>
     */
    inline ReservationFleetInstanceSpecification& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }

    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }

    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }

    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }

    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline ReservationFleetInstanceSpecification& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}

    /**
     * <p>The type of operating system for which the Capacity Reservation Fleet
     * reserves capacity.</p>
     */
    inline ReservationFleetInstanceSpecification& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}


    /**
     * <p>The number of capacity units provided by the specified instance type. This
     * value, together with the total target capacity that you specify for the Fleet
     * determine the number of instances for which the Fleet reserves capacity. Both
     * values are based on units that make sense for your workload. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline double GetWeight() const{ return m_weight; }

    /**
     * <p>The number of capacity units provided by the specified instance type. This
     * value, together with the total target capacity that you specify for the Fleet
     * determine the number of instances for which the Fleet reserves capacity. Both
     * values are based on units that make sense for your workload. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The number of capacity units provided by the specified instance type. This
     * value, together with the total target capacity that you specify for the Fleet
     * determine the number of instances for which the Fleet reserves capacity. Both
     * values are based on units that make sense for your workload. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The number of capacity units provided by the specified instance type. This
     * value, together with the total target capacity that you specify for the Fleet
     * determine the number of instances for which the Fleet reserves capacity. Both
     * values are based on units that make sense for your workload. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline ReservationFleetInstanceSpecification& WithWeight(double value) { SetWeight(value); return *this;}


    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the Capacity Reservation Fleet reserves the
     * capacity. A Capacity Reservation Fleet can't span Availability Zones. All
     * instance type specifications that you specify for the Fleet must use the same
     * Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone in which the Capacity Reservation Fleet
     * reserves the capacity. A Capacity Reservation Fleet can't span Availability
     * Zones. All instance type specifications that you specify for the Fleet must use
     * the same Availability Zone.</p>
     */
    inline ReservationFleetInstanceSpecification& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>Indicates whether the Capacity Reservation Fleet supports EBS-optimized
     * instances types. This optimization provides dedicated throughput to Amazon EBS
     * and an optimized configuration stack to provide optimal I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using EBS-optimized instance types.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p>Indicates whether the Capacity Reservation Fleet supports EBS-optimized
     * instances types. This optimization provides dedicated throughput to Amazon EBS
     * and an optimized configuration stack to provide optimal I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using EBS-optimized instance types.</p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p>Indicates whether the Capacity Reservation Fleet supports EBS-optimized
     * instances types. This optimization provides dedicated throughput to Amazon EBS
     * and an optimized configuration stack to provide optimal I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using EBS-optimized instance types.</p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p>Indicates whether the Capacity Reservation Fleet supports EBS-optimized
     * instances types. This optimization provides dedicated throughput to Amazon EBS
     * and an optimized configuration stack to provide optimal I/O performance. This
     * optimization isn't available with all instance types. Additional usage charges
     * apply when using EBS-optimized instance types.</p>
     */
    inline ReservationFleetInstanceSpecification& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p>The priority to assign to the instance type. This value is used to determine
     * which of the instance types specified for the Fleet should be prioritized for
     * use. A lower value indicates a high priority. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">Instance
     * type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority to assign to the instance type. This value is used to determine
     * which of the instance types specified for the Fleet should be prioritized for
     * use. A lower value indicates a high priority. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">Instance
     * type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority to assign to the instance type. This value is used to determine
     * which of the instance types specified for the Fleet should be prioritized for
     * use. A lower value indicates a high priority. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">Instance
     * type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority to assign to the instance type. This value is used to determine
     * which of the instance types specified for the Fleet should be prioritized for
     * use. A lower value indicates a high priority. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#instance-priority">Instance
     * type priority</a> in the Amazon EC2 User Guide.</p>
     */
    inline ReservationFleetInstanceSpecification& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;

    double m_weight;
    bool m_weightHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
