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
    AWS_CONNECT_API Expression();
    AWS_CONNECT_API Expression(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Expression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline const AttributeCondition& GetAttributeCondition() const{ return m_attributeCondition; }

    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline bool AttributeConditionHasBeenSet() const { return m_attributeConditionHasBeenSet; }

    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline void SetAttributeCondition(const AttributeCondition& value) { m_attributeConditionHasBeenSet = true; m_attributeCondition = value; }

    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline void SetAttributeCondition(AttributeCondition&& value) { m_attributeConditionHasBeenSet = true; m_attributeCondition = std::move(value); }

    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline Expression& WithAttributeCondition(const AttributeCondition& value) { SetAttributeCondition(value); return *this;}

    /**
     * <p>An object to specify the predefined attribute condition.</p>
     */
    inline Expression& WithAttributeCondition(AttributeCondition&& value) { SetAttributeCondition(std::move(value)); return *this;}


    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline const Aws::Vector<Expression>& GetAndExpression() const{ return m_andExpression; }

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline bool AndExpressionHasBeenSet() const { return m_andExpressionHasBeenSet; }

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline void SetAndExpression(const Aws::Vector<Expression>& value) { m_andExpressionHasBeenSet = true; m_andExpression = value; }

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline void SetAndExpression(Aws::Vector<Expression>&& value) { m_andExpressionHasBeenSet = true; m_andExpression = std::move(value); }

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline Expression& WithAndExpression(const Aws::Vector<Expression>& value) { SetAndExpression(value); return *this;}

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline Expression& WithAndExpression(Aws::Vector<Expression>&& value) { SetAndExpression(std::move(value)); return *this;}

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline Expression& AddAndExpression(const Expression& value) { m_andExpressionHasBeenSet = true; m_andExpression.push_back(value); return *this; }

    /**
     * <p>List of routing expressions which will be AND-ed together.</p>
     */
    inline Expression& AddAndExpression(Expression&& value) { m_andExpressionHasBeenSet = true; m_andExpression.push_back(std::move(value)); return *this; }


    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline const Aws::Vector<Expression>& GetOrExpression() const{ return m_orExpression; }

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline bool OrExpressionHasBeenSet() const { return m_orExpressionHasBeenSet; }

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline void SetOrExpression(const Aws::Vector<Expression>& value) { m_orExpressionHasBeenSet = true; m_orExpression = value; }

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline void SetOrExpression(Aws::Vector<Expression>&& value) { m_orExpressionHasBeenSet = true; m_orExpression = std::move(value); }

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline Expression& WithOrExpression(const Aws::Vector<Expression>& value) { SetOrExpression(value); return *this;}

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline Expression& WithOrExpression(Aws::Vector<Expression>&& value) { SetOrExpression(std::move(value)); return *this;}

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline Expression& AddOrExpression(const Expression& value) { m_orExpressionHasBeenSet = true; m_orExpression.push_back(value); return *this; }

    /**
     * <p>List of routing expressions which will be OR-ed together.</p>
     */
    inline Expression& AddOrExpression(Expression&& value) { m_orExpressionHasBeenSet = true; m_orExpression.push_back(std::move(value)); return *this; }

  private:

    AttributeCondition m_attributeCondition;
    bool m_attributeConditionHasBeenSet = false;

    Aws::Vector<Expression> m_andExpression;
    bool m_andExpressionHasBeenSet = false;

    Aws::Vector<Expression> m_orExpression;
    bool m_orExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
