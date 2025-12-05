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
 * <p>Configuration for a canary deployment strategy that shifts a fixed percentage
 * of traffic to the new service revision, waits for a specified bake time, then
 * shifts the remaining traffic. </p> <p>This is only valid when you run
 * <code>CreateService</code> or <code>UpdateService</code> with
 * <code>deploymentController</code> set to <code>ECS</code> and a
 * <code>deploymentConfiguration</code> with a strategy set to <code>CANARY</code>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CanaryConfiguration">AWS
 * API Reference</a></p>
 */
class CanaryConfiguration {
 public:
  AWS_ECS_API CanaryConfiguration() = default;
  AWS_ECS_API CanaryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API CanaryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The percentage of production traffic to shift to the new service revision
   * during the canary phase. Valid values are multiples of 0.1 from 0.1 to 100.0.
   * The default value is 5.0.</p>
   */
  inline double GetCanaryPercent() const { return m_canaryPercent; }
  inline bool CanaryPercentHasBeenSet() const { return m_canaryPercentHasBeenSet; }
  inline void SetCanaryPercent(double value) {
    m_canaryPercentHasBeenSet = true;
    m_canaryPercent = value;
  }
  inline CanaryConfiguration& WithCanaryPercent(double value) {
    SetCanaryPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time in minutes to wait during the canary phase before shifting
   * the remaining production traffic to the new service revision. Valid values are 0
   * to 1440 minutes (24 hours). The default value is 10.</p>
   */
  inline int GetCanaryBakeTimeInMinutes() const { return m_canaryBakeTimeInMinutes; }
  inline bool CanaryBakeTimeInMinutesHasBeenSet() const { return m_canaryBakeTimeInMinutesHasBeenSet; }
  inline void SetCanaryBakeTimeInMinutes(int value) {
    m_canaryBakeTimeInMinutesHasBeenSet = true;
    m_canaryBakeTimeInMinutes = value;
  }
  inline CanaryConfiguration& WithCanaryBakeTimeInMinutes(int value) {
    SetCanaryBakeTimeInMinutes(value);
    return *this;
  }
  ///@}
 private:
  double m_canaryPercent{0.0};

  int m_canaryBakeTimeInMinutes{0};
  bool m_canaryPercentHasBeenSet = false;
  bool m_canaryBakeTimeInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
