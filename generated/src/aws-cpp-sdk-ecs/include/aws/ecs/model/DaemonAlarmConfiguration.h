/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>The CloudWatch alarm configuration for a daemon. When enabled, CloudWatch
 * alarms determine whether a daemon deployment has failed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonAlarmConfiguration">AWS
 * API Reference</a></p>
 */
class DaemonAlarmConfiguration {
 public:
  AWS_ECS_API DaemonAlarmConfiguration() = default;
  AWS_ECS_API DaemonAlarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonAlarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CloudWatch alarm names to monitor during a daemon deployment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAlarmNames() const { return m_alarmNames; }
  inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  void SetAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames = std::forward<AlarmNamesT>(value);
  }
  template <typename AlarmNamesT = Aws::Vector<Aws::String>>
  DaemonAlarmConfiguration& WithAlarmNames(AlarmNamesT&& value) {
    SetAlarmNames(std::forward<AlarmNamesT>(value));
    return *this;
  }
  template <typename AlarmNamesT = Aws::String>
  DaemonAlarmConfiguration& AddAlarmNames(AlarmNamesT&& value) {
    m_alarmNamesHasBeenSet = true;
    m_alarmNames.emplace_back(std::forward<AlarmNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether to use the CloudWatch alarm option in the daemon
   * deployment process. The default value is <code>false</code>.</p>
   */
  inline bool GetEnable() const { return m_enable; }
  inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
  inline void SetEnable(bool value) {
    m_enableHasBeenSet = true;
    m_enable = value;
  }
  inline DaemonAlarmConfiguration& WithEnable(bool value) {
    SetEnable(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_alarmNames;

  bool m_enable{false};
  bool m_alarmNamesHasBeenSet = false;
  bool m_enableHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
