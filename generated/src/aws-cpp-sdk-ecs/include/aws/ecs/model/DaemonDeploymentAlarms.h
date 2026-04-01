/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonDeploymentRollbackMonitorsStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The CloudWatch alarms used to determine a daemon deployment
 * failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeploymentAlarms">AWS
 * API Reference</a></p>
 */
class DaemonDeploymentAlarms {
 public:
  AWS_ECS_API DaemonDeploymentAlarms() = default;
  AWS_ECS_API DaemonDeploymentAlarms(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeploymentAlarms& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the alarms check. Amazon ECS is not using alarms for daemon
   * deployment failures when the status is <code>DISABLED</code>.</p>
   */
  inline DaemonDeploymentRollbackMonitorsStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonDeploymentRollbackMonitorsStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonDeploymentAlarms& WithStatus(DaemonDeploymentRollbackMonitorsStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch alarms that determine when a daemon deployment
   * failed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlarmNames() const { return m_alarmNames; }
  inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  void SetAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames = std::forward<AlarmNamesT>(value);
  }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  DaemonDeploymentAlarms& WithAlarmNames(AlarmNamesT&& value) {
    SetAlarmNames(std::forward<AlarmNamesT>(value));
    return *this;
  }
  template <typename AlarmNamesT = Aws::String>
  DaemonDeploymentAlarms& AddAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames.emplace_back(std::forward<AlarmNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more CloudWatch alarm names that have been triggered during the daemon
   * deployment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTriggeredAlarmNames() const { return m_triggeredAlarmNames; }
  inline bool TriggeredAlarmNamesHasBeenSet() const { return m_triggeredAlarmNamesHasBeenSet; }
  template <typename TriggeredAlarmNamesT = Aws::Vector<Aws::String>>
  void SetTriggeredAlarmNames(TriggeredAlarmNamesT&& value) {
    m_triggeredAlarmNamesHasBeenSet = true;
    m_triggeredAlarmNames = std::forward<TriggeredAlarmNamesT>(value);
  }
  template <typename TriggeredAlarmNamesT = Aws::Vector<Aws::String>>
  DaemonDeploymentAlarms& WithTriggeredAlarmNames(TriggeredAlarmNamesT&& value) {
    SetTriggeredAlarmNames(std::forward<TriggeredAlarmNamesT>(value));
    return *this;
  }
  template <typename TriggeredAlarmNamesT = Aws::String>
  DaemonDeploymentAlarms& AddTriggeredAlarmNames(TriggeredAlarmNamesT&& value) {
    m_triggeredAlarmNamesHasBeenSet = true;
    m_triggeredAlarmNames.emplace_back(std::forward<TriggeredAlarmNamesT>(value));
    return *this;
  }
  ///@}
 private:
  DaemonDeploymentRollbackMonitorsStatus m_status{DaemonDeploymentRollbackMonitorsStatus::NOT_SET};

  Aws::Vector<Aws::String> m_alarmNames;

  Aws::Vector<Aws::String> m_triggeredAlarmNames;
  bool m_statusHasBeenSet = false;
  bool m_alarmNamesHasBeenSet = false;
  bool m_triggeredAlarmNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
