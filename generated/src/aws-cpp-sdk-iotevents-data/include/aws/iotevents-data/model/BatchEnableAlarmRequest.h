/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/EnableAlarmActionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchEnableAlarmRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchEnableAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEnableAlarm"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of enable action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline const Aws::Vector<EnableAlarmActionRequest>& GetEnableActionRequests() const { return m_enableActionRequests; }
    inline bool EnableActionRequestsHasBeenSet() const { return m_enableActionRequestsHasBeenSet; }
    template<typename EnableActionRequestsT = Aws::Vector<EnableAlarmActionRequest>>
    void SetEnableActionRequests(EnableActionRequestsT&& value) { m_enableActionRequestsHasBeenSet = true; m_enableActionRequests = std::forward<EnableActionRequestsT>(value); }
    template<typename EnableActionRequestsT = Aws::Vector<EnableAlarmActionRequest>>
    BatchEnableAlarmRequest& WithEnableActionRequests(EnableActionRequestsT&& value) { SetEnableActionRequests(std::forward<EnableActionRequestsT>(value)); return *this;}
    template<typename EnableActionRequestsT = EnableAlarmActionRequest>
    BatchEnableAlarmRequest& AddEnableActionRequests(EnableActionRequestsT&& value) { m_enableActionRequestsHasBeenSet = true; m_enableActionRequests.emplace_back(std::forward<EnableActionRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EnableAlarmActionRequest> m_enableActionRequests;
    bool m_enableActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
