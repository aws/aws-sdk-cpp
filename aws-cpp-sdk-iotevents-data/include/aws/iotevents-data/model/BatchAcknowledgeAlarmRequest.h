/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/iotevents-data/IoTEventsDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/AcknowledgeAlarmActionRequest.h>
#include <utility>

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

  /**
   */
  class BatchAcknowledgeAlarmRequest : public IoTEventsDataRequest
  {
  public:
    AWS_IOTEVENTSDATA_API BatchAcknowledgeAlarmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAcknowledgeAlarm"; }

    AWS_IOTEVENTSDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline const Aws::Vector<AcknowledgeAlarmActionRequest>& GetAcknowledgeActionRequests() const{ return m_acknowledgeActionRequests; }

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline bool AcknowledgeActionRequestsHasBeenSet() const { return m_acknowledgeActionRequestsHasBeenSet; }

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline void SetAcknowledgeActionRequests(const Aws::Vector<AcknowledgeAlarmActionRequest>& value) { m_acknowledgeActionRequestsHasBeenSet = true; m_acknowledgeActionRequests = value; }

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline void SetAcknowledgeActionRequests(Aws::Vector<AcknowledgeAlarmActionRequest>&& value) { m_acknowledgeActionRequestsHasBeenSet = true; m_acknowledgeActionRequests = std::move(value); }

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline BatchAcknowledgeAlarmRequest& WithAcknowledgeActionRequests(const Aws::Vector<AcknowledgeAlarmActionRequest>& value) { SetAcknowledgeActionRequests(value); return *this;}

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline BatchAcknowledgeAlarmRequest& WithAcknowledgeActionRequests(Aws::Vector<AcknowledgeAlarmActionRequest>&& value) { SetAcknowledgeActionRequests(std::move(value)); return *this;}

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline BatchAcknowledgeAlarmRequest& AddAcknowledgeActionRequests(const AcknowledgeAlarmActionRequest& value) { m_acknowledgeActionRequestsHasBeenSet = true; m_acknowledgeActionRequests.push_back(value); return *this; }

    /**
     * <p>The list of acknowledge action requests. You can specify up to 10 requests
     * per operation.</p>
     */
    inline BatchAcknowledgeAlarmRequest& AddAcknowledgeActionRequests(AcknowledgeAlarmActionRequest&& value) { m_acknowledgeActionRequestsHasBeenSet = true; m_acknowledgeActionRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AcknowledgeAlarmActionRequest> m_acknowledgeActionRequests;
    bool m_acknowledgeActionRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
