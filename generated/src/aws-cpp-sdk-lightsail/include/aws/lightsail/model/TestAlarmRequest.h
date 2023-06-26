/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AlarmState.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class TestAlarmRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API TestAlarmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestAlarm"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the alarm to test.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline TestAlarmRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline TestAlarmRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm to test.</p>
     */
    inline TestAlarmRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline const AlarmState& GetState() const{ return m_state; }

    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline void SetState(const AlarmState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline void SetState(AlarmState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline TestAlarmRequest& WithState(const AlarmState& value) { SetState(value); return *this;}

    /**
     * <p>The alarm state to test.</p> <p>An alarm has the following possible states
     * that can be tested:</p> <ul> <li> <p> <code>ALARM</code> - The metric is outside
     * of the defined threshold.</p> </li> <li> <p> <code>INSUFFICIENT_DATA</code> -
     * The alarm has just started, the metric is not available, or not enough data is
     * available for the metric to determine the alarm state.</p> </li> <li> <p>
     * <code>OK</code> - The metric is within the defined threshold.</p> </li> </ul>
     */
    inline TestAlarmRequest& WithState(AlarmState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    AlarmState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
