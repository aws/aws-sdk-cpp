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
    AWS_GLUE_API BlueprintRun() = default;
    AWS_GLUE_API BlueprintRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API BlueprintRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    template<typename BlueprintNameT = Aws::String>
    void SetBlueprintName(BlueprintNameT&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::forward<BlueprintNameT>(value); }
    template<typename BlueprintNameT = Aws::String>
    BlueprintRun& WithBlueprintName(BlueprintNameT&& value) { SetBlueprintName(std::forward<BlueprintNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run ID for this blueprint run.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    BlueprintRun& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a workflow that is created as a result of a successful blueprint
     * run. If a blueprint run has an error, there will not be a workflow created.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    BlueprintRun& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the blueprint run. Possible values are:</p> <ul> <li> <p>Running
     * — The blueprint run is in progress.</p> </li> <li> <p>Succeeded — The blueprint
     * run completed successfully.</p> </li> <li> <p>Failed — The blueprint run failed
     * and rollback is complete.</p> </li> <li> <p>Rolling Back — The blueprint run
     * failed and rollback is in progress.</p> </li> </ul>
     */
    inline BlueprintRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(BlueprintRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline BlueprintRun& WithState(BlueprintRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the blueprint run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const { return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    template<typename StartedOnT = Aws::Utils::DateTime>
    void SetStartedOn(StartedOnT&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::forward<StartedOnT>(value); }
    template<typename StartedOnT = Aws::Utils::DateTime>
    BlueprintRun& WithStartedOn(StartedOnT&& value) { SetStartedOn(std::forward<StartedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the blueprint run completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedOn() const { return m_completedOn; }
    inline bool CompletedOnHasBeenSet() const { return m_completedOnHasBeenSet; }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    void SetCompletedOn(CompletedOnT&& value) { m_completedOnHasBeenSet = true; m_completedOn = std::forward<CompletedOnT>(value); }
    template<typename CompletedOnT = Aws::Utils::DateTime>
    BlueprintRun& WithCompletedOn(CompletedOnT&& value) { SetCompletedOn(std::forward<CompletedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates any errors that are seen while running the blueprint.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BlueprintRun& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there are any errors while creating the entities of a workflow, we try to
     * roll back the created entities until that point and delete them. This attribute
     * indicates the errors seen while trying to delete the entities that are
     * created.</p>
     */
    inline const Aws::String& GetRollbackErrorMessage() const { return m_rollbackErrorMessage; }
    inline bool RollbackErrorMessageHasBeenSet() const { return m_rollbackErrorMessageHasBeenSet; }
    template<typename RollbackErrorMessageT = Aws::String>
    void SetRollbackErrorMessage(RollbackErrorMessageT&& value) { m_rollbackErrorMessageHasBeenSet = true; m_rollbackErrorMessage = std::forward<RollbackErrorMessageT>(value); }
    template<typename RollbackErrorMessageT = Aws::String>
    BlueprintRun& WithRollbackErrorMessage(RollbackErrorMessageT&& value) { SetRollbackErrorMessage(std::forward<RollbackErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blueprint parameters as a string. You will have to provide a value for
     * each key that is required from the parameter spec that is defined in the
     * <code>Blueprint$ParameterSpec</code>.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    BlueprintRun& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role ARN. This role will be assumed by the Glue service and will be used
     * to create the workflow and other entities of a workflow.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    BlueprintRun& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    BlueprintRunState m_state{BlueprintRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn{};
    bool m_startedOnHasBeenSet = false;

    Aws::Utils::DateTime m_completedOn{};
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
