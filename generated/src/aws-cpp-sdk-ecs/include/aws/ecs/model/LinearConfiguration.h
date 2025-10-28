/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>Configuration for linear deployment strategy that shifts production traffic
 * in equal percentage increments with configurable wait times between each step
 * until 100% of traffic is shifted to the new service revision. This is only valid
 * when you run <code>CreateService</code> or <code>UpdateService</code> with
 * <code>deploymentController</code> set to <code>ECS</code> and a
 * <code>deploymentConfiguration</code> with a strategy set to <code>LINEAR</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LinearConfiguration">AWS
 * API Reference</a></p>
 */
class LinearConfiguration {
 public:
  AWS_ECS_API LinearConfiguration() = default;
  AWS_ECS_API LinearConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API LinearConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percentage of production traffic to shift in each step during a linear
   * deployment. Valid values are 3.0 to 100.0. The default value is 10.0.</p>
   */
  inline double GetStepPercent() const { return m_stepPercent; }
  inline bool StepPercentHasBeenSet() const { return m_stepPercentHasBeenSet; }
  inline void SetStepPercent(double value) {
    m_stepPercentHasBeenSet = true;
    m_stepPercent = value;
  }
  inline LinearConfiguration& WithStepPercent(double value) {
    SetStepPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time in minutes to wait between each traffic shifting step
   * during a linear deployment. Valid values are 0 to 1440 minutes (24 hours). The
   * default value is 6. This bake time is not applied after reaching 100%
   * traffic.</p>
   */
  inline int GetStepBakeTimeInMinutes() const { return m_stepBakeTimeInMinutes; }
  inline bool StepBakeTimeInMinutesHasBeenSet() const { return m_stepBakeTimeInMinutesHasBeenSet; }
  inline void SetStepBakeTimeInMinutes(int value) {
    m_stepBakeTimeInMinutesHasBeenSet = true;
    m_stepBakeTimeInMinutes = value;
  }
  inline LinearConfiguration& WithStepBakeTimeInMinutes(int value) {
    SetStepBakeTimeInMinutes(value);
    return *this;
  }
  ///@}
 private:
  double m_stepPercent{0.0};
  bool m_stepPercentHasBeenSet = false;

  int m_stepBakeTimeInMinutes{0};
  bool m_stepBakeTimeInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
