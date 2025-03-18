/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/ResetAlarmActionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchResetAlarmRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchResetAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchResetAlarm"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of reset action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline const Aws::Vector<ResetAlarmActionRequest>& GetResetActionRequests() const { return m_resetActionRequests; }
    inline bool ResetActionRequestsHasBeenSet() const { return m_resetActionRequestsHasBeenSet; }
    template<typename ResetActionRequestsT = Aws::Vector<ResetAlarmActionRequest>>
    void SetResetActionRequests(ResetActionRequestsT&& value) { m_resetActionRequestsHasBeenSet = true; m_resetActionRequests = std::forward<ResetActionRequestsT>(value); }
    template<typename ResetActionRequestsT = Aws::Vector<ResetAlarmActionRequest>>
    BatchResetAlarmRequest& WithResetActionRequests(ResetActionRequestsT&& value) { SetResetActionRequests(std::forward<ResetActionRequestsT>(value)); return *this;}
    template<typename ResetActionRequestsT = ResetAlarmActionRequest>
    BatchResetAlarmRequest& AddResetActionRequests(ResetActionRequestsT&& value) { m_resetActionRequestsHasBeenSet = true; m_resetActionRequests.emplace_back(std::forward<ResetActionRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResetAlarmActionRequest> m_resetActionRequests;
    bool m_resetActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
