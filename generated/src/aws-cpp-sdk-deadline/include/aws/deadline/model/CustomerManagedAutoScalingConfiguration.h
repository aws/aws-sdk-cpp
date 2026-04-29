/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The auto scaling configuration settings for a customer managed
 * fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CustomerManagedAutoScalingConfiguration">AWS
 * API Reference</a></p>
 */
class CustomerManagedAutoScalingConfiguration {
 public:
  AWS_DEADLINE_API CustomerManagedAutoScalingConfiguration() = default;
  AWS_DEADLINE_API CustomerManagedAutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API CustomerManagedAutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of idle workers maintained and ready to process incoming tasks.
   * The default is 0.</p>
   */
  inline int GetStandbyWorkerCount() const { return m_standbyWorkerCount; }
  inline bool StandbyWorkerCountHasBeenSet() const { return m_standbyWorkerCountHasBeenSet; }
  inline void SetStandbyWorkerCount(int value) {
    m_standbyWorkerCountHasBeenSet = true;
    m_standbyWorkerCount = value;
  }
  inline CustomerManagedAutoScalingConfiguration& WithStandbyWorkerCount(int value) {
    SetStandbyWorkerCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds that a worker can remain idle before it is shut down.
   * The default is 300 seconds (5 minutes).</p>
   */
  inline int GetWorkerIdleDurationSeconds() const { return m_workerIdleDurationSeconds; }
  inline bool WorkerIdleDurationSecondsHasBeenSet() const { return m_workerIdleDurationSecondsHasBeenSet; }
  inline void SetWorkerIdleDurationSeconds(int value) {
    m_workerIdleDurationSecondsHasBeenSet = true;
    m_workerIdleDurationSeconds = value;
  }
  inline CustomerManagedAutoScalingConfiguration& WithWorkerIdleDurationSeconds(int value) {
    SetWorkerIdleDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of workers that can be added per minute to the fleet. The default
   * is 10 workers per minute.</p>
   */
  inline int GetScaleOutWorkersPerMinute() const { return m_scaleOutWorkersPerMinute; }
  inline bool ScaleOutWorkersPerMinuteHasBeenSet() const { return m_scaleOutWorkersPerMinuteHasBeenSet; }
  inline void SetScaleOutWorkersPerMinute(int value) {
    m_scaleOutWorkersPerMinuteHasBeenSet = true;
    m_scaleOutWorkersPerMinute = value;
  }
  inline CustomerManagedAutoScalingConfiguration& WithScaleOutWorkersPerMinute(int value) {
    SetScaleOutWorkersPerMinute(value);
    return *this;
  }
  ///@}
 private:
  int m_standbyWorkerCount{0};

  int m_workerIdleDurationSeconds{0};

  int m_scaleOutWorkersPerMinute{0};
  bool m_standbyWorkerCountHasBeenSet = false;
  bool m_workerIdleDurationSecondsHasBeenSet = false;
  bool m_scaleOutWorkersPerMinuteHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
