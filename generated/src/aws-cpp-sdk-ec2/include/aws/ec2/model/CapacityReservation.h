/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/ec2/model/CapacityReservationTenancy.h>
#include <aws/ec2/model/CapacityReservationState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/EndDateType.h>
#include <aws/ec2/model/InstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CapacityReservationType.h>
#include <aws/ec2/model/CapacityReservationCommitmentInfo.h>
#include <aws/ec2/model/CapacityReservationDeliveryPreference.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/CapacityAllocation.h>
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
   * <p>Describes a Capacity Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservation">AWS
   * API Reference</a></p>
   */
  class CapacityReservation
  {
  public:
    AWS_EC2_API CapacityReservation();
    AWS_EC2_API CapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }
    inline CapacityReservation& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}
    inline CapacityReservation& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}
    inline CapacityReservation& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline CapacityReservation& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline CapacityReservation& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline CapacityReservation& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationArn() const{ return m_capacityReservationArn; }
    inline bool CapacityReservationArnHasBeenSet() const { return m_capacityReservationArnHasBeenSet; }
    inline void SetCapacityReservationArn(const Aws::String& value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn = value; }
    inline void SetCapacityReservationArn(Aws::String&& value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn = std::move(value); }
    inline void SetCapacityReservationArn(const char* value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn.assign(value); }
    inline CapacityReservation& WithCapacityReservationArn(const Aws::String& value) { SetCapacityReservationArn(value); return *this;}
    inline CapacityReservation& WithCapacityReservationArn(Aws::String&& value) { SetCapacityReservationArn(std::move(value)); return *this;}
    inline CapacityReservation& WithCapacityReservationArn(const char* value) { SetCapacityReservationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline CapacityReservation& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline CapacityReservation& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline CapacityReservation& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline CapacityReservation& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline CapacityReservation& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline CapacityReservation& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const CapacityReservationInstancePlatform& GetInstancePlatform() const{ return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(const CapacityReservationInstancePlatform& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::move(value); }
    inline CapacityReservation& WithInstancePlatform(const CapacityReservationInstancePlatform& value) { SetInstancePlatform(value); return *this;}
    inline CapacityReservation& WithInstancePlatform(CapacityReservationInstancePlatform&& value) { SetInstancePlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CapacityReservation& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CapacityReservation& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CapacityReservation& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the tenancy of the Capacity Reservation. A Capacity Reservation can
     * have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation is created on hardware that is
     * shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservation is created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline const CapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(const CapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline void SetTenancy(CapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }
    inline CapacityReservation& WithTenancy(const CapacityReservationTenancy& value) { SetTenancy(value); return *this;}
    inline CapacityReservation& WithTenancy(CapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline CapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline CapacityReservation& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Capacity Reservation supports EBS-optimized instances.
     * This optimization provides dedicated throughput to Amazon EBS and an optimized
     * configuration stack to provide optimal I/O performance. This optimization isn't
     * available with all instance types. Additional usage charges apply when using an
     * EBS- optimized instance.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline CapacityReservation& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline bool GetEphemeralStorage() const{ return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    inline void SetEphemeralStorage(bool value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }
    inline CapacityReservation& WithEphemeralStorage(bool value) { SetEphemeralStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Capacity Reservation. A Capacity Reservation can be
     * in one of the following states:</p> <ul> <li> <p> <code>active</code> - The
     * capacity is available for use.</p> </li> <li> <p> <code>expired</code> - The
     * Capacity Reservation expired automatically at the date and time specified in
     * your reservation request. The reserved capacity is no longer available for your
     * use.</p> </li> <li> <p> <code>cancelled</code> - The Capacity Reservation was
     * canceled. The reserved capacity is no longer available for your use.</p> </li>
     * <li> <p> <code>pending</code> - The Capacity Reservation request was successful
     * but the capacity provisioning is still pending.</p> </li> <li> <p>
     * <code>failed</code> - The Capacity Reservation request has failed. A request can
     * fail due to request parameters that are not valid, capacity constraints, or
     * instance limit constraints. You can view a failed request for 60 minutes.</p>
     * </li> <li> <p> <code>scheduled</code> - (<i>Future-dated Capacity Reservations
     * only</i>) The future-dated Capacity Reservation request was approved and the
     * Capacity Reservation is scheduled for delivery on the requested start date.</p>
     * </li> <li> <p> <code>assessing</code> - (<i>Future-dated Capacity Reservations
     * only</i>) Amazon EC2 is assessing your request for a future-dated Capacity
     * Reservation.</p> </li> <li> <p> <code>delayed</code> - (<i>Future-dated Capacity
     * Reservations only</i>) Amazon EC2 encountered a delay in provisioning the
     * requested future-dated Capacity Reservation. Amazon EC2 is unable to deliver the
     * requested capacity by the requested start date and time.</p> </li> <li> <p>
     * <code>unsupported</code> - (<i>Future-dated Capacity Reservations only</i>)
     * Amazon EC2 can't support the future-dated Capacity Reservation request due to
     * capacity constraints. You can view unsupported requests for 30 days. The
     * Capacity Reservation will not be delivered.</p> </li> </ul>
     */
    inline const CapacityReservationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CapacityReservationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CapacityReservationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CapacityReservation& WithState(const CapacityReservationState& value) { SetState(value); return *this;}
    inline CapacityReservation& WithState(CapacityReservationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline CapacityReservation& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline CapacityReservation& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline CapacityReservation& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}
    inline CapacityReservation& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline const EndDateType& GetEndDateType() const{ return m_endDateType; }
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
    inline void SetEndDateType(const EndDateType& value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }
    inline void SetEndDateType(EndDateType&& value) { m_endDateTypeHasBeenSet = true; m_endDateType = std::move(value); }
    inline CapacityReservation& WithEndDateType(const EndDateType& value) { SetEndDateType(value); return *this;}
    inline CapacityReservation& WithEndDateType(EndDateType&& value) { SetEndDateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation accepts all instances that have matching attributes (instance type,
     * platform, and Availability Zone). Instances that have matching attributes launch
     * into the Capacity Reservation automatically without specifying any additional
     * parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity Reservation
     * only accepts instances that have matching attributes (instance type, platform,
     * and Availability Zone), and explicitly target the Capacity Reservation. This
     * ensures that only permitted instances can use the reserved capacity. </p> </li>
     * </ul>
     */
    inline const InstanceMatchCriteria& GetInstanceMatchCriteria() const{ return m_instanceMatchCriteria; }
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }
    inline void SetInstanceMatchCriteria(const InstanceMatchCriteria& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }
    inline void SetInstanceMatchCriteria(InstanceMatchCriteria&& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = std::move(value); }
    inline CapacityReservation& WithInstanceMatchCriteria(const InstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}
    inline CapacityReservation& WithInstanceMatchCriteria(InstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }
    inline CapacityReservation& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}
    inline CapacityReservation& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CapacityReservation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CapacityReservation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CapacityReservation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CapacityReservation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline CapacityReservation& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline CapacityReservation& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline CapacityReservation& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = value; }
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::move(value); }
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId.assign(value); }
    inline CapacityReservation& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}
    inline CapacityReservation& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}
    inline CapacityReservation& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementGroupArn() const{ return m_placementGroupArn; }
    inline bool PlacementGroupArnHasBeenSet() const { return m_placementGroupArnHasBeenSet; }
    inline void SetPlacementGroupArn(const Aws::String& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = value; }
    inline void SetPlacementGroupArn(Aws::String&& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = std::move(value); }
    inline void SetPlacementGroupArn(const char* value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn.assign(value); }
    inline CapacityReservation& WithPlacementGroupArn(const Aws::String& value) { SetPlacementGroupArn(value); return *this;}
    inline CapacityReservation& WithPlacementGroupArn(Aws::String&& value) { SetPlacementGroupArn(std::move(value)); return *this;}
    inline CapacityReservation& WithPlacementGroupArn(const char* value) { SetPlacementGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline const Aws::Vector<CapacityAllocation>& GetCapacityAllocations() const{ return m_capacityAllocations; }
    inline bool CapacityAllocationsHasBeenSet() const { return m_capacityAllocationsHasBeenSet; }
    inline void SetCapacityAllocations(const Aws::Vector<CapacityAllocation>& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations = value; }
    inline void SetCapacityAllocations(Aws::Vector<CapacityAllocation>&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations = std::move(value); }
    inline CapacityReservation& WithCapacityAllocations(const Aws::Vector<CapacityAllocation>& value) { SetCapacityAllocations(value); return *this;}
    inline CapacityReservation& WithCapacityAllocations(Aws::Vector<CapacityAllocation>&& value) { SetCapacityAllocations(std::move(value)); return *this;}
    inline CapacityReservation& AddCapacityAllocations(const CapacityAllocation& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations.push_back(value); return *this; }
    inline CapacityReservation& AddCapacityAllocations(CapacityAllocation&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of Capacity Reservation.</p>
     */
    inline const CapacityReservationType& GetReservationType() const{ return m_reservationType; }
    inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }
    inline void SetReservationType(const CapacityReservationType& value) { m_reservationTypeHasBeenSet = true; m_reservationType = value; }
    inline void SetReservationType(CapacityReservationType&& value) { m_reservationTypeHasBeenSet = true; m_reservationType = std::move(value); }
    inline CapacityReservation& WithReservationType(const CapacityReservationType& value) { SetReservationType(value); return *this;}
    inline CapacityReservation& WithReservationType(CapacityReservationType&& value) { SetReservationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to which billing of the unused
     * capacity of the Capacity Reservation is assigned.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const{ return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    inline void SetUnusedReservationBillingOwnerId(const Aws::String& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = value; }
    inline void SetUnusedReservationBillingOwnerId(Aws::String&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::move(value); }
    inline void SetUnusedReservationBillingOwnerId(const char* value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId.assign(value); }
    inline CapacityReservation& WithUnusedReservationBillingOwnerId(const Aws::String& value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    inline CapacityReservation& WithUnusedReservationBillingOwnerId(Aws::String&& value) { SetUnusedReservationBillingOwnerId(std::move(value)); return *this;}
    inline CapacityReservation& WithUnusedReservationBillingOwnerId(const char* value) { SetUnusedReservationBillingOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about your commitment for a future-dated Capacity
     * Reservation.</p>
     */
    inline const CapacityReservationCommitmentInfo& GetCommitmentInfo() const{ return m_commitmentInfo; }
    inline bool CommitmentInfoHasBeenSet() const { return m_commitmentInfoHasBeenSet; }
    inline void SetCommitmentInfo(const CapacityReservationCommitmentInfo& value) { m_commitmentInfoHasBeenSet = true; m_commitmentInfo = value; }
    inline void SetCommitmentInfo(CapacityReservationCommitmentInfo&& value) { m_commitmentInfoHasBeenSet = true; m_commitmentInfo = std::move(value); }
    inline CapacityReservation& WithCommitmentInfo(const CapacityReservationCommitmentInfo& value) { SetCommitmentInfo(value); return *this;}
    inline CapacityReservation& WithCommitmentInfo(CapacityReservationCommitmentInfo&& value) { SetCommitmentInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery method for a future-dated Capacity Reservation.
     * <code>incremental</code> indicates that the requested capacity is delivered in
     * addition to any running instances and reserved capacity that you have in your
     * account at the requested date and time.</p>
     */
    inline const CapacityReservationDeliveryPreference& GetDeliveryPreference() const{ return m_deliveryPreference; }
    inline bool DeliveryPreferenceHasBeenSet() const { return m_deliveryPreferenceHasBeenSet; }
    inline void SetDeliveryPreference(const CapacityReservationDeliveryPreference& value) { m_deliveryPreferenceHasBeenSet = true; m_deliveryPreference = value; }
    inline void SetDeliveryPreference(CapacityReservationDeliveryPreference&& value) { m_deliveryPreferenceHasBeenSet = true; m_deliveryPreference = std::move(value); }
    inline CapacityReservation& WithDeliveryPreference(const CapacityReservationDeliveryPreference& value) { SetDeliveryPreference(value); return *this;}
    inline CapacityReservation& WithDeliveryPreference(CapacityReservationDeliveryPreference&& value) { SetDeliveryPreference(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_capacityReservationArn;
    bool m_capacityReservationArnHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    CapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet = false;

    bool m_ebsOptimized;
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_ephemeralStorage;
    bool m_ephemeralStorageHasBeenSet = false;

    CapacityReservationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    EndDateType m_endDateType;
    bool m_endDateTypeHasBeenSet = false;

    InstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    Aws::String m_placementGroupArn;
    bool m_placementGroupArnHasBeenSet = false;

    Aws::Vector<CapacityAllocation> m_capacityAllocations;
    bool m_capacityAllocationsHasBeenSet = false;

    CapacityReservationType m_reservationType;
    bool m_reservationTypeHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;

    CapacityReservationCommitmentInfo m_commitmentInfo;
    bool m_commitmentInfoHasBeenSet = false;

    CapacityReservationDeliveryPreference m_deliveryPreference;
    bool m_deliveryPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
