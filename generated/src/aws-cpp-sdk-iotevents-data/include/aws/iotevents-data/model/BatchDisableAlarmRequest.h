/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/DisableAlarmActionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchDisableAlarmRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchDisableAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisableAlarm"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of disable action requests. You can specify up to 10 requests per
     * operation.</p>
     */
    inline const Aws::Vector<DisableAlarmActionRequest>& GetDisableActionRequests() const { return m_disableActionRequests; }
    inline bool DisableActionRequestsHasBeenSet() const { return m_disableActionRequestsHasBeenSet; }
    template<typename DisableActionRequestsT = Aws::Vector<DisableAlarmActionRequest>>
    void SetDisableActionRequests(DisableActionRequestsT&& value) { m_disableActionRequestsHasBeenSet = true; m_disableActionRequests = std::forward<DisableActionRequestsT>(value); }
    template<typename DisableActionRequestsT = Aws::Vector<DisableAlarmActionRequest>>
    BatchDisableAlarmRequest& WithDisableActionRequests(DisableActionRequestsT&& value) { SetDisableActionRequests(std::forward<DisableActionRequestsT>(value)); return *this;}
    template<typename DisableActionRequestsT = DisableAlarmActionRequest>
    BatchDisableAlarmRequest& AddDisableActionRequests(DisableActionRequestsT&& value) { m_disableActionRequestsHasBeenSet = true; m_disableActionRequests.emplace_back(std::forward<DisableActionRequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DisableAlarmActionRequest> m_disableActionRequests;
    bool m_disableActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
