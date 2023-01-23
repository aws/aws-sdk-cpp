/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CancelCapacityReservationFleetsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelCapacityReservationFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelCapacityReservationFleets"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline CancelCapacityReservationFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityReservationFleetIds() const{ return m_capacityReservationFleetIds; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline bool CapacityReservationFleetIdsHasBeenSet() const { return m_capacityReservationFleetIdsHasBeenSet; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline void SetCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = value; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline void SetCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds = std::move(value); }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline CancelCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(const Aws::Vector<Aws::String>& value) { SetCapacityReservationFleetIds(value); return *this;}

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline CancelCapacityReservationFleetsRequest& WithCapacityReservationFleetIds(Aws::Vector<Aws::String>&& value) { SetCapacityReservationFleetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline CancelCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const Aws::String& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline CancelCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(Aws::String&& value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Capacity Reservation Fleets to cancel.</p>
     */
    inline CancelCapacityReservationFleetsRequest& AddCapacityReservationFleetIds(const char* value) { m_capacityReservationFleetIdsHasBeenSet = true; m_capacityReservationFleetIds.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityReservationFleetIds;
    bool m_capacityReservationFleetIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
