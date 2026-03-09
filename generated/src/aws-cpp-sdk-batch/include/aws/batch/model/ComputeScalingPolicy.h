/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>An object that represents a scaling policy for a compute
 * environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeScalingPolicy">AWS
 * API Reference</a></p>
 */
class ComputeScalingPolicy {
 public:
  AWS_BATCH_API ComputeScalingPolicy() = default;
  AWS_BATCH_API ComputeScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ComputeScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum time (in minutes) that Batch keeps instances running in the
   * compute environment after their jobs complete. For each instance, the delay
   * period begins when the last job finishes. If no new jobs are placed on the
   * instance during this delay, Batch terminates the instance once the delay
   * expires.</p> <p>Valid Range: Minimum value of 20. Maximum value of 10080. Use 0
   * to unset and disable the scale down delay.</p>  <p>The scale down delay
   * does not apply to:</p> <ul> <li> <p>Instances being replaced during
   * infrastructure updates</p> </li> <li> <p>Newly launched instances that have not
   * yet run any jobs</p> </li> <li> <p>Spot instances reclaimed due to
   * interruption</p> </li> </ul>
   */
  inline int GetMinScaleDownDelayMinutes() const { return m_minScaleDownDelayMinutes; }
  inline bool MinScaleDownDelayMinutesHasBeenSet() const { return m_minScaleDownDelayMinutesHasBeenSet; }
  inline void SetMinScaleDownDelayMinutes(int value) {
    m_minScaleDownDelayMinutesHasBeenSet = true;
    m_minScaleDownDelayMinutes = value;
  }
  inline ComputeScalingPolicy& WithMinScaleDownDelayMinutes(int value) {
    SetMinScaleDownDelayMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_minScaleDownDelayMinutes{0};
  bool m_minScaleDownDelayMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
