/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonAlarmConfiguration.h>

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
 * <p>Optional deployment parameters that control how a daemon rolls out updates
 * across container instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonDeploymentConfiguration">AWS
 * API Reference</a></p>
 */
class DaemonDeploymentConfiguration {
 public:
  AWS_ECS_API DaemonDeploymentConfiguration() = default;
  AWS_ECS_API DaemonDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percentage of container instances to drain simultaneously during a daemon
   * deployment. Valid values are between 0.0 and 100.0.</p>
   */
  inline double GetDrainPercent() const { return m_drainPercent; }
  inline bool DrainPercentHasBeenSet() const { return m_drainPercentHasBeenSet; }
  inline void SetDrainPercent(double value) {
    m_drainPercentHasBeenSet = true;
    m_drainPercent = value;
  }
  inline DaemonDeploymentConfiguration& WithDrainPercent(double value) {
    SetDrainPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch alarm configuration for the daemon deployment. When alarms are
   * triggered during a deployment, the deployment can be automatically rolled
   * back.</p>
   */
  inline const DaemonAlarmConfiguration& GetAlarms() const { return m_alarms; }
  inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
  template <typename AlarmsT = DaemonAlarmConfiguration>
  void SetAlarms(AlarmsT&& value) {
    m_alarmsHasBeenSet = true;
    m_alarms = std::forward<AlarmsT>(value);
  }
  template <typename AlarmsT = DaemonAlarmConfiguration>
  DaemonDeploymentConfiguration& WithAlarms(AlarmsT&& value) {
    SetAlarms(std::forward<AlarmsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time (in minutes) to wait after a successful deployment step
   * before proceeding. This allows time to monitor for issues before continuing. The
   * default value is 0.</p>
   */
  inline int GetBakeTimeInMinutes() const { return m_bakeTimeInMinutes; }
  inline bool BakeTimeInMinutesHasBeenSet() const { return m_bakeTimeInMinutesHasBeenSet; }
  inline void SetBakeTimeInMinutes(int value) {
    m_bakeTimeInMinutesHasBeenSet = true;
    m_bakeTimeInMinutes = value;
  }
  inline DaemonDeploymentConfiguration& WithBakeTimeInMinutes(int value) {
    SetBakeTimeInMinutes(value);
    return *this;
  }
  ///@}
 private:
  double m_drainPercent{0.0};

  DaemonAlarmConfiguration m_alarms;

  int m_bakeTimeInMinutes{0};
  bool m_drainPercentHasBeenSet = false;
  bool m_alarmsHasBeenSet = false;
  bool m_bakeTimeInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
