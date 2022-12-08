/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/DefaultConditionalBranch.h>
#include <aws/lexv2-models/model/ConditionalBranch.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides a list of conditional branches. Branches are evaluated in the order
   * that they are entered in the list. The first branch with a condition that
   * evaluates to true is executed. The last branch in the list is the default
   * branch. The default branch should not have any condition expression. The default
   * branch is executed if no other branch has a matching condition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConditionalSpecification">AWS
   * API Reference</a></p>
   */
  class ConditionalSpecification
  {
  public:
    AWS_LEXMODELSV2_API ConditionalSpecification();
    AWS_LEXMODELSV2_API ConditionalSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConditionalSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether a conditional branch is active. When <code>active</code>
     * is false, the conditions are not evaluated.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Determines whether a conditional branch is active. When <code>active</code>
     * is false, the conditions are not evaluated.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Determines whether a conditional branch is active. When <code>active</code>
     * is false, the conditions are not evaluated.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Determines whether a conditional branch is active. When <code>active</code>
     * is false, the conditions are not evaluated.</p>
     */
    inline ConditionalSpecification& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline const Aws::Vector<ConditionalBranch>& GetConditionalBranches() const{ return m_conditionalBranches; }

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline bool ConditionalBranchesHasBeenSet() const { return m_conditionalBranchesHasBeenSet; }

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline void SetConditionalBranches(const Aws::Vector<ConditionalBranch>& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches = value; }

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline void SetConditionalBranches(Aws::Vector<ConditionalBranch>&& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches = std::move(value); }

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline ConditionalSpecification& WithConditionalBranches(const Aws::Vector<ConditionalBranch>& value) { SetConditionalBranches(value); return *this;}

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline ConditionalSpecification& WithConditionalBranches(Aws::Vector<ConditionalBranch>&& value) { SetConditionalBranches(std::move(value)); return *this;}

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline ConditionalSpecification& AddConditionalBranches(const ConditionalBranch& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches.push_back(value); return *this; }

    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline ConditionalSpecification& AddConditionalBranches(ConditionalBranch&& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches.push_back(std::move(value)); return *this; }


    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline const DefaultConditionalBranch& GetDefaultBranch() const{ return m_defaultBranch; }

    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }

    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline void SetDefaultBranch(const DefaultConditionalBranch& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = value; }

    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline void SetDefaultBranch(DefaultConditionalBranch&& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = std::move(value); }

    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline ConditionalSpecification& WithDefaultBranch(const DefaultConditionalBranch& value) { SetDefaultBranch(value); return *this;}

    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline ConditionalSpecification& WithDefaultBranch(DefaultConditionalBranch&& value) { SetDefaultBranch(std::move(value)); return *this;}

  private:

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::Vector<ConditionalBranch> m_conditionalBranches;
    bool m_conditionalBranchesHasBeenSet = false;

    DefaultConditionalBranch m_defaultBranch;
    bool m_defaultBranchHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
