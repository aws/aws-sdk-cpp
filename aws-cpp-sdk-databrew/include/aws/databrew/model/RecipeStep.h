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
    AWS_GLUEDATABREW_API RecipeStep();
    AWS_GLUEDATABREW_API RecipeStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API RecipeStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline const RecipeAction& GetAction() const{ return m_action; }

    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline void SetAction(const RecipeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline void SetAction(RecipeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline RecipeStep& WithAction(const RecipeAction& value) { SetAction(value); return *this;}

    /**
     * <p>The particular action to be performed in the recipe step.</p>
     */
    inline RecipeStep& WithAction(RecipeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline const Aws::Vector<ConditionExpression>& GetConditionExpressions() const{ return m_conditionExpressions; }

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline bool ConditionExpressionsHasBeenSet() const { return m_conditionExpressionsHasBeenSet; }

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline void SetConditionExpressions(const Aws::Vector<ConditionExpression>& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions = value; }

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline void SetConditionExpressions(Aws::Vector<ConditionExpression>&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions = std::move(value); }

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline RecipeStep& WithConditionExpressions(const Aws::Vector<ConditionExpression>& value) { SetConditionExpressions(value); return *this;}

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline RecipeStep& WithConditionExpressions(Aws::Vector<ConditionExpression>&& value) { SetConditionExpressions(std::move(value)); return *this;}

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline RecipeStep& AddConditionExpressions(const ConditionExpression& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions.push_back(value); return *this; }

    /**
     * <p>One or more conditions that must be met for the recipe step to succeed.</p>
     *  <p>All of the conditions in the array must be met. In other words, all of
     * the conditions must be combined using a logical AND operation.</p> 
     */
    inline RecipeStep& AddConditionExpressions(ConditionExpression&& value) { m_conditionExpressionsHasBeenSet = true; m_conditionExpressions.push_back(std::move(value)); return *this; }

  private:

    RecipeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<ConditionExpression> m_conditionExpressions;
    bool m_conditionExpressionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
