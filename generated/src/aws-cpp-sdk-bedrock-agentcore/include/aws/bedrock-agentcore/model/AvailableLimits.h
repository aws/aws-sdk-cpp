/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Amount.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Available session limits. Currently only budget is supported.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AvailableLimits">AWS
 * API Reference</a></p>
 */
class AvailableLimits {
 public:
  AWS_BEDROCKAGENTCORE_API AvailableLimits() = default;
  AWS_BEDROCKAGENTCORE_API AvailableLimits(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AvailableLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The available spend amount for this session.</p>
   */
  inline const Amount& GetAvailableSpendAmount() const { return m_availableSpendAmount; }
  inline bool AvailableSpendAmountHasBeenSet() const { return m_availableSpendAmountHasBeenSet; }
  template <typename AvailableSpendAmountT = Amount>
  void SetAvailableSpendAmount(AvailableSpendAmountT&& value) {
    m_availableSpendAmountHasBeenSet = true;
    m_availableSpendAmount = std::forward<AvailableSpendAmountT>(value);
  }
  template <typename AvailableSpendAmountT = Amount>
  AvailableLimits& WithAvailableSpendAmount(AvailableSpendAmountT&& value) {
    SetAvailableSpendAmount(std::forward<AvailableSpendAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the available limits were last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AvailableLimits& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Amount m_availableSpendAmount;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_availableSpendAmountHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
