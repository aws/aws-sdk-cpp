/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/RecipeAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/databrew/model/ConditionExpression.h>
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
   * <p>Represents a single step from a DataBrew recipe to be
   * performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/RecipeStep">AWS
   * API Reference</a></p>
   */
  class RecipeStep
  {
  public:
    AWS_GLUEDATABREW_API RecipeStep() = default;
    AWS_GLUEDATABREW_API RecipeStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The particular action to be performed in the recipe step.</p>
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
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
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
} // namespace GlueDataBrew
} // namespace Aws
