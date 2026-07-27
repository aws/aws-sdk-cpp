/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRContainers {
namespace Model {

/**
 * <p>The current job-run counts for a virtual cluster, reflecting how much of the
 * configured scheduler capacity is in use.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SchedulerStatus">AWS
 * API Reference</a></p>
 */
class SchedulerStatus {
 public:
  AWS_EMRCONTAINERS_API SchedulerStatus() = default;
  AWS_EMRCONTAINERS_API SchedulerStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API SchedulerStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of job runs currently waiting in the queue (<code>PENDING</code>
   * or <code>SUBMITTED</code>) for the virtual cluster.</p>
   */
  inline int GetCurrentInQueueJobRuns() const { return m_currentInQueueJobRuns; }
  inline bool CurrentInQueueJobRunsHasBeenSet() const { return m_currentInQueueJobRunsHasBeenSet; }
  inline void SetCurrentInQueueJobRuns(int value) {
    m_currentInQueueJobRunsHasBeenSet = true;
    m_currentInQueueJobRuns = value;
  }
  inline SchedulerStatus& WithCurrentInQueueJobRuns(int value) {
    SetCurrentInQueueJobRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of job runs currently in the <code>RUNNING</code> state for the
   * virtual cluster.</p>
   */
  inline int GetCurrentConcurrentJobRuns() const { return m_currentConcurrentJobRuns; }
  inline bool CurrentConcurrentJobRunsHasBeenSet() const { return m_currentConcurrentJobRunsHasBeenSet; }
  inline void SetCurrentConcurrentJobRuns(int value) {
    m_currentConcurrentJobRunsHasBeenSet = true;
    m_currentConcurrentJobRuns = value;
  }
  inline SchedulerStatus& WithCurrentConcurrentJobRuns(int value) {
    SetCurrentConcurrentJobRuns(value);
    return *this;
  }
  ///@}
 private:
  int m_currentInQueueJobRuns{0};

  int m_currentConcurrentJobRuns{0};
  bool m_currentInQueueJobRunsHasBeenSet = false;
  bool m_currentConcurrentJobRunsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
