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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Alarm.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about alarms associated with the deployment group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AlarmConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API AlarmConfiguration
  {
  public:
    AlarmConfiguration();
    AlarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AlarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the alarm configuration is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the alarm configuration is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the alarm configuration is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the alarm configuration is enabled.</p>
     */
    inline AlarmConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p>true: The deployment proceeds even if alarm
     * status information can't be retrieved from Amazon CloudWatch.</p> </li> <li>
     * <p>false: The deployment stops if alarm status information can't be retrieved
     * from Amazon CloudWatch.</p> </li> </ul>
     */
    inline bool GetIgnorePollAlarmFailure() const{ return m_ignorePollAlarmFailure; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p>true: The deployment proceeds even if alarm
     * status information can't be retrieved from Amazon CloudWatch.</p> </li> <li>
     * <p>false: The deployment stops if alarm status information can't be retrieved
     * from Amazon CloudWatch.</p> </li> </ul>
     */
    inline bool IgnorePollAlarmFailureHasBeenSet() const { return m_ignorePollAlarmFailureHasBeenSet; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p>true: The deployment proceeds even if alarm
     * status information can't be retrieved from Amazon CloudWatch.</p> </li> <li>
     * <p>false: The deployment stops if alarm status information can't be retrieved
     * from Amazon CloudWatch.</p> </li> </ul>
     */
    inline void SetIgnorePollAlarmFailure(bool value) { m_ignorePollAlarmFailureHasBeenSet = true; m_ignorePollAlarmFailure = value; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p>true: The deployment proceeds even if alarm
     * status information can't be retrieved from Amazon CloudWatch.</p> </li> <li>
     * <p>false: The deployment stops if alarm status information can't be retrieved
     * from Amazon CloudWatch.</p> </li> </ul>
     */
    inline AlarmConfiguration& WithIgnorePollAlarmFailure(bool value) { SetIgnorePollAlarmFailure(value); return *this;}


    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline AlarmConfiguration& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline AlarmConfiguration& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline AlarmConfiguration& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>A list of alarms configured for the deployment group. A maximum of 10 alarms
     * can be added to a deployment group.</p>
     */
    inline AlarmConfiguration& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;

    bool m_ignorePollAlarmFailure;
    bool m_ignorePollAlarmFailureHasBeenSet;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
