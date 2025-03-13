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
    AWS_GLUE_API RecipeStep() = default;
    AWS_GLUE_API RecipeStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RecipeStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transformation action of the recipe step.</p>
     */
    inline const RecipeAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = RecipeAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = RecipeAction>
    RecipeStep& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition expressions for the recipe step.</p>
     */
    inline const Aws::Vector<ConditionExpression>& GetConditionExpressions() const { return m_conditionExpressions; }
    inline bool ConditionExpressionsHasBeenSet() const { return m_conditionExpressionsHasBeenSet; }
    template<typename ConditionExpressionsT = Aws::Vector<ConditionExpression>>
    void SetConditionExpressions(ConditionExpressionsT&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions = std::forward<ConditionExpressionsT>(value); }
    template<typename ConditionExpressionsT = Aws::Vector<ConditionExpression>>
    RecipeStep& WithConditionExpressions(ConditionExpressionsT&& value) { SetConditionExpressions(std::forward<ConditionExpressionsT>(value)); return *this;}
    template<typename ConditionExpressionsT = ConditionExpression>
    RecipeStep& AddConditionExpressions(ConditionExpressionsT&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions.emplace_back(std::forward<ConditionExpressionsT>(value)); return *this; }
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
