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
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class DescribeAlarmModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API DescribeAlarmModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarmModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;

    AWS_IOTEVENTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }
    inline DescribeAlarmModelRequest& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}
    inline DescribeAlarmModelRequest& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}
    inline DescribeAlarmModelRequest& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const{ return m_alarmModelVersion; }
    inline bool AlarmModelVersionHasBeenSet() const { return m_alarmModelVersionHasBeenSet; }
    inline void SetAlarmModelVersion(const Aws::String& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = value; }
    inline void SetAlarmModelVersion(Aws::String&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::move(value); }
    inline void SetAlarmModelVersion(const char* value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion.assign(value); }
    inline DescribeAlarmModelRequest& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}
    inline DescribeAlarmModelRequest& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}
    inline DescribeAlarmModelRequest& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
