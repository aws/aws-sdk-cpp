/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyCapacityReservationFleetRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyCapacityReservationFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCapacityReservationFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const{ return m_capacityReservationFleetId; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline void SetCapacityReservationFleetId(const Aws::String& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = value; }

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline void SetCapacityReservationFleetId(Aws::String&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline void SetCapacityReservationFleetId(const char* value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithCapacityReservationFleetId(const Aws::String& value) { SetCapacityReservationFleetId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithCapacityReservationFleetId(Aws::String&& value) { SetCapacityReservationFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithCapacityReservationFleetId(const char* value) { SetCapacityReservationFleetId(value); return *this;}


    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline int GetTotalTargetCapacity() const{ return m_totalTargetCapacity; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }

    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the Amazon EC2 User Guide.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation Fleet expires. When the
     * Capacity Reservation Fleet expires, its state changes to <code>expired</code>
     * and all of the Capacity Reservations in the Fleet expire.</p> <p>The Capacity
     * Reservation Fleet expires within an hour after the specified time. For example,
     * if you specify <code>5/31/2019</code>, <code>13:30:55</code>, the Capacity
     * Reservation Fleet is guaranteed to expire between <code>13:30:55</code> and
     * <code>14:30:55</code> on <code>5/31/2019</code>.</p> <p>You can't specify
     * <b>EndDate</b> and <b> RemoveEndDate</b> in the same request.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


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
    inline ModifyCapacityReservationFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether to remove the end date from the Capacity Reservation Fleet.
     * If you remove the end date, the Capacity Reservation Fleet does not expire and
     * it remains active until you explicitly cancel it using the
     * <b>CancelCapacityReservationFleet</b> action.</p> <p>You can't specify
     * <b>RemoveEndDate</b> and <b> EndDate</b> in the same request.</p>
     */
    inline bool GetRemoveEndDate() const{ return m_removeEndDate; }

    /**
     * <p>Indicates whether to remove the end date from the Capacity Reservation Fleet.
     * If you remove the end date, the Capacity Reservation Fleet does not expire and
     * it remains active until you explicitly cancel it using the
     * <b>CancelCapacityReservationFleet</b> action.</p> <p>You can't specify
     * <b>RemoveEndDate</b> and <b> EndDate</b> in the same request.</p>
     */
    inline bool RemoveEndDateHasBeenSet() const { return m_removeEndDateHasBeenSet; }

    /**
     * <p>Indicates whether to remove the end date from the Capacity Reservation Fleet.
     * If you remove the end date, the Capacity Reservation Fleet does not expire and
     * it remains active until you explicitly cancel it using the
     * <b>CancelCapacityReservationFleet</b> action.</p> <p>You can't specify
     * <b>RemoveEndDate</b> and <b> EndDate</b> in the same request.</p>
     */
    inline void SetRemoveEndDate(bool value) { m_removeEndDateHasBeenSet = true; m_removeEndDate = value; }

    /**
     * <p>Indicates whether to remove the end date from the Capacity Reservation Fleet.
     * If you remove the end date, the Capacity Reservation Fleet does not expire and
     * it remains active until you explicitly cancel it using the
     * <b>CancelCapacityReservationFleet</b> action.</p> <p>You can't specify
     * <b>RemoveEndDate</b> and <b> EndDate</b> in the same request.</p>
     */
    inline ModifyCapacityReservationFleetRequest& WithRemoveEndDate(bool value) { SetRemoveEndDate(value); return *this;}

  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    int m_totalTargetCapacity;
    bool m_totalTargetCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_removeEndDate;
    bool m_removeEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
