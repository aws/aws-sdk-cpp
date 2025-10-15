/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReservationType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ReservationEndDateType.h>
#include <aws/ec2/model/CapacityTenancy.h>
#include <aws/ec2/model/ReservationState.h>
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
   * <p> Represents dimension values for capacity metrics, including resource
   * identifiers, geographic information, and reservation details used for grouping
   * and filtering capacity data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityManagerDimension">AWS
   * API Reference</a></p>
   */
  class CapacityManagerDimension
  {
  public:
    AWS_EC2_API CapacityManagerDimension() = default;
    AWS_EC2_API CapacityManagerDimension(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityManagerDimension& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The Amazon Web Services Region where the capacity resource is located. </p>
     */
    inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::String>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::String>
    CapacityManagerDimension& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the Availability Zone where the capacity resource
     * is located. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    template<typename AvailabilityZoneIdT = Aws::String>
    void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value); }
    template<typename AvailabilityZoneIdT = Aws::String>
    CapacityManagerDimension& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) { SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID that owns the capacity resource. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CapacityManagerDimension& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The EC2 instance family of the capacity resource. </p>
     */
    inline const Aws::String& GetInstanceFamily() const { return m_instanceFamily; }
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }
    template<typename InstanceFamilyT = Aws::String>
    void SetInstanceFamily(InstanceFamilyT&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::forward<InstanceFamilyT>(value); }
    template<typename InstanceFamilyT = Aws::String>
    CapacityManagerDimension& WithInstanceFamily(InstanceFamilyT&& value) { SetInstanceFamily(std::forward<InstanceFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specific EC2 instance type of the capacity resource. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CapacityManagerDimension& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The platform or operating system of the instance. </p>
     */
    inline const Aws::String& GetInstancePlatform() const { return m_instancePlatform; }
    inline bool InstancePlatformHasBeenSet() const { return m_instancePlatformHasBeenSet; }
    template<typename InstancePlatformT = Aws::String>
    void SetInstancePlatform(InstancePlatformT&& value) { m_instancePlatformHasBeenSet = true; m_instancePlatform = std::forward<InstancePlatformT>(value); }
    template<typename InstancePlatformT = Aws::String>
    CapacityManagerDimension& WithInstancePlatform(InstancePlatformT&& value) { SetInstancePlatform(std::forward<InstancePlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the capacity reservation. This provides a
     * unique identifier that can be used across Amazon Web Services services to
     * reference the specific reservation. </p>
     */
    inline const Aws::String& GetReservationArn() const { return m_reservationArn; }
    inline bool ReservationArnHasBeenSet() const { return m_reservationArnHasBeenSet; }
    template<typename ReservationArnT = Aws::String>
    void SetReservationArn(ReservationArnT&& value) { m_reservationArnHasBeenSet = true; m_reservationArn = std::forward<ReservationArnT>(value); }
    template<typename ReservationArnT = Aws::String>
    CapacityManagerDimension& WithReservationArn(ReservationArnT&& value) { SetReservationArn(std::forward<ReservationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the capacity reservation. </p>
     */
    inline const Aws::String& GetReservationId() const { return m_reservationId; }
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }
    template<typename ReservationIdT = Aws::String>
    void SetReservationId(ReservationIdT&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::forward<ReservationIdT>(value); }
    template<typename ReservationIdT = Aws::String>
    CapacityManagerDimension& WithReservationId(ReservationIdT&& value) { SetReservationId(std::forward<ReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of capacity reservation. </p>
     */
    inline ReservationType GetReservationType() const { return m_reservationType; }
    inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }
    inline void SetReservationType(ReservationType value) { m_reservationTypeHasBeenSet = true; m_reservationType = value; }
    inline CapacityManagerDimension& WithReservationType(ReservationType value) { SetReservationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the capacity reservation was originally created, in
     * milliseconds since epoch. This differs from the start timestamp as reservations
     * can be created before they become active. </p>
     */
    inline const Aws::Utils::DateTime& GetReservationCreateTimestamp() const { return m_reservationCreateTimestamp; }
    inline bool ReservationCreateTimestampHasBeenSet() const { return m_reservationCreateTimestampHasBeenSet; }
    template<typename ReservationCreateTimestampT = Aws::Utils::DateTime>
    void SetReservationCreateTimestamp(ReservationCreateTimestampT&& value) { m_reservationCreateTimestampHasBeenSet = true; m_reservationCreateTimestamp = std::forward<ReservationCreateTimestampT>(value); }
    template<typename ReservationCreateTimestampT = Aws::Utils::DateTime>
    CapacityManagerDimension& WithReservationCreateTimestamp(ReservationCreateTimestampT&& value) { SetReservationCreateTimestamp(std::forward<ReservationCreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the capacity reservation becomes active and available for
     * use, in milliseconds since epoch. This is when the reservation begins providing
     * capacity. </p>
     */
    inline const Aws::Utils::DateTime& GetReservationStartTimestamp() const { return m_reservationStartTimestamp; }
    inline bool ReservationStartTimestampHasBeenSet() const { return m_reservationStartTimestampHasBeenSet; }
    template<typename ReservationStartTimestampT = Aws::Utils::DateTime>
    void SetReservationStartTimestamp(ReservationStartTimestampT&& value) { m_reservationStartTimestampHasBeenSet = true; m_reservationStartTimestamp = std::forward<ReservationStartTimestampT>(value); }
    template<typename ReservationStartTimestampT = Aws::Utils::DateTime>
    CapacityManagerDimension& WithReservationStartTimestamp(ReservationStartTimestampT&& value) { SetReservationStartTimestamp(std::forward<ReservationStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the capacity reservation expires and is no longer
     * available, in milliseconds since epoch. After this time, the reservation will
     * not provide any capacity. </p>
     */
    inline const Aws::Utils::DateTime& GetReservationEndTimestamp() const { return m_reservationEndTimestamp; }
    inline bool ReservationEndTimestampHasBeenSet() const { return m_reservationEndTimestampHasBeenSet; }
    template<typename ReservationEndTimestampT = Aws::Utils::DateTime>
    void SetReservationEndTimestamp(ReservationEndTimestampT&& value) { m_reservationEndTimestampHasBeenSet = true; m_reservationEndTimestamp = std::forward<ReservationEndTimestampT>(value); }
    template<typename ReservationEndTimestampT = Aws::Utils::DateTime>
    CapacityManagerDimension& WithReservationEndTimestamp(ReservationEndTimestampT&& value) { SetReservationEndTimestamp(std::forward<ReservationEndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of end date for the capacity reservation. This indicates whether
     * the reservation has a fixed end date, is open-ended, or follows a specific
     * termination pattern. </p>
     */
    inline ReservationEndDateType GetReservationEndDateType() const { return m_reservationEndDateType; }
    inline bool ReservationEndDateTypeHasBeenSet() const { return m_reservationEndDateTypeHasBeenSet; }
    inline void SetReservationEndDateType(ReservationEndDateType value) { m_reservationEndDateTypeHasBeenSet = true; m_reservationEndDateType = value; }
    inline CapacityManagerDimension& WithReservationEndDateType(ReservationEndDateType value) { SetReservationEndDateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tenancy of the EC2 instances associated with this capacity dimension.
     * Valid values are 'default' for shared tenancy, 'dedicated' for dedicated
     * instances, or 'host' for dedicated hosts. </p>
     */
    inline CapacityTenancy GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(CapacityTenancy value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline CapacityManagerDimension& WithTenancy(CapacityTenancy value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current state of the capacity reservation. </p>
     */
    inline ReservationState GetReservationState() const { return m_reservationState; }
    inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }
    inline void SetReservationState(ReservationState value) { m_reservationStateHasBeenSet = true; m_reservationState = value; }
    inline CapacityManagerDimension& WithReservationState(ReservationState value) { SetReservationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance matching criteria for the capacity reservation, determining how
     * instances are matched to the reservation. </p>
     */
    inline const Aws::String& GetReservationInstanceMatchCriteria() const { return m_reservationInstanceMatchCriteria; }
    inline bool ReservationInstanceMatchCriteriaHasBeenSet() const { return m_reservationInstanceMatchCriteriaHasBeenSet; }
    template<typename ReservationInstanceMatchCriteriaT = Aws::String>
    void SetReservationInstanceMatchCriteria(ReservationInstanceMatchCriteriaT&& value) { m_reservationInstanceMatchCriteriaHasBeenSet = true; m_reservationInstanceMatchCriteria = std::forward<ReservationInstanceMatchCriteriaT>(value); }
    template<typename ReservationInstanceMatchCriteriaT = Aws::String>
    CapacityManagerDimension& WithReservationInstanceMatchCriteria(ReservationInstanceMatchCriteriaT&& value) { SetReservationInstanceMatchCriteria(std::forward<ReservationInstanceMatchCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID that is financially responsible for
     * unused capacity reservation costs. </p>
     */
    inline const Aws::String& GetReservationUnusedFinancialOwner() const { return m_reservationUnusedFinancialOwner; }
    inline bool ReservationUnusedFinancialOwnerHasBeenSet() const { return m_reservationUnusedFinancialOwnerHasBeenSet; }
    template<typename ReservationUnusedFinancialOwnerT = Aws::String>
    void SetReservationUnusedFinancialOwner(ReservationUnusedFinancialOwnerT&& value) { m_reservationUnusedFinancialOwnerHasBeenSet = true; m_reservationUnusedFinancialOwner = std::forward<ReservationUnusedFinancialOwnerT>(value); }
    template<typename ReservationUnusedFinancialOwnerT = Aws::String>
    CapacityManagerDimension& WithReservationUnusedFinancialOwner(ReservationUnusedFinancialOwnerT&& value) { SetReservationUnusedFinancialOwner(std::forward<ReservationUnusedFinancialOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_instancePlatform;
    bool m_instancePlatformHasBeenSet = false;

    Aws::String m_reservationArn;
    bool m_reservationArnHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    ReservationType m_reservationType{ReservationType::NOT_SET};
    bool m_reservationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_reservationCreateTimestamp{};
    bool m_reservationCreateTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_reservationStartTimestamp{};
    bool m_reservationStartTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_reservationEndTimestamp{};
    bool m_reservationEndTimestampHasBeenSet = false;

    ReservationEndDateType m_reservationEndDateType{ReservationEndDateType::NOT_SET};
    bool m_reservationEndDateTypeHasBeenSet = false;

    CapacityTenancy m_tenancy{CapacityTenancy::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    ReservationState m_reservationState{ReservationState::NOT_SET};
    bool m_reservationStateHasBeenSet = false;

    Aws::String m_reservationInstanceMatchCriteria;
    bool m_reservationInstanceMatchCriteriaHasBeenSet = false;

    Aws::String m_reservationUnusedFinancialOwner;
    bool m_reservationUnusedFinancialOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
