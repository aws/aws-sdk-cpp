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
 * <p>The scheduler configuration for a virtual cluster on Amazon EMR on EKS. It
 * controls how many job runs can run concurrently and how many can wait in the
 * queue. When not set, no concurrency or queue limits are applied.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/SchedulerConfiguration">AWS
 * API Reference</a></p>
 */
class SchedulerConfiguration {
 public:
  AWS_EMRCONTAINERS_API SchedulerConfiguration() = default;
  AWS_EMRCONTAINERS_API SchedulerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API SchedulerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of job runs that can be in the <code>PENDING</code> or
   * <code>SUBMITTED</code> state at any time for the virtual cluster. When the queue
   * is full, the service rejects <code>StartJobRun</code> requests with a
   * <code>ValidationException</code>. If you omit this field, the service applies no
   * queue-depth limit.</p>
   */
  inline int GetMaxInQueueJobRuns() const { return m_maxInQueueJobRuns; }
  inline bool MaxInQueueJobRunsHasBeenSet() const { return m_maxInQueueJobRunsHasBeenSet; }
  inline void SetMaxInQueueJobRuns(int value) {
    m_maxInQueueJobRunsHasBeenSet = true;
    m_maxInQueueJobRuns = value;
  }
  inline SchedulerConfiguration& WithMaxInQueueJobRuns(int value) {
    SetMaxInQueueJobRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of job runs that can be in the <code>RUNNING</code> state
   * at any time for the virtual cluster. As running slots free up, queued job runs
   * start automatically. If you omit this field, the service applies no concurrency
   * limit.</p>
   */
  inline int GetMaxConcurrentJobRuns() const { return m_maxConcurrentJobRuns; }
  inline bool MaxConcurrentJobRunsHasBeenSet() const { return m_maxConcurrentJobRunsHasBeenSet; }
  inline void SetMaxConcurrentJobRuns(int value) {
    m_maxConcurrentJobRunsHasBeenSet = true;
    m_maxConcurrentJobRuns = value;
  }
  inline SchedulerConfiguration& WithMaxConcurrentJobRuns(int value) {
    SetMaxConcurrentJobRuns(value);
    return *this;
  }
  ///@}
 private:
  int m_maxInQueueJobRuns{0};

  int m_maxConcurrentJobRuns{0};
  bool m_maxInQueueJobRunsHasBeenSet = false;
  bool m_maxConcurrentJobRunsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
