/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class DeleteAlarmModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DeleteAlarmModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlarmModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DeleteAlarmModelRequest& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DeleteAlarmModelRequest& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline DeleteAlarmModelRequest& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}

  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
