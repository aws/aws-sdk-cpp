/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CapacityReservationFleetState.h>
#include <aws/ec2/model/FleetCapacityReservationTenancy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetInstanceMatchCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetCapacityReservation.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Information about a Capacity Reservation Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationFleet">AWS
   * API Reference</a></p>
   */
  class CapacityReservationFleet
  {
  public:
    AWS_EC2_API CapacityReservationFleet();
    AWS_EC2_API CapacityReservationFleet(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationFleet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = value; }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}


    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetArn() const{ return m_capacityReservationFleetArn; }

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline bool CapacityReservationFleetArnHasBeenSet() const { return m_capacityReservationFleetArnHasBeenSet; }

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetArn(const Aws::String& value) { m_capacityReservationFleetArnHasBeenSet = true; m_capacityReservationFleetArn = value; }

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetArn(Aws::String&& value) { m_capacityReservationFleetArnHasBeenSet = true; m_capacityReservationFleetArn = std::move(value); }

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline void SetCapacityReservationFleetArn(const char* value) { m_capacityReservationFleetArnHasBeenSet = true; m_capacityReservationFleetArn.assign(value); }

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetArn(const Aws::String& value) { SetCapacityReservationFleetArn(value); return *this;}

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetArn(Aws::String&& value) { SetCapacityReservationFleetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithCapacityReservationFleetArn(const char* value) { SetCapacityReservationFleetArn(value); return *this;}


    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline const CapacityReservationFleetState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline void SetState(const CapacityReservationFleetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline void SetState(CapacityReservationFleetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline CapacityReservationFleet& WithState(const CapacityReservationFleetState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Capacity Reservation Fleet. Possible states include:</p>
     * <ul> <li> <p> <code>submitted</code> - The Capacity Reservation Fleet request
     * has been submitted and Amazon Elastic Compute Cloud is preparing to create the
     * Capacity Reservations.</p> </li> <li> <p> <code>modifying</code> - The Capacity
     * Reservation Fleet is being modified. The Fleet remains in this state until the
     * modification is complete.</p> </li> <li> <p> <code>active</code> - The Capacity
     * Reservation Fleet has fulfilled its total target capacity and it is attempting
     * to maintain this capacity. The Fleet remains in this state until it is modified
     * or deleted.</p> </li> <li> <p> <code>partially_fulfilled</code> - The Capacity
     * Reservation Fleet has partially fulfilled its total target capacity. There is
     * insufficient Amazon EC2 to fulfill the total target capacity. The Fleet is
     * attempting to asynchronously fulfill its total target capacity.</p> </li> <li>
     * <p> <code>expiring</code> - The Capacity Reservation Fleet has reach its end
     * date and it is in the process of expiring. One or more of its Capacity
     * reservations might still be active.</p> </li> <li> <p> <code>expired</code> -
     * The Capacity Reservation Fleet has reach its end date. The Fleet and its
     * Capacity Reservations are expired. The Fleet can't create new Capacity
     * Reservations.</p> </li> <li> <p> <code>cancelling</code> - The Capacity
     * Reservation Fleet is in the process of being cancelled. One or more of its
     * Capacity reservations might still be active.</p> </li> <li> <p>
     * <code>cancelled</code> - The Capacity Reservation Fleet has been manually
     * cancelled. The Fleet and its Capacity Reservations are cancelled and the Fleet
     * can't create new Capacity Reservations.</p> </li> <li> <p> <code>failed</code> -
     * The Capacity Reservation Fleet failed to reserve capacity for the specified
     * instance types.</p> </li> </ul>
     */
    inline CapacityReservationFleet& WithState(CapacityReservationFleetState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline int GetTotalTargetCapacity() const{ return m_totalTargetCapacity; }

    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }

    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }

    /**
     * <p>The total number of capacity units for which the Capacity Reservation Fleet
     * reserves capacity. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline CapacityReservationFleet& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}


    /**
     * <p>The capacity units that have been fulfilled.</p>
     */
    inline double GetTotalFulfilledCapacity() const{ return m_totalFulfilledCapacity; }

    /**
     * <p>The capacity units that have been fulfilled.</p>
     */
    inline bool TotalFulfilledCapacityHasBeenSet() const { return m_totalFulfilledCapacityHasBeenSet; }

    /**
     * <p>The capacity units that have been fulfilled.</p>
     */
    inline void SetTotalFulfilledCapacity(double value) { m_totalFulfilledCapacityHasBeenSet = true; m_totalFulfilledCapacity = value; }

    /**
     * <p>The capacity units that have been fulfilled.</p>
     */
    inline CapacityReservationFleet& WithTotalFulfilledCapacity(double value) { SetTotalFulfilledCapacity(value); return *this;}


    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline const FleetCapacityReservationTenancy& GetTenancy() const{ return m_tenancy; }

    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }

    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline void SetTenancy(const FleetCapacityReservationTenancy& value) { m_tenancyHasBeenSet = true; m_tenancy = value; }

    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline void SetTenancy(FleetCapacityReservationTenancy&& value) { m_tenancyHasBeenSet = true; m_tenancy = std::move(value); }

    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline CapacityReservationFleet& WithTenancy(const FleetCapacityReservationTenancy& value) { SetTenancy(value); return *this;}

    /**
     * <p>The tenancy of the Capacity Reservation Fleet. Tenancies include:</p> <ul>
     * <li> <p> <code>default</code> - The Capacity Reservation Fleet is created on
     * hardware that is shared with other Amazon Web Services accounts.</p> </li> <li>
     * <p> <code>dedicated</code> - The Capacity Reservation Fleet is created on
     * single-tenant hardware that is dedicated to a single Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline CapacityReservationFleet& WithTenancy(FleetCapacityReservationTenancy&& value) { SetTenancy(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline CapacityReservationFleet& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires.</p>
     */
    inline CapacityReservationFleet& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline CapacityReservationFleet& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet was created.</p>
     */
    inline CapacityReservationFleet& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


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
    inline CapacityReservationFleet& WithInstanceMatchCriteria(const FleetInstanceMatchCriteria& value) { SetInstanceMatchCriteria(value); return *this;}

    /**
     * <p>Indicates the type of instance launches that the Capacity Reservation Fleet
     * accepts. All Capacity Reservations in the Fleet inherit this instance matching
     * criteria.</p> <p>Currently, Capacity Reservation Fleets support
     * <code>open</code> instance matching criteria only. This means that instances
     * that have matching attributes (instance type, platform, and Availability Zone)
     * run in the Capacity Reservations automatically. Instances do not need to
     * explicitly target a Capacity Reservation Fleet to use its reserved capacity.</p>
     */
    inline CapacityReservationFleet& WithInstanceMatchCriteria(FleetInstanceMatchCriteria&& value) { SetInstanceMatchCriteria(std::move(value)); return *this;}


    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline const Aws::String& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetAllocationStrategy(const Aws::String& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetAllocationStrategy(Aws::String&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetAllocationStrategy(const char* value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy.assign(value); }

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline CapacityReservationFleet& WithAllocationStrategy(const Aws::String& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline CapacityReservationFleet& WithAllocationStrategy(Aws::String&& value) { SetAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The strategy used by the Capacity Reservation Fleet to determine which of the
     * specified instance types to use. For more information, see For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#allocation-strategy">
     * Allocation strategy</a> in the Amazon EC2 User Guide.</p>
     */
    inline CapacityReservationFleet& WithAllocationStrategy(const char* value) { SetAllocationStrategy(value); return *this;}


    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline const Aws::Vector<FleetCapacityReservation>& GetInstanceTypeSpecifications() const{ return m_instanceTypeSpecifications; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline bool InstanceTypeSpecificationsHasBeenSet() const { return m_instanceTypeSpecificationsHasBeenSet; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline void SetInstanceTypeSpecifications(const Aws::Vector<FleetCapacityReservation>& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = value; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline void SetInstanceTypeSpecifications(Aws::Vector<FleetCapacityReservation>&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications = std::move(value); }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CapacityReservationFleet& WithInstanceTypeSpecifications(const Aws::Vector<FleetCapacityReservation>& value) { SetInstanceTypeSpecifications(value); return *this;}

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CapacityReservationFleet& WithInstanceTypeSpecifications(Aws::Vector<FleetCapacityReservation>&& value) { SetInstanceTypeSpecifications(std::move(value)); return *this;}

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CapacityReservationFleet& AddInstanceTypeSpecifications(const FleetCapacityReservation& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(value); return *this; }

    /**
     * <p>Information about the instance types for which to reserve the capacity.</p>
     */
    inline CapacityReservationFleet& AddInstanceTypeSpecifications(FleetCapacityReservation&& value) { m_instanceTypeSpecificationsHasBeenSet = true; m_instanceTypeSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the Capacity Reservation Fleet.</p>
     */
    inline CapacityReservationFleet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    Aws::String m_capacityReservationFleetArn;
    bool m_capacityReservationFleetArnHasBeenSet = false;

    CapacityReservationFleetState m_state;
    bool m_stateHasBeenSet = false;

    int m_totalTargetCapacity;
    bool m_totalTargetCapacityHasBeenSet = false;

    double m_totalFulfilledCapacity;
    bool m_totalFulfilledCapacityHasBeenSet = false;

    FleetCapacityReservationTenancy m_tenancy;
    bool m_tenancyHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    FleetInstanceMatchCriteria m_instanceMatchCriteria;
    bool m_instanceMatchCriteriaHasBeenSet = false;

    Aws::String m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    Aws::Vector<FleetCapacityReservation> m_instanceTypeSpecifications;
    bool m_instanceTypeSpecificationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
