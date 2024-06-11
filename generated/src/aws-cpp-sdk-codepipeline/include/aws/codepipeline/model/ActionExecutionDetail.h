﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ActionExecutionDetail
  {
  public:
    AWS_CODEPIPELINE_API ActionExecutionDetail();
    AWS_CODEPIPELINE_API ActionExecutionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionExecutionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The pipeline execution ID for the action execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }
    inline ActionExecutionDetail& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}
    inline ActionExecutionDetail& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}
    inline ActionExecutionDetail& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action execution ID.</p>
     */
    inline const Aws::String& GetActionExecutionId() const{ return m_actionExecutionId; }
    inline bool ActionExecutionIdHasBeenSet() const { return m_actionExecutionIdHasBeenSet; }
    inline void SetActionExecutionId(const Aws::String& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = value; }
    inline void SetActionExecutionId(Aws::String&& value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId = std::move(value); }
    inline void SetActionExecutionId(const char* value) { m_actionExecutionIdHasBeenSet = true; m_actionExecutionId.assign(value); }
    inline ActionExecutionDetail& WithActionExecutionId(const Aws::String& value) { SetActionExecutionId(value); return *this;}
    inline ActionExecutionDetail& WithActionExecutionId(Aws::String&& value) { SetActionExecutionId(std::move(value)); return *this;}
    inline ActionExecutionDetail& WithActionExecutionId(const char* value) { SetActionExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the pipeline where the action was run.</p>
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline ActionExecutionDetail& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage that contains the action.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline ActionExecutionDetail& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline ActionExecutionDetail& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline ActionExecutionDetail& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline ActionExecutionDetail& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline ActionExecutionDetail& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline ActionExecutionDetail& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the action execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ActionExecutionDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ActionExecutionDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the action execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ActionExecutionDetail& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ActionExecutionDetail& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who changed the pipeline execution details.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline ActionExecutionDetail& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline ActionExecutionDetail& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline ActionExecutionDetail& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the action execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>.</p>
     */
    inline const ActionExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ActionExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ActionExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ActionExecutionDetail& WithStatus(const ActionExecutionStatus& value) { SetStatus(value); return *this;}
    inline ActionExecutionDetail& WithStatus(ActionExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input details for the action execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline const ActionExecutionInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const ActionExecutionInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(ActionExecutionInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline ActionExecutionDetail& WithInput(const ActionExecutionInput& value) { SetInput(value); return *this;}
    inline ActionExecutionDetail& WithInput(ActionExecutionInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output details for the action execution, such as the action execution
     * result.</p>
     */
    inline const ActionExecutionOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const ActionExecutionOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(ActionExecutionOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline ActionExecutionDetail& WithOutput(const ActionExecutionOutput& value) { SetOutput(value); return *this;}
    inline ActionExecutionDetail& WithOutput(ActionExecutionOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    Aws::String m_actionExecutionId;
    bool m_actionExecutionIdHasBeenSet = false;

    int m_pipelineVersion;
    bool m_pipelineVersionHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    ActionExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    ActionExecutionInput m_input;
    bool m_inputHasBeenSet = false;

    ActionExecutionOutput m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
