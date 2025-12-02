/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ClaimMatchOperatorType.h>
#include <aws/bedrock-agentcore-control/model/ClaimMatchValueType.h>

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
 * <p>Defines the value or values to match for and the relationship of the
 * match.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AuthorizingClaimMatchValueType">AWS
 * API Reference</a></p>
 */
class AuthorizingClaimMatchValueType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizingClaimMatchValueType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizingClaimMatchValueType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AuthorizingClaimMatchValueType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value or values to match for.</p>
   */
  inline const ClaimMatchValueType& GetClaimMatchValue() const { return m_claimMatchValue; }
  inline bool ClaimMatchValueHasBeenSet() const { return m_claimMatchValueHasBeenSet; }
  template <typename ClaimMatchValueT = ClaimMatchValueType>
  void SetClaimMatchValue(ClaimMatchValueT&& value) {
    m_claimMatchValueHasBeenSet = true;
    m_claimMatchValue = std::forward<ClaimMatchValueT>(value);
  }
  template <typename ClaimMatchValueT = ClaimMatchValueType>
  AuthorizingClaimMatchValueType& WithClaimMatchValue(ClaimMatchValueT&& value) {
    SetClaimMatchValue(std::forward<ClaimMatchValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the relationship between the claim field value and the value or
   * values you're matching for.</p>
   */
  inline ClaimMatchOperatorType GetClaimMatchOperator() const { return m_claimMatchOperator; }
  inline bool ClaimMatchOperatorHasBeenSet() const { return m_claimMatchOperatorHasBeenSet; }
  inline void SetClaimMatchOperator(ClaimMatchOperatorType value) {
    m_claimMatchOperatorHasBeenSet = true;
    m_claimMatchOperator = value;
  }
  inline AuthorizingClaimMatchValueType& WithClaimMatchOperator(ClaimMatchOperatorType value) {
    SetClaimMatchOperator(value);
    return *this;
  }
  ///@}
 private:
  ClaimMatchValueType m_claimMatchValue;
  bool m_claimMatchValueHasBeenSet = false;

  ClaimMatchOperatorType m_claimMatchOperator{ClaimMatchOperatorType::NOT_SET};
  bool m_claimMatchOperatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
