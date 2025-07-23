/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/ec2/model/CapacityReservationTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/EndDateType.h>
#include <aws/ec2/model/InstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CapacityReservationDeliveryPreference.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateCapacityReservationRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateCapacityReservationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityReservation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCapacityReservationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for which to reserve capacity.</p>  <p>You can
     * request future-dated Capacity Reservations for instance types in the C, M, R, I,
     * T, and G instance families only.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateCapacityReservationRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system for which to reserve capacity.</p>
     */
    inline CapacityReservationInstancePlatform GetInstancePlatform() const { return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    inline void SetInstancePlatform(CapacityReservationInstancePlatform value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = value; }
    inline CreateCapacityReservationRequest& WithInstancePlatform(CapacityReservationInstancePlatform value) { SetInstancePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to create the Capacity Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateCapacityReservationRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which to create the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CreateCapacityReservationRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
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
    inline CreateCapacityReservationRequest& WithTenancy(CapacityReservationTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for which to reserve capacity.</p>  <p>You can
     * request future-dated Capacity Reservations for an instance count with a minimum
     * of 64 vCPUs. For example, if you request a future-dated Capacity Reservation for
     * <code>m5.xlarge</code> instances, you must request at least 25 instances (<i>16
     * * m5.xlarge = 64 vCPUs</i>).</p>  <p>Valid range: 1 - 1000</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline CreateCapacityReservationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
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
    inline CreateCapacityReservationRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Deprecated.</i> </p>
     */
    inline bool GetEphemeralStorage() const { return m_ephemeralStorage; }
    inline bool EphemeralStorageHasBeenSet() const { return m_ephemeralStorageHasBeenSet; }
    inline void SetEphemeralStorage(bool value) { m_ephemeralStorageHasBeenSet = true; m_ephemeralStorage = value; }
    inline CreateCapacityReservationRequest& WithEphemeralStorage(bool value) { SetEphemeralStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>You must
     * provide an <code>EndDate</code> value if <code>EndDateType</code> is
     * <code>limited</code>. Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p> <p>If the <code>EndDateType</code> is
     * <code>limited</code>, the Capacity Reservation is cancelled within an hour from
     * the specified time. For example, if you specify 5/31/2019, 13:30:55, the
     * Capacity Reservation is guaranteed to end between 13:30:55 and 14:30:55 on
     * 5/31/2019.</p> <p>If you are requesting a future-dated Capacity Reservation, you
     * can't specify an end date and time that is within the commitment duration.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    CreateCapacityReservationRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> if the
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if the
     * <code>EndDateType</code> value is <code>limited</code>.</p> </li> </ul>
     */
    inline EndDateType GetEndDateType() const { return m_endDateType; }
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
    inline void SetEndDateType(EndDateType value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }
    inline CreateCapacityReservationRequest& WithEndDateType(EndDateType value) { SetEndDateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation
     * accepts. The options include:</p> <ul> <li> <p> <code>open</code> - The Capacity
     * Reservation automatically matches all instances that have matching attributes
     * (instance type, platform, and Availability Zone). Instances that have matching
     * attributes run in the Capacity Reservation automatically without specifying any
     * additional parameters.</p> </li> <li> <p> <code>targeted</code> - The Capacity
     * Reservation only accepts instances that have matching attributes (instance type,
     * platform, and Availability Zone), and explicitly target the Capacity
     * Reservation. This ensures that only permitted instances can use the reserved
     * capacity. </p> </li> </ul>  <p>If you are requesting a future-dated
     * Capacity Reservation, you must specify <code>targeted</code>.</p> 
     * <p>Default: <code>open</code> </p>
     */
    inline InstanceMatchCriteria GetInstanceMatchCriteria() const { return m_instanceMatchCriteria; }
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }
    inline void SetInstanceMatchCriteria(InstanceMatchCriteria value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }
    inline CreateCapacityReservationRequest& WithInstanceMatchCriteria(InstanceMatchCriteria value) { SetInstanceMatchCriteria(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Capacity Reservation during launch.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateCapacityReservationRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateCapacityReservationRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateCapacityReservationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Not supported for future-dated Capacity Reservations.</p> 
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateCapacityReservationRequest& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Not supported for future-dated Capacity Reservations.</p> 
     * <p>The Amazon Resource Name (ARN) of the cluster placement group in which to
     * create the Capacity Reservation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-cpg.html"> Capacity
     * Reservations for cluster placement groups</a> in the <i>Amazon EC2 User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlacementGroupArn() const { return m_placementGroupArn; }
    inline bool PlacementGroupArnHasBeenSet() const { return m_placementGroupArnHasBeenSet; }
    template<typename PlacementGroupArnT = Aws::String>
    void SetPlacementGroupArn(PlacementGroupArnT&& value) { m_placementGroupArnHasBeenSet = true; m_placementGroupArn = std::forward<PlacementGroupArnT>(value); }
    template<typename PlacementGroupArnT = Aws::String>
    CreateCapacityReservationRequest& WithPlacementGroupArn(PlacementGroupArnT&& value) { SetPlacementGroupArn(std::forward<PlacementGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Required for future-dated Capacity Reservations only. To create a
     * Capacity Reservation for immediate use, omit this parameter. </p>  <p>The
     * date and time at which the future-dated Capacity Reservation should become
     * available for use, in the ISO8601 format in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You can request a future-dated
     * Capacity Reservation between 5 and 120 days in advance.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    CreateCapacityReservationRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Required for future-dated Capacity Reservations only. To create a
     * Capacity Reservation for immediate use, omit this parameter. </p> 
     * <p>Specify a commitment duration, in seconds, for the future-dated Capacity
     * Reservation.</p> <p>The commitment duration is a minimum duration for which you
     * commit to having the future-dated Capacity Reservation in the
     * <code>active</code> state in your account after it has been delivered.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/cr-concepts.html#cr-commitment-duration">
     * Commitment duration</a>.</p>
     */
    inline long long GetCommitmentDuration() const { return m_commitmentDuration; }
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
    inline void SetCommitmentDuration(long long value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }
    inline CreateCapacityReservationRequest& WithCommitmentDuration(long long value) { SetCommitmentDuration(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Required for future-dated Capacity Reservations only. To create a
     * Capacity Reservation for immediate use, omit this parameter. </p> 
     * <p>Indicates that the requested capacity will be delivered in addition to any
     * running instances or reserved capacity that you have in your account at the
     * requested date and time.</p> <p>The only supported value is
     * <code>incremental</code>.</p>
     */
    inline CapacityReservationDeliveryPreference GetDeliveryPreference() const { return m_deliveryPreference; }
    inline bool DeliveryPreferenceHasBeenSet() const { return m_deliveryPreferenceHasBeenSet; }
    inline void SetDeliveryPreference(CapacityReservationDeliveryPreference value) { m_deliveryPreferenceHasBeenSet = true; m_deliveryPreference = value; }
    inline CreateCapacityReservationRequest& WithDeliveryPreference(CapacityReservationDeliveryPreference value) { SetDeliveryPreference(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    CapacityReservationInstancePlatform m_instancePlatform{CapacityReservationInstancePlatform::NOT_SET};
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    CapacityReservationTenancy m_tenancy{CapacityReservationTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_ephemeralStorage{false};
    bool m_ephemeralStorageHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    EndDateType m_endDateType{EndDateType::NOT_SET};
    bool m_endDateTypeHasBeenSet = false;

    InstanceMatchCriteria m_instanceMatchCriteria{InstanceMatchCriteria::NOT_SET};
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_placementGroupArn;
    bool m_placementGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    long long m_commitmentDuration{0};
    bool m_commitmentDurationHasBeenSet = false;

    CapacityReservationDeliveryPreference m_deliveryPreference{CapacityReservationDeliveryPreference::NOT_SET};
    bool m_deliveryPreferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
