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
 * <p>A range of turn counts. Each bound is from 1 to 100, and <code>min</code>
 * can't be greater than <code>max</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/TurnCountRange">AWS
 * API Reference</a></p>
 */
class TurnCountRange {
 public:
  AWS_BEDROCKAGENTCORE_API TurnCountRange() = default;
  AWS_BEDROCKAGENTCORE_API TurnCountRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API TurnCountRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of turns.</p>
   */
  inline int GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  inline void SetMin(int value) {
    m_minHasBeenSet = true;
    m_min = value;
  }
  inline TurnCountRange& WithMin(int value) {
    SetMin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of turns. The default is 100.</p>
   */
  inline int GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(int value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline TurnCountRange& WithMax(int value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  int m_min{0};

  int m_max{0};
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
