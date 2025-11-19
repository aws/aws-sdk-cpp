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
 * <p>The configuration that controls how Amazon ECS optimizes your
 * infrastructure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/InfrastructureOptimization">AWS
 * API Reference</a></p>
 */
class InfrastructureOptimization {
 public:
  AWS_ECS_API InfrastructureOptimization() = default;
  AWS_ECS_API InfrastructureOptimization(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API InfrastructureOptimization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>This parameter defines the number of seconds Amazon ECS Managed Instances
   * waits before optimizing EC2 instances that have become idle or underutilized. A
   * longer delay increases the likelihood of placing new tasks on idle or
   * underutilized instances instances, reducing startup time. A shorter delay helps
   * reduce infrastructure costs by optimizing idle or underutilized
   * instances,instances more quickly.</p> <p>Valid values are:</p> <ul> <li> <p>
   * <code>null</code> - Uses the default optimization behavior.</p> </li> <li> <p>
   * <code>-1</code> - Disables automatic infrastructure optimization.</p> </li> <li>
   * <p>A value between <code>0</code> and <code>3600</code> (inclusive) - Specifies
   * the number of seconds to wait before optimizing instances.</p> </li> </ul>
   */
  inline int GetScaleInAfter() const { return m_scaleInAfter; }
  inline bool ScaleInAfterHasBeenSet() const { return m_scaleInAfterHasBeenSet; }
  inline void SetScaleInAfter(int value) {
    m_scaleInAfterHasBeenSet = true;
    m_scaleInAfter = value;
  }
  inline InfrastructureOptimization& WithScaleInAfter(int value) {
    SetScaleInAfter(value);
    return *this;
  }
  ///@}
 private:
  int m_scaleInAfter{0};
  bool m_scaleInAfterHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
