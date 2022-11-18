/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/SnoozeAlarmActionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTSDATA_API BatchSnoozeAlarmRequest : public IoTEventsDataRequest
  {
  public:
    BatchSnoozeAlarmRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<BatchSnoozeAlarmRequest> Clone() const
    {
      return Aws::MakeUnique<BatchSnoozeAlarmRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchSnoozeAlarm"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline const Aws::Vector<SnoozeAlarmActionRequest>& GetSnoozeActionRequests() const{ return m_snoozeActionRequests; }

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline bool SnoozeActionRequestsHasBeenSet() const { return m_snoozeActionRequestsHasBeenSet; }

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline void SetSnoozeActionRequests(const Aws::Vector<SnoozeAlarmActionRequest>& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests = value; }

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline void SetSnoozeActionRequests(Aws::Vector<SnoozeAlarmActionRequest>&& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests = std::move(value); }

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline BatchSnoozeAlarmRequest& WithSnoozeActionRequests(const Aws::Vector<SnoozeAlarmActionRequest>& value) { SetSnoozeActionRequests(value); return *this;}

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline BatchSnoozeAlarmRequest& WithSnoozeActionRequests(Aws::Vector<SnoozeAlarmActionRequest>&& value) { SetSnoozeActionRequests(std::move(value)); return *this;}

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline BatchSnoozeAlarmRequest& AddSnoozeActionRequests(const SnoozeAlarmActionRequest& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests.push_back(value); return *this; }

    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline BatchSnoozeAlarmRequest& AddSnoozeActionRequests(SnoozeAlarmActionRequest&& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SnoozeAlarmActionRequest> m_snoozeActionRequests;
    bool m_snoozeActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
