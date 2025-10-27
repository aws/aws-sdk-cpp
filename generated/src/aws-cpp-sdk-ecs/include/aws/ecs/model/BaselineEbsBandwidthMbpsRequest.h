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
 * <p>The minimum and maximum baseline Amazon EBS bandwidth in megabits per second
 * (Mbps) for instance type selection. This is important for workloads with high
 * storage I/O requirements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/BaselineEbsBandwidthMbpsRequest">AWS
 * API Reference</a></p>
 */
class BaselineEbsBandwidthMbpsRequest {
 public:
  AWS_ECS_API BaselineEbsBandwidthMbpsRequest() = default;
  AWS_ECS_API BaselineEbsBandwidthMbpsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API BaselineEbsBandwidthMbpsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum baseline Amazon EBS bandwidth in Mbps. Instance types with lower
   * Amazon EBS bandwidth are excluded from selection.</p>
   */
  inline int GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  inline void SetMin(int value) {
    m_minHasBeenSet = true;
    m_min = value;
  }
  inline BaselineEbsBandwidthMbpsRequest& WithMin(int value) {
    SetMin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum baseline Amazon EBS bandwidth in Mbps. Instance types with higher
   * Amazon EBS bandwidth are excluded from selection.</p>
   */
  inline int GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(int value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline BaselineEbsBandwidthMbpsRequest& WithMax(int value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  int m_min{0};
  bool m_minHasBeenSet = false;

  int m_max{0};
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
