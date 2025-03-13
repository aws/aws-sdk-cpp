/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttributeCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A tagged union to specify expression for a routing step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Expression">AWS
   * API Reference</a></p>
   */
  class Expression
  {
  public:
    AWS_CONNECT_API Expression() = default;
    AWS_CONNECT_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline const AttributeCondition& GetAttributeCondition() const { return m_attributeCondition; }
    inline bool AttributeConditionHasBeenSet() const { return m_attributeConditionHasBeenSet; }
    template<typename AttributeConditionT = AttributeCondition>
    void SetAttributeCondition(AttributeConditionT&& value) { m_attributeConditionHasBeenSet = true; m_attributeCondition = std::forward<AttributeConditionT>(value); }
    template<typename AttributeConditionT = AttributeCondition>
    Expression& WithAttributeCondition(AttributeConditionT&& value) { SetAttributeCondition(std::forward<AttributeConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline const Aws::Vector<Expression>& GetAndExpression() const { return m_andExpression; }
    inline bool AndExpressionHasBeenSet() const { return m_andExpressionHasBeenSet; }
    template<typename AndExpressionT = Aws::Vector<Expression>>
    void SetAndExpression(AndExpressionT&& value) { m_andExpressionHasBeenSet = true; m_andExpression = std::forward<AndExpressionT>(value); }
    template<typename AndExpressionT = Aws::Vector<Expression>>
    Expression& WithAndExpression(AndExpressionT&& value) { SetAndExpression(std::forward<AndExpressionT>(value)); return *this;}
    template<typename AndExpressionT = Expression>
    Expression& AddAndExpression(AndExpressionT&& value) { m_andExpressionHasBeenSet = true; m_andExpression.emplace_back(std::forward<AndExpressionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline const Aws::Vector<Expression>& GetOrExpression() const { return m_orExpression; }
    inline bool OrExpressionHasBeenSet() const { return m_orExpressionHasBeenSet; }
    template<typename OrExpressionT = Aws::Vector<Expression>>
    void SetOrExpression(OrExpressionT&& value) { m_orExpressionHasBeenSet = true; m_orExpression = std::forward<OrExpressionT>(value); }
    template<typename OrExpressionT = Aws::Vector<Expression>>
    Expression& WithOrExpression(OrExpressionT&& value) { SetOrExpression(std::forward<OrExpressionT>(value)); return *this;}
    template<typename OrExpressionT = Expression>
    Expression& AddOrExpression(OrExpressionT&& value) { m_orExpressionHasBeenSet = true; m_orExpression.emplace_back(std::forward<OrExpressionT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AttributeCondition& GetNotAttributeCondition() const { return m_notAttributeCondition; }
    inline bool NotAttributeConditionHasBeenSet() const { return m_notAttributeConditionHasBeenSet; }
    template<typename NotAttributeConditionT = AttributeCondition>
    void SetNotAttributeCondition(NotAttributeConditionT&& value) { m_notAttributeConditionHasBeenSet = true; m_notAttributeCondition = std::forward<NotAttributeConditionT>(value); }
    template<typename NotAttributeConditionT = AttributeCondition>
    Expression& WithNotAttributeCondition(NotAttributeConditionT&& value) { SetNotAttributeCondition(std::forward<NotAttributeConditionT>(value)); return *this;}
    ///@}
  private:

    AttributeCondition m_attributeCondition;
    bool m_attributeConditionHasBeenSet = false;

    Aws::Vector<Expression> m_andExpression;
    bool m_andExpressionHasBeenSet = false;

    Aws::Vector<Expression> m_orExpression;
    bool m_orExpressionHasBeenSet = false;

    AttributeCondition m_notAttributeCondition;
    bool m_notAttributeConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
