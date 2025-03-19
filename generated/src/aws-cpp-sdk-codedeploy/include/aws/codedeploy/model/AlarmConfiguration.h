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
    AWS_CODEDEPLOY_API AlarmConfiguration() = default;
    AWS_CODEDEPLOY_API AlarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API AlarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the alarm configuration is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AlarmConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a deployment should continue if information about the
     * current state of alarms cannot be retrieved from Amazon CloudWatch. The default
     * value is false.</p> <ul> <li> <p> <code>true</code>: The deployment proceeds
     * even if alarm status information can't be retrieved from Amazon CloudWatch.</p>
     * </li> <li> <p> <code>false</code>: The deployment stops if alarm status
     * information can't be retrieved from Amazon CloudWatch.</p> </li> </ul>
     */
    inline bool GetIgnorePollAlarmFailure() const { return m_ignorePollAlarmFailure; }
    inline bool IgnorePollAlarmFailureHasBeenSet() const { return m_ignorePollAlarmFailureHasBeenSet; }
    inline void SetIgnorePollAlarmFailure(bool value) { m_ignorePollAlarmFailureHasBeenSet = true; m_ignorePollAlarmFailure = value; }
    inline AlarmConfiguration& WithIgnorePollAlarmFailure(bool value) { SetIgnorePollAlarmFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of alarms configured for the deployment or deployment group. A maximum
     * of 10 alarms can be added.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    AlarmConfiguration& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    template<typename AlarmsT = Alarm>
    AlarmConfiguration& AddAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms.emplace_back(std::forward<AlarmsT>(value)); return *this; }
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_ignorePollAlarmFailure{false};
    bool m_ignorePollAlarmFailureHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
