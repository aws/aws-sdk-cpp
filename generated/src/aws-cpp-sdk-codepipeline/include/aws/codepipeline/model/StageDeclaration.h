/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/FailureConditions.h>
#include <aws/codepipeline/model/SuccessConditions.h>
#include <aws/codepipeline/model/BeforeEntryConditions.h>
#include <aws/codepipeline/model/BlockerDeclaration.h>
#include <aws/codepipeline/model/ActionDeclaration.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about a stage and its definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageDeclaration">AWS
   * API Reference</a></p>
   */
  class StageDeclaration
  {
  public:
    AWS_CODEPIPELINE_API StageDeclaration() = default;
    AWS_CODEPIPELINE_API StageDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StageDeclaration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<BlockerDeclaration>& GetBlockers() const { return m_blockers; }
    inline bool BlockersHasBeenSet() const { return m_blockersHasBeenSet; }
    template<typename BlockersT = Aws::Vector<BlockerDeclaration>>
    void SetBlockers(BlockersT&& value) { m_blockersHasBeenSet = true; m_blockers = std::forward<BlockersT>(value); }
    template<typename BlockersT = Aws::Vector<BlockerDeclaration>>
    StageDeclaration& WithBlockers(BlockersT&& value) { SetBlockers(std::forward<BlockersT>(value)); return *this;}
    template<typename BlockersT = BlockerDeclaration>
    StageDeclaration& AddBlockers(BlockersT&& value) { m_blockersHasBeenSet = true; m_blockers.emplace_back(std::forward<BlockersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions included in a stage.</p>
     */
    inline const Aws::Vector<ActionDeclaration>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<ActionDeclaration>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ActionDeclaration>>
    StageDeclaration& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = ActionDeclaration>
    StageDeclaration& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage has not completed successfully. For example,
     * configuring this field for rollback will roll back a failed stage automatically
     * to the last successful pipeline execution in the stage.</p>
     */
    inline const FailureConditions& GetOnFailure() const { return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    template<typename OnFailureT = FailureConditions>
    void SetOnFailure(OnFailureT&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::forward<OnFailureT>(value); }
    template<typename OnFailureT = FailureConditions>
    StageDeclaration& WithOnFailure(OnFailureT&& value) { SetOnFailure(std::forward<OnFailureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage has succeeded. For example, configuring this
     * field for conditions will allow the stage to succeed when the conditions are
     * met.</p>
     */
    inline const SuccessConditions& GetOnSuccess() const { return m_onSuccess; }
    inline bool OnSuccessHasBeenSet() const { return m_onSuccessHasBeenSet; }
    template<typename OnSuccessT = SuccessConditions>
    void SetOnSuccess(OnSuccessT&& value) { m_onSuccessHasBeenSet = true; m_onSuccess = std::forward<OnSuccessT>(value); }
    template<typename OnSuccessT = SuccessConditions>
    StageDeclaration& WithOnSuccess(OnSuccessT&& value) { SetOnSuccess(std::forward<OnSuccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage allows entry. For example, configuring this
     * field for conditions will allow entry to the stage when the conditions are
     * met.</p>
     */
    inline const BeforeEntryConditions& GetBeforeEntry() const { return m_beforeEntry; }
    inline bool BeforeEntryHasBeenSet() const { return m_beforeEntryHasBeenSet; }
    template<typename BeforeEntryT = BeforeEntryConditions>
    void SetBeforeEntry(BeforeEntryT&& value) { m_beforeEntryHasBeenSet = true; m_beforeEntry = std::forward<BeforeEntryT>(value); }
    template<typename BeforeEntryT = BeforeEntryConditions>
    StageDeclaration& WithBeforeEntry(BeforeEntryT&& value) { SetBeforeEntry(std::forward<BeforeEntryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<BlockerDeclaration> m_blockers;
    bool m_blockersHasBeenSet = false;

    Aws::Vector<ActionDeclaration> m_actions;
    bool m_actionsHasBeenSet = false;

    FailureConditions m_onFailure;
    bool m_onFailureHasBeenSet = false;

    SuccessConditions m_onSuccess;
    bool m_onSuccessHasBeenSet = false;

    BeforeEntryConditions m_beforeEntry;
    bool m_beforeEntryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
