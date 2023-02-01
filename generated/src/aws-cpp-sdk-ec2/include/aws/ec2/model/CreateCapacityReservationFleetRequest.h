/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetCapacityReservationTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetInstanceMatchCriteria.h>
#include <aws/ec2/model/ReservationFleetInstanceSpecification.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateCapacityReservationFleetRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateCapacityReservationFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityReservationFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline const Aws::String& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline void SetAllocationStrategy(const Aws::String& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline void SetAllocationStrategy(Aws::String&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline void SetAllocationStrategy(const char* value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy.assign(value); }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline CreateCapacityReservationFleetRequest& WithAllocationStrategy(const Aws::String& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline CreateCapacityReservationFleetRequest& WithAllocationStrategy(Aws::String&& value) { SetAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. Currently, only the <code>prioritized</code>
     * allocation strategy is supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p> <p>Valid values:
     * <code>prioritized</code> </p>
     */
    inline CreateCapacityReservationFleetRequest& WithAllocationStrategy(const char* value) { SetAllocationStrategy(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensure
     * Idempotency</a>.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline const Aws::Vector<ReservationFleetInstanceSpecification>& GetInstanceTypeSpecifications() const{ return m_instanceTypeSpecifications; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline void SetInstanceTypeSpecifications(const Aws::Vector<ReservationFleetInstanceSpecification>& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = value; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline void SetInstanceTypeSpecifications(Aws::Vector<ReservationFleetInstanceSpecification>&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::move(value); }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithInstanceTypeSpecifications(const Aws::Vector<ReservationFleetInstanceSpecification>& value) { SetInstanceTypeSpecifications(value); return *this;}

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithInstanceTypeSpecifications(Aws::Vector<ReservationFleetInstanceSpecification>&& value) { SetInstanceTypeSpecifications(std::move(value)); return *this;}

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& AddInstanceTypeSpecifications(const ReservationFleetInstanceSpecification& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& AddInstanceTypeSpecifications(ReservationFleetInstanceSpecification&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline const FleetCapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetTenancy(const FleetCapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetTenancy(FleetCapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline CreateCapacityReservationFleetRequest& WithTenancy(const FleetCapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>Indicates the tenancy of the Capacity Reservation Fleet. All Capacity
     * Reservations in the Fleet inherit this tenancy. The Capacity Reservation Fleet
     * can have one of the following tenancy settings:</p> <ul> <li> <p>
     * <code>default</code> - The Capacity Reservation Fleet is created on hardware
     * that is shared with other Amazon Web Services accounts.</p> </li> <li> <p>
     * <code>dedicated</code> - The Capacity Reservations are created on single-tenant
     * hardware that is dedicated to a single Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline CreateCapacityReservationFleetRequest& WithTenancy(FleetCapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline int GetTotalTargetCapacity() const{ return m_totalTargetCapacity; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">
     * Total target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline CreateCapacityReservationFleetRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>. </p>
     */
    inline CreateCapacityReservationFleetRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline const FleetInstanceMatchCriteria& GetInstanceMatchCriteria() const{ return m_instanceMatchCriteria; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline bool InstanceMatchCriteriaHasBeenSet() const { return m_instanceMatchCriteriaHasBeenSet; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline void SetInstanceMatchCriteria(const FleetInstanceMatchCriteria& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = value; }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline void SetInstanceMatchCriteria(FleetInstanceMatchCriteria&& value) { m_instanceMatchCriteriaHasBeenSet = true; m_instanceMatchCriteria = std::move(value); }

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithInstanceMatchCriteria(const FleetInstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithInstanceMatchCriteria(FleetInstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}


    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline CreateCapacityReservationFleetRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the Capacity Reservation Fleet. The tags are
     * automatically assigned to the Capacity Reservations in the Fleet.</p>
     */
    inline CreateCapacityReservationFleetRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateCapacityReservationFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<ReservationFleetInstanceSpecification> m_instanceTypeSpecifications;
    bool m_instanceTypeSpecificationsHasBeenSet = false;

    FleetCapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    int m_totalTargetCapacity;
    bool m_totalTargetCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    FleetInstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
