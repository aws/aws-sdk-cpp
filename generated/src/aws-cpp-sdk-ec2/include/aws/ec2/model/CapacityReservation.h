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
    AWS_EC2_API CapacityReservation() = default;
    AWS_EC2_API CapacityReservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    CapacityReservation& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    CapacityReservation& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationArn() const { return m_capacityReservationArn; }
    inline bool CapacityReservationArnHasBeenSet() const { return m_capacityReservationArnHasBeenSet; }
    template<typename CapacityReservationArnT = Aws::String>
    void SetCapacityReservationArn(CapacityReservationArnT&& value) { m_capacityReservationArnHasBeenSet = true; m_capacityReservationArn = std::forward<CapacityReservationArnT>(value); }
    template<typename CapacityReservationArnT = Aws::String>
    CapacityReservation& WithCapacityReservationArn(CapacityReservationArnT&& value) { SetCapacityReservationArn(std::forward<CapacityReservationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CapacityReservation& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CapacityReservation& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline CapacityReservationInstancePlatform GetInstancePlatform() const { return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline CapacityReservation& WithInstancePlatform(CapacityReservationInstancePlatform value) { SetInstancePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the capacity is reserved.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CapacityReservation& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
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
    inline CapacityReservationTenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(CapacityReservationTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CapacityReservation& WithTenancy(CapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances for which the Capacity Reservation reserves
     * capacity.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline CapacityReservation& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The remaining capacity. Indicates the number of instances that can be
     * launched in the Capacity Reservation.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
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
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline CapacityReservation& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline bool GetEphemeralStorage() const { return m_ephemeralStorage; }
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
     * </li> <li> <p> <code>scheduled</code> - (<i>Future-dated Capacity
     * Reservations</i>) The future-dated Capacity Reservation request was approved and
     * the Capacity Reservation is scheduled for delivery on the requested start
     * date.</p> </li> <li> <p> <code>payment-pending</code> - (<i>Capacity Blocks</i>)
     * The upfront payment has not been processed yet.</p> </li> <li> <p>
     * <code>payment-failed</code> - (<i>Capacity Blocks</i>) The upfront payment was
     * not processed in the 12-hour time frame. Your Capacity Block was released.</p>
     * </li> <li> <p> <code>assessing</code> - (<i>Future-dated Capacity
     * Reservations</i>) Amazon EC2 is assessing your request for a future-dated
     * Capacity Reservation.</p> </li> <li> <p> <code>delayed</code> - (<i>Future-dated
     * Capacity Reservations</i>) Amazon EC2 encountered a delay in provisioning the
     * requested future-dated Capacity Reservation. Amazon EC2 is unable to deliver the
     * requested capacity by the requested start date and time.</p> </li> <li> <p>
     * <code>unsupported</code> - (<i>Future-dated Capacity Reservations</i>) Amazon
     * EC2 can't support the future-dated Capacity Reservation request due to capacity
     * constraints. You can view unsupported requests for 30 days. The Capacity
     * Reservation will not be delivered.</p> </li> </ul>
     */
    inline CapacityReservationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CapacityReservationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CapacityReservation& WithState(CapacityReservationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CapacityReservation& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CapacityReservation& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it.</p> </li> <li> <p> <code>limited</code> - The Capacity
     * Reservation expires automatically at a specified date and time.</p> </li> </ul>
     */
    inline EndDateType GetEndDateType() const { return m_endDateType; }
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
    inline void SetEndDateType(EndDateType value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }
    inline CapacityReservation& WithEndDateType(EndDateType value) { SetEndDateType(value); return *this;}
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
    inline InstanceMatchCriteria GetInstanceMatchCriteria() const { return m_instanceMatchCriteria; }
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }
    inline void SetInstanceMatchCriteria(InstanceMatchCriteria value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }
    inline CapacityReservation& WithInstanceMatchCriteria(InstanceMatchCriteria value) { SetInstanceMatchCriteria(value); return *this;}
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
    CapacityReservation& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the Capacity Reservation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CapacityReservation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CapacityReservation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which the Capacity
     * Reservation was created.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CapacityReservation& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet to which the Capacity Reservation
     * belongs. Only valid for Capacity Reservations that were created by a Capacity
     * Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    CapacityReservation& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which the
     * Capacity Reservation was created. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementGroupArn() const { return m_placementGroupArn; }
    inline bool PlacementGroupArnHasBeenSet() const { return m_placementGroupArnHasBeenSet; }
    template<typename PlacementGroupArnT = Aws::String>
    void SetPlacementGroupArn(PlacementGroupArnT&& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = std::forward<PlacementGroupArnT>(value); }
    template<typename PlacementGroupArnT = Aws::String>
    CapacityReservation& WithPlacementGroupArn(PlacementGroupArnT&& value) { SetPlacementGroupArn(std::forward<PlacementGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about instance capacity usage.</p>
     */
    inline const Aws::Vector<CapacityAllocation>& GetCapacityAllocations() const { return m_capacityAllocations; }
    inline bool CapacityAllocationsHasBeenSet() const { return m_capacityAllocationsHasBeenSet; }
    template<typename CapacityAllocationsT = Aws::Vector<CapacityAllocation>>
    void SetCapacityAllocations(CapacityAllocationsT&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations = std::forward<CapacityAllocationsT>(value); }
    template<typename CapacityAllocationsT = Aws::Vector<CapacityAllocation>>
    CapacityReservation& WithCapacityAllocations(CapacityAllocationsT&& value) { SetCapacityAllocations(std::forward<CapacityAllocationsT>(value)); return *this;}
    template<typename CapacityAllocationsT = CapacityAllocation>
    CapacityReservation& AddCapacityAllocations(CapacityAllocationsT&& value) { m_capacityAllocationsHasBeenSet = true; m_capacityAllocations.emplace_back(std::forward<CapacityAllocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of Capacity Reservation.</p>
     */
    inline CapacityReservationType GetReservationType() const { return m_reservationType; }
    inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }
    inline void SetReservationType(CapacityReservationType value) { m_reservationTypeHasBeenSet = true; m_reservationType = value; }
    inline CapacityReservation& WithReservationType(CapacityReservationType value) { SetReservationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account to which billing of the unused
     * capacity of the Capacity Reservation is assigned.</p>
     */
    inline const Aws::String& GetUnusedReservationBillingOwnerId() const { return m_unusedReservationBillingOwnerId; }
    inline bool UnusedReservationBillingOwnerIdHasBeenSet() const { return m_unusedReservationBillingOwnerIdHasBeenSet; }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    void SetUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { m_unusedReservationBillingOwnerIdHasBeenSet = true; m_unusedReservationBillingOwnerId = std::forward<UnusedReservationBillingOwnerIdT>(value); }
    template<typename UnusedReservationBillingOwnerIdT = Aws::String>
    CapacityReservation& WithUnusedReservationBillingOwnerId(UnusedReservationBillingOwnerIdT&& value) { SetUnusedReservationBillingOwnerId(std::forward<UnusedReservationBillingOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about your commitment for a future-dated Capacity
     * Reservation.</p>
     */
    inline const CapacityReservationCommitmentInfo& GetCommitmentInfo() const { return m_commitmentInfo; }
    inline bool CommitmentInfoHasBeenSet() const { return m_commitmentInfoHasBeenSet; }
    template<typename CommitmentInfoT = CapacityReservationCommitmentInfo>
    void SetCommitmentInfo(CommitmentInfoT&& value) { m_commitmentInfoHasBeenSet = true; m_commitmentInfo = std::forward<CommitmentInfoT>(value); }
    template<typename CommitmentInfoT = CapacityReservationCommitmentInfo>
    CapacityReservation& WithCommitmentInfo(CommitmentInfoT&& value) { SetCommitmentInfo(std::forward<CommitmentInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery method for a future-dated Capacity Reservation.
     * <code>incremental</code> indicates that the requested capacity is delivered in
     * addition to any running instances and reserved capacity that you have in your
     * account at the requested date and time.</p>
     */
    inline CapacityReservationDeliveryPreference GetDeliveryPreference() const { return m_deliveryPreference; }
    inline bool DeliveryPreferenceHasBeenSet() const { return m_deliveryPreferenceHasBeenSet; }
    inline void SetDeliveryPreference(CapacityReservationDeliveryPreference value) { m_deliveryPreferenceHasBeenSet = true; m_deliveryPreference = value; }
    inline CapacityReservation& WithDeliveryPreference(CapacityReservationDeliveryPreference value) { SetDeliveryPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Capacity Block.</p>
     */
    inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
    inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
    template<typename CapacityBlockIdT = Aws::String>
    void SetCapacityBlockId(CapacityBlockIdT&& value) { m_capacityBlockIdHasBeenSet = true; m_capacityBlockId = std::forward<CapacityBlockIdT>(value); }
    template<typename CapacityBlockIdT = Aws::String>
    CapacityReservation& WithCapacityBlockId(CapacityBlockIdT&& value) { SetCapacityBlockId(std::forward<CapacityBlockIdT>(value)); return *this;}
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

    CapacityReservationInstancePlatform m_instancePlatform{CapacityReservationInstancePlatform::NOT_SET};
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    CapacityReservationTenancy m_tenancy{CapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_ephemeralStorage{false};
    bool m_ephemeralStorageHasBeenSet = false;

    CapacityReservationState m_state{CapacityReservationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    EndDateType m_endDateType{EndDateType::NOT_SET};
    bool m_endDateTypeHasBeenSet = false;

    InstanceMatchCriteria m_instanceMatchCriteria{InstanceMatchCriteria::NOT_SET};
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
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

    CapacityReservationType m_reservationType{CapacityReservationType::NOT_SET};
    bool m_reservationTypeHasBeenSet = false;

    Aws::String m_unusedReservationBillingOwnerId;
    bool m_unusedReservationBillingOwnerIdHasBeenSet = false;

    CapacityReservationCommitmentInfo m_commitmentInfo;
    bool m_commitmentInfoHasBeenSet = false;

    CapacityReservationDeliveryPreference m_deliveryPreference{CapacityReservationDeliveryPreference::NOT_SET};
    bool m_deliveryPreferenceHasBeenSet = false;

    Aws::String m_capacityBlockId;
    bool m_capacityBlockIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
