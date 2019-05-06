/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/ActionExecutionStatus.h>
#include <aws/codepipeline/model/ActionExecutionInput.h>
#include <aws/codepipeline/model/ActionExecutionOutput.h>
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
   * <p>Returns information about an execution of an action, including the action
   * execution ID, and the name, version, and timing of the action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionExecutionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionExecutionDetail
  {
  public:
    ActionExecutionDetail();
    ActionExecutionDetail(Aws::Utils::Json::JsonView jsonValue);
    ActionExecutionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline ActionExecutionDetail& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline ActionExecutionDetail& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline ActionExecutionDetail& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>The action execution ID.</p>
     */
    inline const Aws::String& GetActionExecutionId() const{ return m_actionExecutionId; }

    /**
     * <p>The action execution ID.</p>
     */
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }

    /**
     * <p>The action execution ID.</p>
     */
    inline void SetActionExecutionId(const Aws::String& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = value; }

    /**
     * <p>The action execution ID.</p>
     */
    inline void SetActionExecutionId(Aws::String&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::move(value); }

    /**
     * <p>The action execution ID.</p>
     */
    inline void SetActionExecutionId(const char* value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId.assign(value); }

    /**
     * <p>The action execution ID.</p>
     */
    inline ActionExecutionDetail& WithActionExecutionId(const Aws::String& value) { SetActionExecutionId(value); return *this;}

    /**
     * <p>The action execution ID.</p>
     */
    inline ActionExecutionDetail& WithActionExecutionId(Aws::String&& value) { SetActionExecutionId(std::move(value)); return *this;}

    /**
     * <p>The action execution ID.</p>
     */
    inline ActionExecutionDetail& WithActionExecutionId(const char* value) { SetActionExecutionId(value); return *this;}


    /**
     * <p>The version of the pipeline where the action was run.</p>
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }

    /**
     * <p>The version of the pipeline where the action was run.</p>
     */
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }

    /**
     * <p>The version of the pipeline where the action was run.</p>
     */
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }

    /**
     * <p>The version of the pipeline where the action was run.</p>
     */
    inline ActionExecutionDetail& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}


    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline ActionExecutionDetail& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline ActionExecutionDetail& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline ActionExecutionDetail& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the action.</p>
     */
    inline ActionExecutionDetail& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionExecutionDetail& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the action.</p>
     */
    inline ActionExecutionDetail& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>The start time of the action execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the action execution.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the action execution.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the action execution.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the action execution.</p>
     */
    inline ActionExecutionDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the action execution.</p>
     */
    inline ActionExecutionDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The last update time of the action execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last update time of the action execution.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last update time of the action execution.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last update time of the action execution.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last update time of the action execution.</p>
     */
    inline ActionExecutionDetail& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last update time of the action execution.</p>
     */
    inline ActionExecutionDetail& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline const ActionExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline void SetStatus(const ActionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline void SetStatus(ActionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline ActionExecutionDetail& WithStatus(const ActionExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline ActionExecutionDetail& WithStatus(ActionExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline const ActionExecutionInput& GetInput() const{ return m_input; }

    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline void SetInput(const ActionExecutionInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline void SetInput(ActionExecutionInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline ActionExecutionDetail& WithInput(const ActionExecutionInput& value) { SetInput(value); return *this;}

    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline ActionExecutionDetail& WithInput(ActionExecutionInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline const ActionExecutionOutput& GetOutput() const{ return m_output; }

    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }

    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline void SetOutput(const ActionExecutionOutput& value) { m_outputHasBeenSet = true; m_output = value; }

    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline void SetOutput(ActionExecutionOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }

    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline ActionExecutionDetail& WithOutput(const ActionExecutionOutput& value) { SetOutput(value); return *this;}

    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline ActionExecutionDetail& WithOutput(ActionExecutionOutput&& value) { SetOutput(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet;

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet;

    int m_pipelineVersion;
    bool m_pipelineVersionHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    ActionExecutionStatus m_status;
    bool m_statusHasBeenSet;

    ActionExecutionInput m_input;
    bool m_inputHasBeenSet;

    ActionExecutionOutput m_output;
    bool m_outputHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
