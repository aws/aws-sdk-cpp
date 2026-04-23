/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action that updates a CloudWatch alarm.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CloudwatchAlarmAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API CloudwatchAlarmAction
  {
  public:
    CloudwatchAlarmAction();
    CloudwatchAlarmAction(Aws::Utils::Json::JsonView jsonValue);
    CloudwatchAlarmAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline CloudwatchAlarmAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline CloudwatchAlarmAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that allows access to the CloudWatch alarm.</p>
     */
    inline CloudwatchAlarmAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline CloudwatchAlarmAction& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline CloudwatchAlarmAction& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarm name.</p>
     */
    inline CloudwatchAlarmAction& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The reason for the alarm change.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline CloudwatchAlarmAction& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline CloudwatchAlarmAction& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the alarm change.</p>
     */
    inline CloudwatchAlarmAction& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline const Aws::String& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline void SetStateValue(const Aws::String& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline void SetStateValue(Aws::String&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline void SetStateValue(const char* value) { m_stateValueHasBeenSet = true; m_stateValue.assign(value); }

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline CloudwatchAlarmAction& WithStateValue(const Aws::String& value) { SetStateValue(value); return *this;}

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline CloudwatchAlarmAction& WithStateValue(Aws::String&& value) { SetStateValue(std::move(value)); return *this;}

    /**
     * <p>The value of the alarm state. Acceptable values are: OK, ALARM,
     * INSUFFICIENT_DATA.</p>
     */
    inline CloudwatchAlarmAction& WithStateValue(const char* value) { SetStateValue(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::String m_stateValue;
    bool m_stateValueHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
