/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Information about the target Capacity Reservation or Capacity Reservation
 * group for the instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CapacityReservationTarget">AWS
 * API Reference</a></p>
 */
class CapacityReservationTarget {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationTarget() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Capacity Reservation in which to run the instances.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CapacityReservationTarget& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
   * which to run the instances.</p>
   */
  inline const Aws::String& GetCapacityReservationResourceGroupArn() const { return m_capacityReservationResourceGroupArn; }
  inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
  template <typename CapacityReservationResourceGroupArnT = Aws::String>
  void SetCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) {
    m_capacityReservationResourceGroupArnHasBeenSet = true;
    m_capacityReservationResourceGroupArn = std::forward<CapacityReservationResourceGroupArnT>(value);
  }
  template <typename CapacityReservationResourceGroupArnT = Aws::String>
  CapacityReservationTarget& WithCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) {
    SetCapacityReservationResourceGroupArn(std::forward<CapacityReservationResourceGroupArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  Aws::String m_capacityReservationResourceGroupArn;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_capacityReservationResourceGroupArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
