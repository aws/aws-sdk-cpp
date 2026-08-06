/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CapacityReservationPreference.h>
#include <aws/bedrock-agentcore-control/model/CapacityReservationTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The Capacity Reservation targeting option for the instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CapacityReservationSpecification">AWS
 * API Reference</a></p>
 */
class CapacityReservationSpecification {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationSpecification() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Capacity Reservation preference for the instances.</p>
   */
  inline CapacityReservationPreference GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
  inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
  inline void SetCapacityReservationPreference(CapacityReservationPreference value) {
    m_capacityReservationPreferenceHasBeenSet = true;
    m_capacityReservationPreference = value;
  }
  inline CapacityReservationSpecification& WithCapacityReservationPreference(CapacityReservationPreference value) {
    SetCapacityReservationPreference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target Capacity Reservation or Capacity Reservation group for the
   * instances.</p>
   */
  inline const CapacityReservationTarget& GetCapacityReservationTarget() const { return m_capacityReservationTarget; }
  inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }
  template <typename CapacityReservationTargetT = CapacityReservationTarget>
  void SetCapacityReservationTarget(CapacityReservationTargetT&& value) {
    m_capacityReservationTargetHasBeenSet = true;
    m_capacityReservationTarget = std::forward<CapacityReservationTargetT>(value);
  }
  template <typename CapacityReservationTargetT = CapacityReservationTarget>
  CapacityReservationSpecification& WithCapacityReservationTarget(CapacityReservationTargetT&& value) {
    SetCapacityReservationTarget(std::forward<CapacityReservationTargetT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityReservationPreference m_capacityReservationPreference{CapacityReservationPreference::NOT_SET};

  CapacityReservationTarget m_capacityReservationTarget;
  bool m_capacityReservationPreferenceHasBeenSet = false;
  bool m_capacityReservationTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
