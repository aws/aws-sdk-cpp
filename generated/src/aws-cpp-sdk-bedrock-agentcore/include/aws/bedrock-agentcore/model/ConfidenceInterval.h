/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>A confidence interval for a statistical measurement.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ConfidenceInterval">AWS
 * API Reference</a></p>
 */
class ConfidenceInterval {
 public:
  AWS_BEDROCKAGENTCORE_API ConfidenceInterval() = default;
  AWS_BEDROCKAGENTCORE_API ConfidenceInterval(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ConfidenceInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The lower bound of the confidence interval.</p>
   */
  inline double GetLower() const { return m_lower; }
  inline bool LowerHasBeenSet() const { return m_lowerHasBeenSet; }
  inline void SetLower(double value) {
    m_lowerHasBeenSet = true;
    m_lower = value;
  }
  inline ConfidenceInterval& WithLower(double value) {
    SetLower(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper bound of the confidence interval.</p>
   */
  inline double GetUpper() const { return m_upper; }
  inline bool UpperHasBeenSet() const { return m_upperHasBeenSet; }
  inline void SetUpper(double value) {
    m_upperHasBeenSet = true;
    m_upper = value;
  }
  inline ConfidenceInterval& WithUpper(double value) {
    SetUpper(value);
    return *this;
  }
  ///@}
 private:
  double m_lower{0.0};

  double m_upper{0.0};
  bool m_lowerHasBeenSet = false;
  bool m_upperHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
