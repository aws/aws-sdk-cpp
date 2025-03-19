/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageExecution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/TransitionState.h>
#include <aws/codepipeline/model/StageConditionState.h>
#include <aws/codepipeline/model/RetryStageMetadata.h>
#include <aws/codepipeline/model/ActionState.h>
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
   * <p>Represents information about the state of the stage.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageState">AWS
   * API Reference</a></p>
   */
  class StageState
  {
  public:
    AWS_CODEPIPELINE_API StageState() = default;
    AWS_CODEPIPELINE_API StageState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    StageState& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StageExecution& GetInboundExecution() const { return m_inboundExecution; }
    inline bool InboundExecutionHasBeenSet() const { return m_inboundExecutionHasBeenSet; }
    template<typename InboundExecutionT = StageExecution>
    void SetInboundExecution(InboundExecutionT&& value) { m_inboundExecutionHasBeenSet = true; m_inboundExecution = std::forward<InboundExecutionT>(value); }
    template<typename InboundExecutionT = StageExecution>
    StageState& WithInboundExecution(InboundExecutionT&& value) { SetInboundExecution(std::forward<InboundExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound executions for a stage.</p>
     */
    inline const Aws::Vector<StageExecution>& GetInboundExecutions() const { return m_inboundExecutions; }
    inline bool InboundExecutionsHasBeenSet() const { return m_inboundExecutionsHasBeenSet; }
    template<typename InboundExecutionsT = Aws::Vector<StageExecution>>
    void SetInboundExecutions(InboundExecutionsT&& value) { m_inboundExecutionsHasBeenSet = true; m_inboundExecutions = std::forward<InboundExecutionsT>(value); }
    template<typename InboundExecutionsT = Aws::Vector<StageExecution>>
    StageState& WithInboundExecutions(InboundExecutionsT&& value) { SetInboundExecutions(std::forward<InboundExecutionsT>(value)); return *this;}
    template<typename InboundExecutionsT = StageExecution>
    StageState& AddInboundExecutions(InboundExecutionsT&& value) { m_inboundExecutionsHasBeenSet = true; m_inboundExecutions.emplace_back(std::forward<InboundExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline const TransitionState& GetInboundTransitionState() const { return m_inboundTransitionState; }
    inline bool InboundTransitionStateHasBeenSet() const { return m_inboundTransitionStateHasBeenSet; }
    template<typename InboundTransitionStateT = TransitionState>
    void SetInboundTransitionState(InboundTransitionStateT&& value) { m_inboundTransitionStateHasBeenSet = true; m_inboundTransitionState = std::forward<InboundTransitionStateT>(value); }
    template<typename InboundTransitionStateT = TransitionState>
    StageState& WithInboundTransitionState(InboundTransitionStateT&& value) { SetInboundTransitionState(std::forward<InboundTransitionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the stage.</p>
     */
    inline const Aws::Vector<ActionState>& GetActionStates() const { return m_actionStates; }
    inline bool ActionStatesHasBeenSet() const { return m_actionStatesHasBeenSet; }
    template<typename ActionStatesT = Aws::Vector<ActionState>>
    void SetActionStates(ActionStatesT&& value) { m_actionStatesHasBeenSet = true; m_actionStates = std::forward<ActionStatesT>(value); }
    template<typename ActionStatesT = Aws::Vector<ActionState>>
    StageState& WithActionStates(ActionStatesT&& value) { SetActionStates(std::forward<ActionStatesT>(value)); return *this;}
    template<typename ActionStatesT = ActionState>
    StageState& AddActionStates(ActionStatesT&& value) { m_actionStatesHasBeenSet = true; m_actionStates.emplace_back(std::forward<ActionStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline const StageExecution& GetLatestExecution() const { return m_latestExecution; }
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }
    template<typename LatestExecutionT = StageExecution>
    void SetLatestExecution(LatestExecutionT&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::forward<LatestExecutionT>(value); }
    template<typename LatestExecutionT = StageExecution>
    StageState& WithLatestExecution(LatestExecutionT&& value) { SetLatestExecution(std::forward<LatestExecutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the entry conditions for a stage.</p>
     */
    inline const StageConditionState& GetBeforeEntryConditionState() const { return m_beforeEntryConditionState; }
    inline bool BeforeEntryConditionStateHasBeenSet() const { return m_beforeEntryConditionStateHasBeenSet; }
    template<typename BeforeEntryConditionStateT = StageConditionState>
    void SetBeforeEntryConditionState(BeforeEntryConditionStateT&& value) { m_beforeEntryConditionStateHasBeenSet = true; m_beforeEntryConditionState = std::forward<BeforeEntryConditionStateT>(value); }
    template<typename BeforeEntryConditionStateT = StageConditionState>
    StageState& WithBeforeEntryConditionState(BeforeEntryConditionStateT&& value) { SetBeforeEntryConditionState(std::forward<BeforeEntryConditionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the success conditions for a stage.</p>
     */
    inline const StageConditionState& GetOnSuccessConditionState() const { return m_onSuccessConditionState; }
    inline bool OnSuccessConditionStateHasBeenSet() const { return m_onSuccessConditionStateHasBeenSet; }
    template<typename OnSuccessConditionStateT = StageConditionState>
    void SetOnSuccessConditionState(OnSuccessConditionStateT&& value) { m_onSuccessConditionStateHasBeenSet = true; m_onSuccessConditionState = std::forward<OnSuccessConditionStateT>(value); }
    template<typename OnSuccessConditionStateT = StageConditionState>
    StageState& WithOnSuccessConditionState(OnSuccessConditionStateT&& value) { SetOnSuccessConditionState(std::forward<OnSuccessConditionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the failure conditions for a stage.</p>
     */
    inline const StageConditionState& GetOnFailureConditionState() const { return m_onFailureConditionState; }
    inline bool OnFailureConditionStateHasBeenSet() const { return m_onFailureConditionStateHasBeenSet; }
    template<typename OnFailureConditionStateT = StageConditionState>
    void SetOnFailureConditionState(OnFailureConditionStateT&& value) { m_onFailureConditionStateHasBeenSet = true; m_onFailureConditionState = std::forward<OnFailureConditionStateT>(value); }
    template<typename OnFailureConditionStateT = StageConditionState>
    StageState& WithOnFailureConditionState(OnFailureConditionStateT&& value) { SetOnFailureConditionState(std::forward<OnFailureConditionStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he details of a specific automatic retry on stage failure, including the
     * attempt number and trigger.</p>
     */
    inline const RetryStageMetadata& GetRetryStageMetadata() const { return m_retryStageMetadata; }
    inline bool RetryStageMetadataHasBeenSet() const { return m_retryStageMetadataHasBeenSet; }
    template<typename RetryStageMetadataT = RetryStageMetadata>
    void SetRetryStageMetadata(RetryStageMetadataT&& value) { m_retryStageMetadataHasBeenSet = true; m_retryStageMetadata = std::forward<RetryStageMetadataT>(value); }
    template<typename RetryStageMetadataT = RetryStageMetadata>
    StageState& WithRetryStageMetadata(RetryStageMetadataT&& value) { SetRetryStageMetadata(std::forward<RetryStageMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    StageExecution m_inboundExecution;
    bool m_inboundExecutionHasBeenSet = false;

    Aws::Vector<StageExecution> m_inboundExecutions;
    bool m_inboundExecutionsHasBeenSet = false;

    TransitionState m_inboundTransitionState;
    bool m_inboundTransitionStateHasBeenSet = false;

    Aws::Vector<ActionState> m_actionStates;
    bool m_actionStatesHasBeenSet = false;

    StageExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;

    StageConditionState m_beforeEntryConditionState;
    bool m_beforeEntryConditionStateHasBeenSet = false;

    StageConditionState m_onSuccessConditionState;
    bool m_onSuccessConditionStateHasBeenSet = false;

    StageConditionState m_onFailureConditionState;
    bool m_onFailureConditionStateHasBeenSet = false;

    RetryStageMetadata m_retryStageMetadata;
    bool m_retryStageMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
