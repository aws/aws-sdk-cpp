/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/LeftExpression.h>
#include <aws/bedrock-agentcore/model/OperatorType.h>
#include <aws/bedrock-agentcore/model/RightExpression.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Filter expression for retrieving events based on metadata associated with an
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EventMetadataFilterExpression">AWS
   * API Reference</a></p>
   */
  class EventMetadataFilterExpression
  {
  public:
    AWS_BEDROCKAGENTCORE_API EventMetadataFilterExpression() = default;
    AWS_BEDROCKAGENTCORE_API EventMetadataFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API EventMetadataFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Left operand of the event metadata filter expression.</p>
     */
    inline const LeftExpression& GetLeft() const { return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    template<typename LeftT = LeftExpression>
    void SetLeft(LeftT&& value) { m_leftHasBeenSet = true; m_left = std::forward<LeftT>(value); }
    template<typename LeftT = LeftExpression>
    EventMetadataFilterExpression& WithLeft(LeftT&& value) { SetLeft(std::forward<LeftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operator applied to the event metadata filter expression.</p>
     */
    inline OperatorType GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(OperatorType value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline EventMetadataFilterExpression& WithOperator(OperatorType value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Right operand of the event metadata filter expression.</p>
     */
    inline const RightExpression& GetRight() const { return m_right; }
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
    template<typename RightT = RightExpression>
    void SetRight(RightT&& value) { m_rightHasBeenSet = true; m_right = std::forward<RightT>(value); }
    template<typename RightT = RightExpression>
    EventMetadataFilterExpression& WithRight(RightT&& value) { SetRight(std::forward<RightT>(value)); return *this;}
    ///@}
  private:

    LeftExpression m_left;
    bool m_leftHasBeenSet = false;

    OperatorType m_operator{OperatorType::NOT_SET};
    bool m_operatorHasBeenSet = false;

    RightExpression m_right;
    bool m_rightHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
