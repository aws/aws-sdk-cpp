/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/EndDateType.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyCapacityReservationRequest : public EC2Request
  {
  public:
    ModifyCapacityReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCapacityReservation"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline ModifyCapacityReservationRequest& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline ModifyCapacityReservationRequest& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Capacity Reservation.</p>
     */
    inline ModifyCapacityReservationRequest& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances for which to reserve capacity.</p>
     */
    inline ModifyCapacityReservationRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline ModifyCapacityReservationRequest& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The date and time at which the Capacity Reservation expires. When a Capacity
     * Reservation expires, the reserved capacity is released and you can no longer
     * launch instances into it. The Capacity Reservation's state changes to
     * <code>expired</code> when it reaches its end date and time.</p> <p>The Capacity
     * Reservation is cancelled within an hour from the specified time. For example, if
     * you specify 5/31/2019, 13:30:55, the Capacity Reservation is guaranteed to end
     * between 13:30:55 and 14:30:55 on 5/31/2019.</p> <p>You must provide an
     * <code>EndDate</code> value if <code>EndDateType</code> is <code>limited</code>.
     * Omit <code>EndDate</code> if <code>EndDateType</code> is
     * <code>unlimited</code>.</p>
     */
    inline ModifyCapacityReservationRequest& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline const EndDateType& GetEndDateType() const{ return m_endDateType; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline void SetEndDateType(const EndDateType& value) { m_endDateTypeHasBeenSet = true; m_endDateType = value; }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline void SetEndDateType(EndDateType&& value) { m_endDateTypeHasBeenSet = true; m_endDateType = std::move(value); }

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline ModifyCapacityReservationRequest& WithEndDateType(const EndDateType& value) { SetEndDateType(value); return *this;}

    /**
     * <p>Indicates the way in which the Capacity Reservation ends. A Capacity
     * Reservation can have one of the following end types:</p> <ul> <li> <p>
     * <code>unlimited</code> - The Capacity Reservation remains active until you
     * explicitly cancel it. Do not provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>unlimited</code>.</p> </li> <li> <p>
     * <code>limited</code> - The Capacity Reservation expires automatically at a
     * specified date and time. You must provide an <code>EndDate</code> value if
     * <code>EndDateType</code> is <code>limited</code>.</p> </li> </ul>
     */
    inline ModifyCapacityReservationRequest& WithEndDateType(EndDateType&& value) { SetEndDateType(std::move(value)); return *this;}


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
    inline ModifyCapacityReservationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet;

    EndDateType m_endDateType;
    bool m_endDateTypeHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
