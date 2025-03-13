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
    AWS_LEXMODELSV2_API ConditionalSpecification() = default;
    AWS_LEXMODELSV2_API ConditionalSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConditionalSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether a conditional branch is active. When <code>active</code>
     * is false, the conditions are not evaluated.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline ConditionalSpecification& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of conditional branches. A conditional branch is made up of a
     * condition, a response and a next step. The response and next step are executed
     * when the condition is true.</p>
     */
    inline const Aws::Vector<ConditionalBranch>& GetConditionalBranches() const { return m_conditionalBranches; }
    inline bool ConditionalBranchesHasBeenSet() const { return m_conditionalBranchesHasBeenSet; }
    template<typename ConditionalBranchesT = Aws::Vector<ConditionalBranch>>
    void SetConditionalBranches(ConditionalBranchesT&& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches = std::forward<ConditionalBranchesT>(value); }
    template<typename ConditionalBranchesT = Aws::Vector<ConditionalBranch>>
    ConditionalSpecification& WithConditionalBranches(ConditionalBranchesT&& value) { SetConditionalBranches(std::forward<ConditionalBranchesT>(value)); return *this;}
    template<typename ConditionalBranchesT = ConditionalBranch>
    ConditionalSpecification& AddConditionalBranches(ConditionalBranchesT&& value) { m_conditionalBranchesHasBeenSet = true; m_conditionalBranches.emplace_back(std::forward<ConditionalBranchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The conditional branch that should be followed when the conditions for other
     * branches are not satisfied. A conditional branch is made up of a condition, a
     * response and a next step.</p>
     */
    inline const DefaultConditionalBranch& GetDefaultBranch() const { return m_defaultBranch; }
    inline bool DefaultBranchHasBeenSet() const { return m_defaultBranchHasBeenSet; }
    template<typename DefaultBranchT = DefaultConditionalBranch>
    void SetDefaultBranch(DefaultBranchT&& value) { m_defaultBranchHasBeenSet = true; m_defaultBranch = std::forward<DefaultBranchT>(value); }
    template<typename DefaultBranchT = DefaultConditionalBranch>
    ConditionalSpecification& WithDefaultBranch(DefaultBranchT&& value) { SetDefaultBranch(std::forward<DefaultBranchT>(value)); return *this;}
    ///@}
  private:

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    Aws::Vector<ConditionalBranch> m_conditionalBranches;
    bool m_conditionalBranchesHasBeenSet = false;

    DefaultConditionalBranch m_defaultBranch;
    bool m_defaultBranchHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
