/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/PriorityBalancedSchedulingConfiguration.h>
#include <aws/deadline/model/PriorityFifoSchedulingConfiguration.h>
#include <aws/deadline/model/WeightedBalancedSchedulingConfiguration.h>

#include <utility>

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
 * <p>The scheduling configuration for a queue. Defines the strategy used to assign
 * workers to jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SchedulingConfiguration">AWS
 * API Reference</a></p>
 */
class SchedulingConfiguration {
 public:
  AWS_DEADLINE_API SchedulingConfiguration() = default;
  AWS_DEADLINE_API SchedulingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SchedulingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Workers are assigned to the highest-priority job first. When multiple jobs
   * share the same priority, the job submitted earliest receives workers first. This
   * is the default scheduling configuration for new queues.</p>
   */
  inline const PriorityFifoSchedulingConfiguration& GetPriorityFifo() const { return m_priorityFifo; }
  inline bool PriorityFifoHasBeenSet() const { return m_priorityFifoHasBeenSet; }
  template <typename PriorityFifoT = PriorityFifoSchedulingConfiguration>
  void SetPriorityFifo(PriorityFifoT&& value) {
    m_priorityFifoHasBeenSet = true;
    m_priorityFifo = std::forward<PriorityFifoT>(value);
  }
  template <typename PriorityFifoT = PriorityFifoSchedulingConfiguration>
  SchedulingConfiguration& WithPriorityFifo(PriorityFifoT&& value) {
    SetPriorityFifo(std::forward<PriorityFifoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Workers are distributed evenly across all jobs at the highest priority level.
   * When workers cannot be evenly divided, the extra workers are assigned to the
   * jobs submitted earliest. If a job has fewer remaining tasks than its share of
   * workers, the surplus workers are redistributed to other jobs at the same
   * priority level.</p>
   */
  inline const PriorityBalancedSchedulingConfiguration& GetPriorityBalanced() const { return m_priorityBalanced; }
  inline bool PriorityBalancedHasBeenSet() const { return m_priorityBalancedHasBeenSet; }
  template <typename PriorityBalancedT = PriorityBalancedSchedulingConfiguration>
  void SetPriorityBalanced(PriorityBalancedT&& value) {
    m_priorityBalancedHasBeenSet = true;
    m_priorityBalanced = std::forward<PriorityBalancedT>(value);
  }
  template <typename PriorityBalancedT = PriorityBalancedSchedulingConfiguration>
  SchedulingConfiguration& WithPriorityBalanced(PriorityBalancedT&& value) {
    SetPriorityBalanced(std::forward<PriorityBalancedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Workers are assigned to jobs based on a weighted formula that considers job
   * priority, error count, submission time, and the number of tasks currently
   * rendering. Each factor has a configurable weight that determines its influence
   * on scheduling decisions.</p>
   */
  inline const WeightedBalancedSchedulingConfiguration& GetWeightedBalanced() const { return m_weightedBalanced; }
  inline bool WeightedBalancedHasBeenSet() const { return m_weightedBalancedHasBeenSet; }
  template <typename WeightedBalancedT = WeightedBalancedSchedulingConfiguration>
  void SetWeightedBalanced(WeightedBalancedT&& value) {
    m_weightedBalancedHasBeenSet = true;
    m_weightedBalanced = std::forward<WeightedBalancedT>(value);
  }
  template <typename WeightedBalancedT = WeightedBalancedSchedulingConfiguration>
  SchedulingConfiguration& WithWeightedBalanced(WeightedBalancedT&& value) {
    SetWeightedBalanced(std::forward<WeightedBalancedT>(value));
    return *this;
  }
  ///@}
 private:
  PriorityFifoSchedulingConfiguration m_priorityFifo;

  PriorityBalancedSchedulingConfiguration m_priorityBalanced;

  WeightedBalancedSchedulingConfiguration m_weightedBalanced;
  bool m_priorityFifoHasBeenSet = false;
  bool m_priorityBalancedHasBeenSet = false;
  bool m_weightedBalancedHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
