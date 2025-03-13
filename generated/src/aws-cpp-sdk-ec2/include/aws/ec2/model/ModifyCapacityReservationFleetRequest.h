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
    AWS_EC2_API ModifyCapacityReservationFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCapacityReservationFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Capacity Reservation Fleet to modify.</p>
     */
    inline const Aws::String& GetCapacityReservationFleetId() const { return m_capacityReservationFleetId; }
    inline bool CapacityReservationFleetIdHasBeenSet() const { return m_capacityReservationFleetIdHasBeenSet; }
    template<typename CapacityReservationFleetIdT = Aws::String>
    void SetCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { m_capacityReservationFleetIdHasBeenSet = true; m_capacityReservationFleetId = std::forward<CapacityReservationFleetIdT>(value); }
    template<typename CapacityReservationFleetIdT = Aws::String>
    ModifyCapacityReservationFleetRequest& WithCapacityReservationFleetId(CapacityReservationFleetIdT&& value) { SetCapacityReservationFleetId(std::forward<CapacityReservationFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of capacity units to be reserved by the Capacity Reservation
     * Fleet. This value, together with the instance type weights that you assign to
     * each instance type used by the Fleet determine the number of instances for which
     * the Fleet reserves capacity. Both values are based on units that make sense for
     * your workload. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/crfleet-concepts.html#target-capacity">Total
     * target capacity</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline int GetTotalTargetCapacity() const { return m_totalTargetCapacity; }
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }
    inline ModifyCapacityReservationFleetRequest& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    ModifyCapacityReservationFleetRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
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
    inline ModifyCapacityReservationFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to remove the end date from the Capacity Reservation Fleet.
     * If you remove the end date, the Capacity Reservation Fleet does not expire and
     * it remains active until you explicitly cancel it using the
     * <b>CancelCapacityReservationFleet</b> action.</p> <p>You can't specify
     * <b>RemoveEndDate</b> and <b> EndDate</b> in the same request.</p>
     */
    inline bool GetRemoveEndDate() const { return m_removeEndDate; }
    inline bool RemoveEndDateHasBeenSet() const { return m_removeEndDateHasBeenSet; }
    inline void SetRemoveEndDate(bool value) { m_removeEndDateHasBeenSet = true; m_removeEndDate = value; }
    inline ModifyCapacityReservationFleetRequest& WithRemoveEndDate(bool value) { SetRemoveEndDate(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationFleetId;
    bool m_capacityReservationFleetIdHasBeenSet = false;

    int m_totalTargetCapacity{0};
    bool m_totalTargetCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_removeEndDate{false};
    bool m_removeEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
