/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents an individual condition that evaluates to true or false.</p>
   * <p>Conditions are used with recipe actions. The action is only performed for
   * column values where the condition evaluates to true.</p> <p>If a recipe requires
   * more than one condition, then the recipe must specify multiple
   * <code>ConditionExpression</code> elements. Each condition is applied to the rows
   * in a dataset first, before the recipe action is performed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/ConditionExpression">AWS
   * API Reference</a></p>
   */
  class ConditionExpression
  {
  public:
    AWS_GLUEDATABREW_API ConditionExpression();
    AWS_GLUEDATABREW_API ConditionExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API ConditionExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline ConditionExpression& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline ConditionExpression& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>A specific condition to apply to a recipe action. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/databrew/latest/dg/recipes.html#recipes.structure">Recipe
     * structure</a> in the <i>Glue DataBrew Developer Guide</i>.</p>
     */
    inline ConditionExpression& WithCondition(const char* value) { SetCondition(value); return *this;}


    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline ConditionExpression& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline ConditionExpression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value that the condition must evaluate to for the condition to succeed.</p>
     */
    inline ConditionExpression& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>A column to apply this condition to.</p>
     */
    inline const Aws::String& GetTargetColumn() const{ return m_targetColumn; }

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline bool TargetColumnHasBeenSet() const { return m_targetColumnHasBeenSet; }

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline void SetTargetColumn(const Aws::String& value) { m_targetColumnHasBeenSet = true; m_targetColumn = value; }

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline void SetTargetColumn(Aws::String&& value) { m_targetColumnHasBeenSet = true; m_targetColumn = std::move(value); }

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline void SetTargetColumn(const char* value) { m_targetColumnHasBeenSet = true; m_targetColumn.assign(value); }

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline ConditionExpression& WithTargetColumn(const Aws::String& value) { SetTargetColumn(value); return *this;}

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline ConditionExpression& WithTargetColumn(Aws::String&& value) { SetTargetColumn(std::move(value)); return *this;}

    /**
     * <p>A column to apply this condition to.</p>
     */
    inline ConditionExpression& WithTargetColumn(const char* value) { SetTargetColumn(value); return *this;}

  private:

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_targetColumn;
    bool m_targetColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
