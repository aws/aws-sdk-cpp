/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Amount.h>

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
 * <p>Session spending limits</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SessionLimits">AWS
 * API Reference</a></p>
 */
class SessionLimits {
 public:
  AWS_BEDROCKAGENTCORE_API SessionLimits() = default;
  AWS_BEDROCKAGENTCORE_API SessionLimits(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SessionLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum amount that can be spent in this session.</p>
   */
  inline const Amount& GetMaxSpendAmount() const { return m_maxSpendAmount; }
  inline bool MaxSpendAmountHasBeenSet() const { return m_maxSpendAmountHasBeenSet; }
  template <typename MaxSpendAmountT = Amount>
  void SetMaxSpendAmount(MaxSpendAmountT&& value) {
    m_maxSpendAmountHasBeenSet = true;
    m_maxSpendAmount = std::forward<MaxSpendAmountT>(value);
  }
  template <typename MaxSpendAmountT = Amount>
  SessionLimits& WithMaxSpendAmount(MaxSpendAmountT&& value) {
    SetMaxSpendAmount(std::forward<MaxSpendAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Amount m_maxSpendAmount;
  bool m_maxSpendAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
