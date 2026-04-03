/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SchedulingMaxPriorityOverride.h>
#include <aws/deadline/model/SchedulingMinPriorityOverride.h>

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
 * <p>Configuration for weighted balanced scheduling. Workers are assigned to jobs
 * based on a weighted formula:</p> <p> <code>weight = (priority * priorityWeight)
 * + (errors * errorWeight) + ((currentTime - submissionTime) *
 * submissionTimeWeight) + ((renderingTasks - renderingTaskBuffer) *
 * renderingTaskWeight)</code> </p> <p>The job with the highest calculated weight
 * is scheduled first. Workers are distributed evenly amongst jobs with the same
 * weight.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WeightedBalancedSchedulingConfiguration">AWS
 * API Reference</a></p>
 */
class WeightedBalancedSchedulingConfiguration {
 public:
  AWS_DEADLINE_API WeightedBalancedSchedulingConfiguration() = default;
  AWS_DEADLINE_API WeightedBalancedSchedulingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API WeightedBalancedSchedulingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The weight applied to job priority in the scheduling formula. Higher values
   * give more influence to job priority. A value of <code>0</code> means priority is
   * ignored. The default value is <code>100.0</code>.</p>
   */
  inline double GetPriorityWeight() const { return m_priorityWeight; }
  inline bool PriorityWeightHasBeenSet() const { return m_priorityWeightHasBeenSet; }
  inline void SetPriorityWeight(double value) {
    m_priorityWeightHasBeenSet = true;
    m_priorityWeight = value;
  }
  inline WeightedBalancedSchedulingConfiguration& WithPriorityWeight(double value) {
    SetPriorityWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight applied to the number of errors on a job. A negative value means
   * jobs without errors are scheduled first. A value of <code>0</code> means errors
   * are ignored. The default value is <code>-10.0</code>.</p>
   */
  inline double GetErrorWeight() const { return m_errorWeight; }
  inline bool ErrorWeightHasBeenSet() const { return m_errorWeightHasBeenSet; }
  inline void SetErrorWeight(double value) {
    m_errorWeightHasBeenSet = true;
    m_errorWeight = value;
  }
  inline WeightedBalancedSchedulingConfiguration& WithErrorWeight(double value) {
    SetErrorWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight applied to job submission time. A positive value means earlier
   * jobs are scheduled first. A value of <code>0</code> means submission time is
   * ignored. The default value is <code>3.0</code>.</p>
   */
  inline double GetSubmissionTimeWeight() const { return m_submissionTimeWeight; }
  inline bool SubmissionTimeWeightHasBeenSet() const { return m_submissionTimeWeightHasBeenSet; }
  inline void SetSubmissionTimeWeight(double value) {
    m_submissionTimeWeightHasBeenSet = true;
    m_submissionTimeWeight = value;
  }
  inline WeightedBalancedSchedulingConfiguration& WithSubmissionTimeWeight(double value) {
    SetSubmissionTimeWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight applied to the number of tasks currently rendering on a job. A
   * negative value means jobs that are not already rendering are scheduled next. A
   * value of <code>0</code> means the rendering state is ignored. The default value
   * is <code>-100.0</code>.</p>
   */
  inline double GetRenderingTaskWeight() const { return m_renderingTaskWeight; }
  inline bool RenderingTaskWeightHasBeenSet() const { return m_renderingTaskWeightHasBeenSet; }
  inline void SetRenderingTaskWeight(double value) {
    m_renderingTaskWeightHasBeenSet = true;
    m_renderingTaskWeight = value;
  }
  inline WeightedBalancedSchedulingConfiguration& WithRenderingTaskWeight(double value) {
    SetRenderingTaskWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rendering task buffer is subtracted from the number of rendering tasks
   * before applying the rendering task weight. This creates a stickiness effect
   * where workers prefer to stay with their current job. Higher values make workers
   * stickier. The default value is <code>1</code>. The buffer is only applied in the
   * weight calculation for a job if the worker is currently assigned to that
   * job.</p>
   */
  inline int GetRenderingTaskBuffer() const { return m_renderingTaskBuffer; }
  inline bool RenderingTaskBufferHasBeenSet() const { return m_renderingTaskBufferHasBeenSet; }
  inline void SetRenderingTaskBuffer(int value) {
    m_renderingTaskBufferHasBeenSet = true;
    m_renderingTaskBuffer = value;
  }
  inline WeightedBalancedSchedulingConfiguration& WithRenderingTaskBuffer(int value) {
    SetRenderingTaskBuffer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Overrides the weighted scheduling formula for jobs at the maximum priority
   * (100). When set, jobs with priority 100 are always scheduled first regardless of
   * their calculated weight. When absent, maximum priority jobs use the standard
   * weighted formula.</p>
   */
  inline const SchedulingMaxPriorityOverride& GetMaxPriorityOverride() const { return m_maxPriorityOverride; }
  inline bool MaxPriorityOverrideHasBeenSet() const { return m_maxPriorityOverrideHasBeenSet; }
  template <typename MaxPriorityOverrideT = SchedulingMaxPriorityOverride>
  void SetMaxPriorityOverride(MaxPriorityOverrideT&& value) {
    m_maxPriorityOverrideHasBeenSet = true;
    m_maxPriorityOverride = std::forward<MaxPriorityOverrideT>(value);
  }
  template <typename MaxPriorityOverrideT = SchedulingMaxPriorityOverride>
  WeightedBalancedSchedulingConfiguration& WithMaxPriorityOverride(MaxPriorityOverrideT&& value) {
    SetMaxPriorityOverride(std::forward<MaxPriorityOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Overrides the weighted scheduling formula for jobs at the minimum priority
   * (0). When set, jobs with priority 0 are always scheduled last regardless of
   * their calculated weight. When absent, minimum priority jobs use the standard
   * weighted formula.</p>
   */
  inline const SchedulingMinPriorityOverride& GetMinPriorityOverride() const { return m_minPriorityOverride; }
  inline bool MinPriorityOverrideHasBeenSet() const { return m_minPriorityOverrideHasBeenSet; }
  template <typename MinPriorityOverrideT = SchedulingMinPriorityOverride>
  void SetMinPriorityOverride(MinPriorityOverrideT&& value) {
    m_minPriorityOverrideHasBeenSet = true;
    m_minPriorityOverride = std::forward<MinPriorityOverrideT>(value);
  }
  template <typename MinPriorityOverrideT = SchedulingMinPriorityOverride>
  WeightedBalancedSchedulingConfiguration& WithMinPriorityOverride(MinPriorityOverrideT&& value) {
    SetMinPriorityOverride(std::forward<MinPriorityOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  double m_priorityWeight{0.0};

  double m_errorWeight{0.0};

  double m_submissionTimeWeight{0.0};

  double m_renderingTaskWeight{0.0};

  int m_renderingTaskBuffer{0};

  SchedulingMaxPriorityOverride m_maxPriorityOverride;

  SchedulingMinPriorityOverride m_minPriorityOverride;
  bool m_priorityWeightHasBeenSet = false;
  bool m_errorWeightHasBeenSet = false;
  bool m_submissionTimeWeightHasBeenSet = false;
  bool m_renderingTaskWeightHasBeenSet = false;
  bool m_renderingTaskBufferHasBeenSet = false;
  bool m_maxPriorityOverrideHasBeenSet = false;
  bool m_minPriorityOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
