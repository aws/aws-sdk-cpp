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
 * <p>The minimum and maximum network bandwidth in gigabits per second (Gbps) for
 * instance type selection. This is important for network-intensive
 * workloads.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NetworkBandwidthGbpsRequest">AWS
 * API Reference</a></p>
 */
class NetworkBandwidthGbpsRequest {
 public:
  AWS_ECS_API NetworkBandwidthGbpsRequest() = default;
  AWS_ECS_API NetworkBandwidthGbpsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API NetworkBandwidthGbpsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum network bandwidth in Gbps. Instance types with lower network
   * bandwidth are excluded from selection.</p>
   */
  inline double GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  inline void SetMin(double value) {
    m_minHasBeenSet = true;
    m_min = value;
  }
  inline NetworkBandwidthGbpsRequest& WithMin(double value) {
    SetMin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum network bandwidth in Gbps. Instance types with higher network
   * bandwidth are excluded from selection.</p>
   */
  inline double GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(double value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline NetworkBandwidthGbpsRequest& WithMax(double value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  double m_min{0.0};

  double m_max{0.0};
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
