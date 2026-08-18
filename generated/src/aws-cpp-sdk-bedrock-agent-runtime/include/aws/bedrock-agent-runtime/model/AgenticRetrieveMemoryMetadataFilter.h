/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilterLeft.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilterOperator.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilterRight.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>A metadata filter expression, in the form accepted by the AgentCore Memory
 * RetrieveMemoryRecords operation. The expression has a left operand that names
 * the metadata key, an operator, and a right operand. For the EXISTS and
 * NOT_EXISTS operators, omit the right operand.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryMetadataFilter">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryMetadataFilter {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilter() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata key that the expression evaluates.</p>
   */
  inline const AgenticRetrieveMemoryMetadataFilterLeft& GetLeft() const { return m_left; }
  inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
  template <typename LeftT = AgenticRetrieveMemoryMetadataFilterLeft>
  void SetLeft(LeftT&& value) {
    m_leftHasBeenSet = true;
    m_left = std::forward<LeftT>(value);
  }
  template <typename LeftT = AgenticRetrieveMemoryMetadataFilterLeft>
  AgenticRetrieveMemoryMetadataFilter& WithLeft(LeftT&& value) {
    SetLeft(std::forward<LeftT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relationship that the metadata key and value must have for a memory
   * record to match.</p>
   */
  inline AgenticRetrieveMemoryMetadataFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(AgenticRetrieveMemoryMetadataFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline AgenticRetrieveMemoryMetadataFilter& WithOperator(AgenticRetrieveMemoryMetadataFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that the expression compares the metadata key against. Supply this
   * value for every operator except EXISTS and NOT_EXISTS.</p>
   */
  inline const AgenticRetrieveMemoryMetadataFilterRight& GetRight() const { return m_right; }
  inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
  template <typename RightT = AgenticRetrieveMemoryMetadataFilterRight>
  void SetRight(RightT&& value) {
    m_rightHasBeenSet = true;
    m_right = std::forward<RightT>(value);
  }
  template <typename RightT = AgenticRetrieveMemoryMetadataFilterRight>
  AgenticRetrieveMemoryMetadataFilter& WithRight(RightT&& value) {
    SetRight(std::forward<RightT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveMemoryMetadataFilterLeft m_left;

  AgenticRetrieveMemoryMetadataFilterOperator m_operator{AgenticRetrieveMemoryMetadataFilterOperator::NOT_SET};

  AgenticRetrieveMemoryMetadataFilterRight m_right;
  bool m_leftHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_rightHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
