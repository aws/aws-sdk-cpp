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
    AWS_CODEPIPELINE_API StageDeclaration();
    AWS_CODEPIPELINE_API StageDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StageDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StageDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StageDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<BlockerDeclaration>& GetBlockers() const{ return m_blockers; }
    inline bool BlockersHasBeenSet() const { return m_blockersHasBeenSet; }
    inline void SetBlockers(const Aws::Vector<BlockerDeclaration>& value) { m_blockersHasBeenSet = true; m_blockers = value; }
    inline void SetBlockers(Aws::Vector<BlockerDeclaration>&& value) { m_blockersHasBeenSet = true; m_blockers = std::move(value); }
    inline StageDeclaration& WithBlockers(const Aws::Vector<BlockerDeclaration>& value) { SetBlockers(value); return *this;}
    inline StageDeclaration& WithBlockers(Aws::Vector<BlockerDeclaration>&& value) { SetBlockers(std::move(value)); return *this;}
    inline StageDeclaration& AddBlockers(const BlockerDeclaration& value) { m_blockersHasBeenSet = true; m_blockers.push_back(value); return *this; }
    inline StageDeclaration& AddBlockers(BlockerDeclaration&& value) { m_blockersHasBeenSet = true; m_blockers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions included in a stage.</p>
     */
    inline const Aws::Vector<ActionDeclaration>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<ActionDeclaration>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<ActionDeclaration>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline StageDeclaration& WithActions(const Aws::Vector<ActionDeclaration>& value) { SetActions(value); return *this;}
    inline StageDeclaration& WithActions(Aws::Vector<ActionDeclaration>&& value) { SetActions(std::move(value)); return *this;}
    inline StageDeclaration& AddActions(const ActionDeclaration& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline StageDeclaration& AddActions(ActionDeclaration&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage has not completed successfully. For example,
     * configuring this field for rollback will roll back a failed stage automatically
     * to the last successful pipeline execution in the stage.</p>
     */
    inline const FailureConditions& GetOnFailure() const{ return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    inline void SetOnFailure(const FailureConditions& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }
    inline void SetOnFailure(FailureConditions&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }
    inline StageDeclaration& WithOnFailure(const FailureConditions& value) { SetOnFailure(value); return *this;}
    inline StageDeclaration& WithOnFailure(FailureConditions&& value) { SetOnFailure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage has succeeded. For example, configuring this
     * field for conditions will allow the stage to succeed when the conditions are
     * met.</p>
     */
    inline const SuccessConditions& GetOnSuccess() const{ return m_onSuccess; }
    inline bool OnSuccessHasBeenSet() const { return m_onSuccessHasBeenSet; }
    inline void SetOnSuccess(const SuccessConditions& value) { m_onSuccessHasBeenSet = true; m_onSuccess = value; }
    inline void SetOnSuccess(SuccessConditions&& value) { m_onSuccessHasBeenSet = true; m_onSuccess = std::move(value); }
    inline StageDeclaration& WithOnSuccess(const SuccessConditions& value) { SetOnSuccess(value); return *this;}
    inline StageDeclaration& WithOnSuccess(SuccessConditions&& value) { SetOnSuccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use when a stage allows entry. For example, configuring this
     * field for conditions will allow entry to the stage when the conditions are
     * met.</p>
     */
    inline const BeforeEntryConditions& GetBeforeEntry() const{ return m_beforeEntry; }
    inline bool BeforeEntryHasBeenSet() const { return m_beforeEntryHasBeenSet; }
    inline void SetBeforeEntry(const BeforeEntryConditions& value) { m_beforeEntryHasBeenSet = true; m_beforeEntry = value; }
    inline void SetBeforeEntry(BeforeEntryConditions&& value) { m_beforeEntryHasBeenSet = true; m_beforeEntry = std::move(value); }
    inline StageDeclaration& WithBeforeEntry(const BeforeEntryConditions& value) { SetBeforeEntry(value); return *this;}
    inline StageDeclaration& WithBeforeEntry(BeforeEntryConditions&& value) { SetBeforeEntry(std::move(value)); return *this;}
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
