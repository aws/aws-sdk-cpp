/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/RecipeAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ConditionExpression.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A recipe step used in a Glue Studio data preparation recipe
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RecipeStep">AWS API
   * Reference</a></p>
   */
  class RecipeStep
  {
  public:
    AWS_GLUE_API RecipeStep();
    AWS_GLUE_API RecipeStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RecipeStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transformation action of the recipe step.</p>
     */
    inline const RecipeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const RecipeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(RecipeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline RecipeStep& WithAction(const RecipeAction& value) { SetAction(value); return *this;}
    inline RecipeStep& WithAction(RecipeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition expressions for the recipe step.</p>
     */
    inline const Aws::Vector<ConditionExpression>& GetConditionExpressions() const{ return m_conditionExpressions; }
    inline bool ConditionExpressionsHasBeenSet() const { return m_conditionExpressionsHasBeenSet; }
    inline void SetConditionExpressions(const Aws::Vector<ConditionExpression>& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions = value; }
    inline void SetConditionExpressions(Aws::Vector<ConditionExpression>&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions = std::move(value); }
    inline RecipeStep& WithConditionExpressions(const Aws::Vector<ConditionExpression>& value) { SetConditionExpressions(value); return *this;}
    inline RecipeStep& WithConditionExpressions(Aws::Vector<ConditionExpression>&& value) { SetConditionExpressions(std::move(value)); return *this;}
    inline RecipeStep& AddConditionExpressions(const ConditionExpression& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions.push_back(value); return *this; }
    inline RecipeStep& AddConditionExpressions(ConditionExpression&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    RecipeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<ConditionExpression> m_conditionExpressions;
    bool m_conditionExpressionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
