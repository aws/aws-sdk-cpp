/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/ssm/model/ProgressCounters.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/AutomationSubtype.h>
#include <aws/ssm/model/StepExecution.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <aws/ssm/model/AlarmStateInformation.h>
#include <aws/ssm/model/Runbook.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Detailed information about the current state of an individual Automation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecution">AWS
   * API Reference</a></p>
   */
  class AutomationExecution
  {
  public:
    AWS_SSM_API AutomationExecution();
    AWS_SSM_API AutomationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AutomationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The execution ID.</p>
     */
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The execution ID.</p>
     */
    inline AutomationExecution& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AutomationExecution& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AutomationExecution& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Automation runbook used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline AutomationExecution& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline AutomationExecution& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline AutomationExecution& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }

    /**
     * <p>The time the execution started.</p>
     */
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }

    /**
     * <p>The time the execution started.</p>
     */
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }

    /**
     * <p>The time the execution started.</p>
     */
    inline AutomationExecution& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}

    /**
     * <p>The time the execution started.</p>
     */
    inline AutomationExecution& WithExecutionStartTime(Aws::Utils::DateTime&& value) { SetExecutionStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the execution finished.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const{ return m_executionEndTime; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline void SetExecutionEndTime(const Aws::Utils::DateTime& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = value; }

    /**
     * <p>The time the execution finished.</p>
     */
    inline void SetExecutionEndTime(Aws::Utils::DateTime&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::move(value); }

    /**
     * <p>The time the execution finished.</p>
     */
    inline AutomationExecution& WithExecutionEndTime(const Aws::Utils::DateTime& value) { SetExecutionEndTime(value); return *this;}

    /**
     * <p>The time the execution finished.</p>
     */
    inline AutomationExecution& WithExecutionEndTime(Aws::Utils::DateTime&& value) { SetExecutionEndTime(std::move(value)); return *this;}


    /**
     * <p>The execution status of the Automation.</p>
     */
    inline const AutomationExecutionStatus& GetAutomationExecutionStatus() const{ return m_automationExecutionStatus; }

    /**
     * <p>The execution status of the Automation.</p>
     */
    inline bool AutomationExecutionStatusHasBeenSet() const { return m_automationExecutionStatusHasBeenSet; }

    /**
     * <p>The execution status of the Automation.</p>
     */
    inline void SetAutomationExecutionStatus(const AutomationExecutionStatus& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = value; }

    /**
     * <p>The execution status of the Automation.</p>
     */
    inline void SetAutomationExecutionStatus(AutomationExecutionStatus&& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = std::move(value); }

    /**
     * <p>The execution status of the Automation.</p>
     */
    inline AutomationExecution& WithAutomationExecutionStatus(const AutomationExecutionStatus& value) { SetAutomationExecutionStatus(value); return *this;}

    /**
     * <p>The execution status of the Automation.</p>
     */
    inline AutomationExecution& WithAutomationExecutionStatus(AutomationExecutionStatus&& value) { SetAutomationExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const{ return m_stepExecutions; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline bool StepExecutionsHasBeenSet() const { return m_stepExecutionsHasBeenSet; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline void SetStepExecutions(const Aws::Vector<StepExecution>& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = value; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline void SetStepExecutions(Aws::Vector<StepExecution>&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = std::move(value); }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline AutomationExecution& WithStepExecutions(const Aws::Vector<StepExecution>& value) { SetStepExecutions(value); return *this;}

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline AutomationExecution& WithStepExecutions(Aws::Vector<StepExecution>&& value) { SetStepExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline AutomationExecution& AddStepExecutions(const StepExecution& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(value); return *this; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation runbook contains a list of steps that are run in
     * order.</p>
     */
    inline AutomationExecution& AddStepExecutions(StepExecution&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline bool GetStepExecutionsTruncated() const{ return m_stepExecutionsTruncated; }

    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline bool StepExecutionsTruncatedHasBeenSet() const { return m_stepExecutionsTruncatedHasBeenSet; }

    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline void SetStepExecutionsTruncated(bool value) { m_stepExecutionsTruncatedHasBeenSet = true; m_stepExecutionsTruncated = value; }

    /**
     * <p>A boolean value that indicates if the response contains the full list of the
     * Automation step executions. If true, use the DescribeAutomationStepExecutions
     * API operation to get the full list of step executions.</p>
     */
    inline AutomationExecution& WithStepExecutionsTruncated(bool value) { SetStepExecutionsTruncated(value); return *this;}


    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <a>StartAutomationExecution</a>.</p>
     */
    inline AutomationExecution& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation runbook.</p>
     */
    inline AutomationExecution& AddOutputs(const char* key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }


    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline AutomationExecution& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline AutomationExecution& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing why an execution has failed, if the status is set to
     * Failed.</p>
     */
    inline AutomationExecution& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>The automation execution mode.</p>
     */
    inline const ExecutionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The automation execution mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The automation execution mode.</p>
     */
    inline void SetMode(const ExecutionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The automation execution mode.</p>
     */
    inline void SetMode(ExecutionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The automation execution mode.</p>
     */
    inline AutomationExecution& WithMode(const ExecutionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The automation execution mode.</p>
     */
    inline AutomationExecution& WithMode(ExecutionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline const Aws::String& GetParentAutomationExecutionId() const{ return m_parentAutomationExecutionId; }

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline bool ParentAutomationExecutionIdHasBeenSet() const { return m_parentAutomationExecutionIdHasBeenSet; }

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline void SetParentAutomationExecutionId(const Aws::String& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = value; }

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline void SetParentAutomationExecutionId(Aws::String&& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = std::move(value); }

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline void SetParentAutomationExecutionId(const char* value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId.assign(value); }

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline AutomationExecution& WithParentAutomationExecutionId(const Aws::String& value) { SetParentAutomationExecutionId(value); return *this;}

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline AutomationExecution& WithParentAutomationExecutionId(Aws::String&& value) { SetParentAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The AutomationExecutionId of the parent automation.</p>
     */
    inline AutomationExecution& WithParentAutomationExecutionId(const char* value) { SetParentAutomationExecutionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const{ return m_executedBy; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline bool ExecutedByHasBeenSet() const { return m_executedByHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline void SetExecutedBy(const Aws::String& value) { m_executedByHasBeenSet = true; m_executedBy = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline void SetExecutedBy(Aws::String&& value) { m_executedByHasBeenSet = true; m_executedBy = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline void SetExecutedBy(const char* value) { m_executedByHasBeenSet = true; m_executedBy.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline AutomationExecution& WithExecutedBy(const Aws::String& value) { SetExecutedBy(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline AutomationExecution& WithExecutedBy(Aws::String&& value) { SetExecutedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who ran the automation.</p>
     */
    inline AutomationExecution& WithExecutedBy(const char* value) { SetExecutedBy(value); return *this;}


    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentStepName() const{ return m_currentStepName; }

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline bool CurrentStepNameHasBeenSet() const { return m_currentStepNameHasBeenSet; }

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline void SetCurrentStepName(const Aws::String& value) { m_currentStepNameHasBeenSet = true; m_currentStepName = value; }

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline void SetCurrentStepName(Aws::String&& value) { m_currentStepNameHasBeenSet = true; m_currentStepName = std::move(value); }

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline void SetCurrentStepName(const char* value) { m_currentStepNameHasBeenSet = true; m_currentStepName.assign(value); }

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentStepName(const Aws::String& value) { SetCurrentStepName(value); return *this;}

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentStepName(Aws::String&& value) { SetCurrentStepName(std::move(value)); return *this;}

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentStepName(const char* value) { SetCurrentStepName(value); return *this;}


    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline const Aws::String& GetCurrentAction() const{ return m_currentAction; }

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline bool CurrentActionHasBeenSet() const { return m_currentActionHasBeenSet; }

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline void SetCurrentAction(const Aws::String& value) { m_currentActionHasBeenSet = true; m_currentAction = value; }

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline void SetCurrentAction(Aws::String&& value) { m_currentActionHasBeenSet = true; m_currentAction = std::move(value); }

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline void SetCurrentAction(const char* value) { m_currentActionHasBeenSet = true; m_currentAction.assign(value); }

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentAction(const Aws::String& value) { SetCurrentAction(value); return *this;}

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentAction(Aws::String&& value) { SetCurrentAction(std::move(value)); return *this;}

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline AutomationExecution& WithCurrentAction(const char* value) { SetCurrentAction(value); return *this;}


    /**
     * <p>The parameter name.</p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }

    /**
     * <p>The parameter name.</p>
     */
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }

    /**
     * <p>The parameter name.</p>
     */
    inline AutomationExecution& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline AutomationExecution& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>The parameter name.</p>
     */
    inline AutomationExecution& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}


    /**
     * <p>The specified targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The specified targets.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The specified targets.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The specified targets.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The specified targets.</p>
     */
    inline AutomationExecution& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The specified targets.</p>
     */
    inline AutomationExecution& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The specified targets.</p>
     */
    inline AutomationExecution& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The specified targets.</p>
     */
    inline AutomationExecution& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecution& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecution& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecution& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecution& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline const ResolvedTargets& GetResolvedTargets() const{ return m_resolvedTargets; }

    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline bool ResolvedTargetsHasBeenSet() const { return m_resolvedTargetsHasBeenSet; }

    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline void SetResolvedTargets(const ResolvedTargets& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = value; }

    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline void SetResolvedTargets(ResolvedTargets&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::move(value); }

    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline AutomationExecution& WithResolvedTargets(const ResolvedTargets& value) { SetResolvedTargets(value); return *this;}

    /**
     * <p>A list of resolved targets in the rate control execution.</p>
     */
    inline AutomationExecution& WithResolvedTargets(ResolvedTargets&& value) { SetResolvedTargets(std::move(value)); return *this;}


    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline AutomationExecution& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline AutomationExecution& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The <code>MaxConcurrency</code> value specified by the user when the
     * execution started.</p>
     */
    inline AutomationExecution& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline AutomationExecution& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline AutomationExecution& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The MaxErrors value specified by the user when the execution started.</p>
     */
    inline AutomationExecution& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The target of the execution.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target of the execution.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target of the execution.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target of the execution.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target of the execution.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target of the execution.</p>
     */
    inline AutomationExecution& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target of the execution.</p>
     */
    inline AutomationExecution& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target of the execution.</p>
     */
    inline AutomationExecution& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline AutomationExecution& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline AutomationExecution& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline AutomationExecution& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }

    /**
     * <p>The combination of Amazon Web Services Regions and/or Amazon Web Services
     * accounts where you want to run the Automation.</p>
     */
    inline AutomationExecution& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }


    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline const ProgressCounters& GetProgressCounters() const{ return m_progressCounters; }

    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline bool ProgressCountersHasBeenSet() const { return m_progressCountersHasBeenSet; }

    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline void SetProgressCounters(const ProgressCounters& value) { m_progressCountersHasBeenSet = true; m_progressCounters = value; }

    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline void SetProgressCounters(ProgressCounters&& value) { m_progressCountersHasBeenSet = true; m_progressCounters = std::move(value); }

    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline AutomationExecution& WithProgressCounters(const ProgressCounters& value) { SetProgressCounters(value); return *this;}

    /**
     * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
     * Systems Manager console for a multi-Region and multi-account Automation
     * execution.</p>
     */
    inline AutomationExecution& WithProgressCounters(ProgressCounters&& value) { SetProgressCounters(std::move(value)); return *this;}


    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline AutomationExecution& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>The details for the CloudWatch alarm applied to your automation.</p>
     */
    inline AutomationExecution& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}


    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline AutomationExecution& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline AutomationExecution& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline AutomationExecution& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }

    /**
     * <p>The CloudWatch alarm that was invoked by the automation.</p>
     */
    inline AutomationExecution& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline const AutomationSubtype& GetAutomationSubtype() const{ return m_automationSubtype; }

    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline bool AutomationSubtypeHasBeenSet() const { return m_automationSubtypeHasBeenSet; }

    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline void SetAutomationSubtype(const AutomationSubtype& value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = value; }

    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline void SetAutomationSubtype(AutomationSubtype&& value) { m_automationSubtypeHasBeenSet = true; m_automationSubtype = std::move(value); }

    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline AutomationExecution& WithAutomationSubtype(const AutomationSubtype& value) { SetAutomationSubtype(value); return *this;}

    /**
     * <p>The subtype of the Automation operation. Currently, the only supported value
     * is <code>ChangeRequest</code>.</p>
     */
    inline AutomationExecution& WithAutomationSubtype(AutomationSubtype&& value) { SetAutomationSubtype(std::move(value)); return *this;}


    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }

    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }

    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }

    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }

    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline AutomationExecution& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}

    /**
     * <p>The date and time the Automation operation is scheduled to start.</p>
     */
    inline AutomationExecution& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}


    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline const Aws::Vector<Runbook>& GetRunbooks() const{ return m_runbooks; }

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline bool RunbooksHasBeenSet() const { return m_runbooksHasBeenSet; }

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetRunbooks(const Aws::Vector<Runbook>& value) { m_runbooksHasBeenSet = true; m_runbooks = value; }

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline void SetRunbooks(Aws::Vector<Runbook>&& value) { m_runbooksHasBeenSet = true; m_runbooks = std::move(value); }

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline AutomationExecution& WithRunbooks(const Aws::Vector<Runbook>& value) { SetRunbooks(value); return *this;}

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline AutomationExecution& WithRunbooks(Aws::Vector<Runbook>&& value) { SetRunbooks(std::move(value)); return *this;}

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline AutomationExecution& AddRunbooks(const Runbook& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(value); return *this; }

    /**
     * <p>Information about the Automation runbooks that are run as part of a runbook
     * workflow.</p>  <p>The Automation runbooks specified for the runbook
     * workflow can't run until all required approvals for the change request have been
     * received.</p> 
     */
    inline AutomationExecution& AddRunbooks(Runbook&& value) { m_runbooksHasBeenSet = true; m_runbooks.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline AutomationExecution& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline AutomationExecution& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of an OpsItem that is created to represent a Change Manager change
     * request.</p>
     */
    inline AutomationExecution& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline AutomationExecution& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline AutomationExecution& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of a State Manager association used in the Automation operation.</p>
     */
    inline AutomationExecution& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline const Aws::String& GetChangeRequestName() const{ return m_changeRequestName; }

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline bool ChangeRequestNameHasBeenSet() const { return m_changeRequestNameHasBeenSet; }

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline void SetChangeRequestName(const Aws::String& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = value; }

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline void SetChangeRequestName(Aws::String&& value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName = std::move(value); }

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline void SetChangeRequestName(const char* value) { m_changeRequestNameHasBeenSet = true; m_changeRequestName.assign(value); }

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline AutomationExecution& WithChangeRequestName(const Aws::String& value) { SetChangeRequestName(value); return *this;}

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline AutomationExecution& WithChangeRequestName(Aws::String&& value) { SetChangeRequestName(std::move(value)); return *this;}

    /**
     * <p>The name of the Change Manager change request.</p>
     */
    inline AutomationExecution& WithChangeRequestName(const char* value) { SetChangeRequestName(value); return *this;}

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet = false;

    AutomationExecutionStatus m_automationExecutionStatus;
    bool m_automationExecutionStatusHasBeenSet = false;

    Aws::Vector<StepExecution> m_stepExecutions;
    bool m_stepExecutionsHasBeenSet = false;

    bool m_stepExecutionsTruncated;
    bool m_stepExecutionsTruncatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    ExecutionMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_parentAutomationExecutionId;
    bool m_parentAutomationExecutionIdHasBeenSet = false;

    Aws::String m_executedBy;
    bool m_executedByHasBeenSet = false;

    Aws::String m_currentStepName;
    bool m_currentStepNameHasBeenSet = false;

    Aws::String m_currentAction;
    bool m_currentActionHasBeenSet = false;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    ResolvedTargets m_resolvedTargets;
    bool m_resolvedTargetsHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;

    ProgressCounters m_progressCounters;
    bool m_progressCountersHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;

    AutomationSubtype m_automationSubtype;
    bool m_automationSubtypeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;

    Aws::Vector<Runbook> m_runbooks;
    bool m_runbooksHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_changeRequestName;
    bool m_changeRequestNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
