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
 * <p>The infrastructure optimization configuration for an Amazon ECS Managed
 * Instances capacity provider. Specifies the idle-instance scale-in
 * behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/InfrastructureOptimization">AWS
 * API Reference</a></p>
 */
class InfrastructureOptimization {
 public:
  AWS_BATCH_API InfrastructureOptimization() = default;
  AWS_BATCH_API InfrastructureOptimization(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API InfrastructureOptimization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of seconds an instance can remain idle before it is terminated.
   * Valid values are <code>-1</code> or <code>0</code> to <code>3600</code>. Use
   * <code>-1</code> as a special value to disable scale-in (instances are never
   * terminated for being idle). If not specified, a default value applies.</p>
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
}  // namespace Batch
}  // namespace Aws
