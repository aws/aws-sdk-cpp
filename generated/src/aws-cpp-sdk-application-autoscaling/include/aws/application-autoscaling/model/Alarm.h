/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a CloudWatch alarm associated with a scaling policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/Alarm">AWS
   * API Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API Alarm();
    AWS_APPLICATIONAUTOSCALING_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }
    inline Alarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}
    inline Alarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}
    inline Alarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmARN() const{ return m_alarmARN; }
    inline bool AlarmARNHasBeenSet() const { return m_alarmARNHasBeenSet; }
    inline void SetAlarmARN(const Aws::String& value) { m_alarmARNHasBeenSet = true; m_alarmARN = value; }
    inline void SetAlarmARN(Aws::String&& value) { m_alarmARNHasBeenSet = true; m_alarmARN = std::move(value); }
    inline void SetAlarmARN(const char* value) { m_alarmARNHasBeenSet = true; m_alarmARN.assign(value); }
    inline Alarm& WithAlarmARN(const Aws::String& value) { SetAlarmARN(value); return *this;}
    inline Alarm& WithAlarmARN(Aws::String&& value) { SetAlarmARN(std::move(value)); return *this;}
    inline Alarm& WithAlarmARN(const char* value) { SetAlarmARN(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmARN;
    bool m_alarmARNHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
