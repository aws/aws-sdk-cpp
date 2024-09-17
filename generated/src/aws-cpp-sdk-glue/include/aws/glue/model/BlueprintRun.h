/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BlueprintRunState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The details of a blueprint run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BlueprintRun">AWS
   * API Reference</a></p>
   */
  class BlueprintRun
  {
  public:
    AWS_GLUE_API BlueprintRun();
    AWS_GLUE_API BlueprintRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BlueprintRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const{ return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    inline void SetBlueprintName(const Aws::String& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = value; }
    inline void SetBlueprintName(Aws::String&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::move(value); }
    inline void SetBlueprintName(const char* value) { m_blueprintNameHasBeenSet = true; m_blueprintName.assign(value); }
    inline BlueprintRun& WithBlueprintName(const Aws::String& value) { SetBlueprintName(value); return *this;}
    inline BlueprintRun& WithBlueprintName(Aws::String&& value) { SetBlueprintName(std::move(value)); return *this;}
    inline BlueprintRun& WithBlueprintName(const char* value) { SetBlueprintName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline BlueprintRun& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline BlueprintRun& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline BlueprintRun& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a workflow that is created as a result of a successful blueprint
     * run. If a blueprint run has an error, there will not be a workflow created.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }
    inline BlueprintRun& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline BlueprintRun& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline BlueprintRun& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the blueprint run. Possible values are:</p> <ul> <li> <p>Running
     * — The blueprint run is in progress.</p> </li> <li> <p>Succeeded — The blueprint
     * run completed successfully.</p> </li> <li> <p>Failed — The blueprint run failed
     * and rollback is complete.</p> </li> <li> <p>Rolling Back — The blueprint run
     * failed and rollback is in progress.</p> </li> </ul>
     */
    inline const BlueprintRunState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const BlueprintRunState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(BlueprintRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline BlueprintRun& WithState(const BlueprintRunState& value) { SetState(value); return *this;}
    inline BlueprintRun& WithState(BlueprintRunState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the blueprint run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }
    inline BlueprintRun& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline BlueprintRun& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the blueprint run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const{ return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    inline void SetCompletedOn(const Aws::Utils::DateTime& value) { m_completedOnHasBeenSet = true; m_completedOn = value; }
    inline void SetCompletedOn(Aws::Utils::DateTime&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::move(value); }
    inline BlueprintRun& WithCompletedOn(const Aws::Utils::DateTime& value) { SetCompletedOn(value); return *this;}
    inline BlueprintRun& WithCompletedOn(Aws::Utils::DateTime&& value) { SetCompletedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates any errors that are seen while running the blueprint.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline BlueprintRun& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline BlueprintRun& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline BlueprintRun& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are any errors while creating the entities of a workflow, we try to
     * roll back the created entities until that point and delete them. This attribute
     * indicates the errors seen while trying to delete the entities that are
     * created.</p>
     */
    inline const Aws::String& GetRollbackErrorMessage() const{ return m_rollbackErrorMessage; }
    inline bool RollbackErrorMessageHasBeenSet() const { return m_rollbackErrorMessageHasBeenSet; }
    inline void SetRollbackErrorMessage(const Aws::String& value) { m_rollbackErrorMessageHasBeenSet = true; m_rollbackErrorMessage = value; }
    inline void SetRollbackErrorMessage(Aws::String&& value) { m_rollbackErrorMessageHasBeenSet = true; m_rollbackErrorMessage = std::move(value); }
    inline void SetRollbackErrorMessage(const char* value) { m_rollbackErrorMessageHasBeenSet = true; m_rollbackErrorMessage.assign(value); }
    inline BlueprintRun& WithRollbackErrorMessage(const Aws::String& value) { SetRollbackErrorMessage(value); return *this;}
    inline BlueprintRun& WithRollbackErrorMessage(Aws::String&& value) { SetRollbackErrorMessage(std::move(value)); return *this;}
    inline BlueprintRun& WithRollbackErrorMessage(const char* value) { SetRollbackErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint parameters as a string. You will have to provide a value for
     * each key that is required from the parameter spec that is defined in the
     * <code>Blueprint$ParameterSpec</code>.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }
    inline BlueprintRun& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}
    inline BlueprintRun& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}
    inline BlueprintRun& WithParameters(const char* value) { SetParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN. This role will be assumed by the Glue service and will be used
     * to create the workflow and other entities of a workflow.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline BlueprintRun& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline BlueprintRun& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline BlueprintRun& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    BlueprintRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn;
    bool m_completedOnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_rollbackErrorMessage;
    bool m_rollbackErrorMessageHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
