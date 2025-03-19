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
  class BatchSnoozeAlarmRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchSnoozeAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchSnoozeAlarm"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of snooze action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline const Aws::Vector<SnoozeAlarmActionRequest>& GetSnoozeActionRequests() const { return m_snoozeActionRequests; }
    inline bool SnoozeActionRequestsHasBeenSet() const { return m_snoozeActionRequestsHasBeenSet; }
    template<typename SnoozeActionRequestsT = Aws::Vector<SnoozeAlarmActionRequest>>
    void SetSnoozeActionRequests(SnoozeActionRequestsT&& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests = std::forward<SnoozeActionRequestsT>(value); }
    template<typename SnoozeActionRequestsT = Aws::Vector<SnoozeAlarmActionRequest>>
    BatchSnoozeAlarmRequest& WithSnoozeActionRequests(SnoozeActionRequestsT&& value) { SetSnoozeActionRequests(std::forward<SnoozeActionRequestsT>(value)); return *this;}
    template<typename SnoozeActionRequestsT = SnoozeAlarmActionRequest>
    BatchSnoozeAlarmRequest& AddSnoozeActionRequests(SnoozeActionRequestsT&& value) { m_snoozeActionRequestsHasBeenSet = true; m_snoozeActionRequests.emplace_back(std::forward<SnoozeActionRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnoozeAlarmActionRequest> m_snoozeActionRequests;
    bool m_snoozeActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
