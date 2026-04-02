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
 * <p>Configuration for priority balanced scheduling. Workers are distributed
 * evenly across all jobs at the highest priority level.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PriorityBalancedSchedulingConfiguration">AWS
 * API Reference</a></p>
 */
class PriorityBalancedSchedulingConfiguration {
 public:
  AWS_DEADLINE_API PriorityBalancedSchedulingConfiguration() = default;
  AWS_DEADLINE_API PriorityBalancedSchedulingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API PriorityBalancedSchedulingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rendering task buffer controls worker stickiness. A worker only switches
   * from its current job to another job at the same priority if the other job has
   * fewer rendering tasks by more than this buffer value. Higher values make workers
   * stickier to their current jobs. The default value is <code>1</code>.</p>
   */
  inline int GetRenderingTaskBuffer() const { return m_renderingTaskBuffer; }
  inline bool RenderingTaskBufferHasBeenSet() const { return m_renderingTaskBufferHasBeenSet; }
  inline void SetRenderingTaskBuffer(int value) {
    m_renderingTaskBufferHasBeenSet = true;
    m_renderingTaskBuffer = value;
  }
  inline PriorityBalancedSchedulingConfiguration& WithRenderingTaskBuffer(int value) {
    SetRenderingTaskBuffer(value);
    return *this;
  }
  ///@}
 private:
  int m_renderingTaskBuffer{0};
  bool m_renderingTaskBufferHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
