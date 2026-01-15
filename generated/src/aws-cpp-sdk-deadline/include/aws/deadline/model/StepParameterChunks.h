/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/RangeConstraint.h>

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
 * <p>Defines how a step parameter range should be divided into
 * chunks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StepParameterChunks">AWS
 * API Reference</a></p>
 */
class StepParameterChunks {
 public:
  AWS_DEADLINE_API StepParameterChunks() = default;
  AWS_DEADLINE_API StepParameterChunks(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API StepParameterChunks& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of tasks to combine into a single chunk by default.</p>
   */
  inline int GetDefaultTaskCount() const { return m_defaultTaskCount; }
  inline bool DefaultTaskCountHasBeenSet() const { return m_defaultTaskCountHasBeenSet; }
  inline void SetDefaultTaskCount(int value) {
    m_defaultTaskCountHasBeenSet = true;
    m_defaultTaskCount = value;
  }
  inline StepParameterChunks& WithDefaultTaskCount(int value) {
    SetDefaultTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of seconds to aim for when forming chunks.</p>
   */
  inline int GetTargetRuntimeSeconds() const { return m_targetRuntimeSeconds; }
  inline bool TargetRuntimeSecondsHasBeenSet() const { return m_targetRuntimeSecondsHasBeenSet; }
  inline void SetTargetRuntimeSeconds(int value) {
    m_targetRuntimeSecondsHasBeenSet = true;
    m_targetRuntimeSeconds = value;
  }
  inline StepParameterChunks& WithTargetRuntimeSeconds(int value) {
    SetTargetRuntimeSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the chunked ranges must be contiguous or can have gaps
   * between them.</p>
   */
  inline RangeConstraint GetRangeConstraint() const { return m_rangeConstraint; }
  inline bool RangeConstraintHasBeenSet() const { return m_rangeConstraintHasBeenSet; }
  inline void SetRangeConstraint(RangeConstraint value) {
    m_rangeConstraintHasBeenSet = true;
    m_rangeConstraint = value;
  }
  inline StepParameterChunks& WithRangeConstraint(RangeConstraint value) {
    SetRangeConstraint(value);
    return *this;
  }
  ///@}
 private:
  int m_defaultTaskCount{0};

  int m_targetRuntimeSeconds{0};

  RangeConstraint m_rangeConstraint{RangeConstraint::NOT_SET};
  bool m_defaultTaskCountHasBeenSet = false;
  bool m_targetRuntimeSecondsHasBeenSet = false;
  bool m_rangeConstraintHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
