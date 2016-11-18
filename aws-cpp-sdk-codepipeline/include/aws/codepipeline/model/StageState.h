/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/TransitionState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/StageExecution.h>
#include <aws/codepipeline/model/ActionState.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about the state of the stage.</p>
   */
  class AWS_CODEPIPELINE_API StageState
  {
  public:
    StageState();
    StageState(const Aws::Utils::Json::JsonValue& jsonValue);
    StageState& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

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
    inline StageState& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageState& WithStageName(const char* value) { SetStageName(value); return *this;}

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline const TransitionState& GetInboundTransitionState() const{ return m_inboundTransitionState; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline void SetInboundTransitionState(const TransitionState& value) { m_inboundTransitionStateHasBeenSet = true; m_inboundTransitionState = value; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline void SetInboundTransitionState(TransitionState&& value) { m_inboundTransitionStateHasBeenSet = true; m_inboundTransitionState = value; }

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline StageState& WithInboundTransitionState(const TransitionState& value) { SetInboundTransitionState(value); return *this;}

    /**
     * <p>The state of the inbound transition, which is either enabled or disabled.</p>
     */
    inline StageState& WithInboundTransitionState(TransitionState&& value) { SetInboundTransitionState(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline const Aws::Vector<ActionState>& GetActionStates() const{ return m_actionStates; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetActionStates(const Aws::Vector<ActionState>& value) { m_actionStatesHasBeenSet = true; m_actionStates = value; }

    /**
     * <p>The state of the stage.</p>
     */
    inline void SetActionStates(Aws::Vector<ActionState>&& value) { m_actionStatesHasBeenSet = true; m_actionStates = value; }

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& WithActionStates(const Aws::Vector<ActionState>& value) { SetActionStates(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& WithActionStates(Aws::Vector<ActionState>&& value) { SetActionStates(value); return *this;}

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& AddActionStates(const ActionState& value) { m_actionStatesHasBeenSet = true; m_actionStates.push_back(value); return *this; }

    /**
     * <p>The state of the stage.</p>
     */
    inline StageState& AddActionStates(ActionState&& value) { m_actionStatesHasBeenSet = true; m_actionStates.push_back(value); return *this; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline const StageExecution& GetLatestExecution() const{ return m_latestExecution; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline void SetLatestExecution(const StageExecution& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline void SetLatestExecution(StageExecution&& value) { m_latestExecutionHasBeenSet = true; m_latestExecution = value; }

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline StageState& WithLatestExecution(const StageExecution& value) { SetLatestExecution(value); return *this;}

    /**
     * <p>Information about the latest execution in the stage, including its ID and
     * status.</p>
     */
    inline StageState& WithLatestExecution(StageExecution&& value) { SetLatestExecution(value); return *this;}

  private:
    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;
    TransitionState m_inboundTransitionState;
    bool m_inboundTransitionStateHasBeenSet;
    Aws::Vector<ActionState> m_actionStates;
    bool m_actionStatesHasBeenSet;
    StageExecution m_latestExecution;
    bool m_latestExecutionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
