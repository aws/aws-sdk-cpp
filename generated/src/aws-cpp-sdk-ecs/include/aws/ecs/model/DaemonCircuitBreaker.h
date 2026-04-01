/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Information about the circuit breaker used to determine when a daemon
 * deployment has failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonCircuitBreaker">AWS
 * API Reference</a></p>
 */
class DaemonCircuitBreaker {
 public:
  AWS_ECS_API DaemonCircuitBreaker() = default;
  AWS_ECS_API DaemonCircuitBreaker(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonCircuitBreaker& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of times the circuit breaker detected a daemon deployment
   * failure.</p>
   */
  inline int GetFailureCount() const { return m_failureCount; }
  inline bool FailureCountHasBeenSet() const { return m_failureCountHasBeenSet; }
  inline void SetFailureCount(int value) {
    m_failureCountHasBeenSet = true;
    m_failureCount = value;
  }
  inline DaemonCircuitBreaker& WithFailureCount(int value) {
    SetFailureCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The circuit breaker status. Amazon ECS is not using the circuit breaker for
   * daemon deployment failures when the status is <code>DISABLED</code>.</p>
   */
  inline DaemonDeploymentRollbackMonitorsStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonDeploymentRollbackMonitorsStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonCircuitBreaker& WithStatus(DaemonDeploymentRollbackMonitorsStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The threshold which determines that the daemon deployment failed.</p>
   */
  inline int GetThreshold() const { return m_threshold; }
  inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
  inline void SetThreshold(int value) {
    m_thresholdHasBeenSet = true;
    m_threshold = value;
  }
  inline DaemonCircuitBreaker& WithThreshold(int value) {
    SetThreshold(value);
    return *this;
  }
  ///@}
 private:
  int m_failureCount{0};

  DaemonDeploymentRollbackMonitorsStatus m_status{DaemonDeploymentRollbackMonitorsStatus::NOT_SET};

  int m_threshold{0};
  bool m_failureCountHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_thresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
