/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about alarms associated with a deployment or deployment
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AlarmConfiguration">AWS
   * API Reference</a></p>
   */
  class AlarmConfiguration
  {
  public:
    AWS_CODEDEPLOY_API AlarmConfiguration();
    AWS_CODEDEPLOY_API AlarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AlarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * value is false.</p> <ul> <li> <p> <code>true</code>: The deployment proceeds
     * even if alarm status information can't be retrieved from Amazon CloudWatch.</p>
     * </li> <li> <p> <code>false</code>: The deployment stops if alarm status
     * information can't be retrieved from Amazon CloudWatch.</p> </li> </ul>
     */
    inline bool GetIgnorePollAlarmFailure() const{ return m_ignorePollAlarmFailure; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p> <code>true</code>: The deployment proceeds
     * even if alarm status information can't be retrieved from Amazon CloudWatch.</p>
     * </li> <li> <p> <code>false</code>: The deployment stops if alarm status
     * information can't be retrieved from Amazon CloudWatch.</p> </li> </ul>
     */
    inline bool IgnorePollAlarmFailureHasBeenSet() const { return m_ignorePollAlarmFailureHasBeenSet; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p> <code>true</code>: The deployment proceeds
     * even if alarm status information can't be retrieved from Amazon CloudWatch.</p>
     * </li> <li> <p> <code>false</code>: The deployment stops if alarm status
     * information can't be retrieved from Amazon CloudWatch.</p> </li> </ul>
     */
    inline void SetIgnorePollAlarmFailure(bool value) { m_ignorePollAlarmFailureHasBeenSet = true; m_ignorePollAlarmFailure = value; }

    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p> <code>true</code>: The deployment proceeds
     * even if alarm status information can't be retrieved from Amazon CloudWatch.</p>
     * </li> <li> <p> <code>false</code>: The deployment stops if alarm status
     * information can't be retrieved from Amazon CloudWatch.</p> </li> </ul>
     */
    inline AlarmConfiguration& WithIgnorePollAlarmFailure(bool value) { SetIgnorePollAlarmFailure(value); return *this;}


    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline AlarmConfiguration& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline AlarmConfiguration& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline AlarmConfiguration& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline AlarmConfiguration& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_ignorePollAlarmFailure;
    bool m_ignorePollAlarmFailureHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
