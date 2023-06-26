/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageExecution.h>
#include <aws/codepipeline/model/TransitionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CODEPIPELINE_API StageState();
    AWS_CODEPIPELINE_API StageState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline StageState& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageState& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageState& WithStageName(const char* value) { SetStageName(value); return *this;}


    
    inline const StageExecution& GetInboundExecution() const{ return m_inboundExecution; }

    
    inline bool InboundExecutionHasBeenSet() const { return m_inboundExecutionHasBeenSet; }

    
    inline void SetInboundExecution(const StageExecution& value) { m_inboundExecutionHasBeenSet = true; m_inboundExecution = value; }

    
    inline void SetInboundExecution(StageExecution&& value) { m_inboundExecutionHasBeenSet = true; m_inboundExecution = std::move(value); }

    
    inline StageState& WithInboundExecution(const StageExecution& value) { SetInboundExecution(value); return *this;}

    
    inline StageState& WithInboundExecution(StageExecution&& value) { SetInboundExecution(std::move(value)); return *this;}


    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline const TransitionState& GetInboundTransitionState() const{ return m_inboundTransitionState; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline bool InboundTransitionStateHasBeenSet() const { return m_inboundTransitionStateHasBeenSet; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline void SetInboundTransitionState(const TransitionState& value) { m_inboundTransitionStateHasBeenSet = true; m_inboundTransitionState = value; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline void SetInboundTransitionState(TransitionState&& value) { m_inboundTransitionStateHasBeenSet = true; m_inboundTransitionState = std::move(value); }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline StageState& WithInboundTransitionState(const TransitionState& value) { SetInboundTransitionState(value); return *this;}

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline StageState& WithInboundTransitionState(TransitionState&& value) { SetInboundTransitionState(std::move(value)); return *this;}


    /**
     * <p>The state of the stage.</p>
     */
    inline const Aws::Vector<ActionState>& GetActionStates() const{ return m_actionStates; }

    /**
     * <p>The state of the stage.</p>
     */
    inline bool ActionStatesHasBeenSet() const { return m_actionStatesHasBeenSet; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetActionStates(const Aws::Vector<ActionState>& value) { m_actionStatesHasBeenSet = true; m_actionStates = value; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetActionStates(Aws::Vector<ActionState>&& value) { m_actionStatesHasBeenSet = true; m_actionStates = std::move(value); }

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& WithActionStates(const Aws::Vector<ActionState>& value) { SetActionStates(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& WithActionStates(Aws::Vector<ActionState>&& value) { SetActionStates(std::move(value)); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& AddActionStates(const ActionState& value) { m_actionStatesHasBeenSet = true; m_actionStates.push_back(value); return *this; }

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& AddActionStates(ActionState&& value) { m_actionStatesHasBeenSet = true; m_actionStates.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline const StageExecution& GetLatestExecution() const{ return m_latestExecution; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline bool LatestExecutionHasBeenSet() const { return m_latestExecutionHasBeenSet; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline void SetLatestExecution(const StageExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline void SetLatestExecution(StageExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = std::move(value); }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline StageState& WithLatestExecution(const StageExecution& value) { SetLatestExecution(value); return *this;}

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline StageState& WithLatestExecution(StageExecution&& value) { SetLatestExecution(std::move(value)); return *this;}

  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    StageExecution m_inboundExecution;
    bool m_inboundExecutionHasBeenSet = false;

    TransitionState m_inboundTransitionState;
    bool m_inboundTransitionStateHasBeenSet = false;

    Aws::Vector<ActionState> m_actionStates;
    bool m_actionStatesHasBeenSet = false;

    StageExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
