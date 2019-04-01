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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/ExecutionMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/ResolvedTargets.h>
#include <aws/ssm/model/AutomationType.h>
#include <aws/ssm/model/Target.h>
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
   * <p>Details about a specific Automation execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AutomationExecutionMetadata
  {
  public:
    AutomationExecutionMetadata();
    AutomationExecutionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AutomationExecutionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AutomationExecutionMetadata& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AutomationExecutionMetadata& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID.</p>
     */
    inline AutomationExecutionMetadata& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Automation document used during execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}


    /**
     * <p>The document version used during the execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>The document version used during the execution.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>The document version used during the execution.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>The document version used during the execution.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>The document version used during the execution.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>The document version used during the execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>The document version used during the execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>The document version used during the execution.</p>
     */
    inline AutomationExecutionMetadata& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline const AutomationExecutionStatus& GetAutomationExecutionStatus() const{ return m_automationExecutionStatus; }

    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline bool AutomationExecutionStatusHasBeenSet() const { return m_automationExecutionStatusHasBeenSet; }

    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline void SetAutomationExecutionStatus(const AutomationExecutionStatus& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = value; }

    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline void SetAutomationExecutionStatus(AutomationExecutionStatus&& value) { m_automationExecutionStatusHasBeenSet = true; m_automationExecutionStatus = std::move(value); }

    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline AutomationExecutionMetadata& WithAutomationExecutionStatus(const AutomationExecutionStatus& value) { SetAutomationExecutionStatus(value); return *this;}

    /**
     * <p>The status of the execution. Valid values include: Running, Succeeded,
     * Failed, Timed out, or Cancelled.</p>
     */
    inline AutomationExecutionMetadata& WithAutomationExecutionStatus(AutomationExecutionStatus&& value) { SetAutomationExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStartTime() const{ return m_executionStartTime; }

    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline bool ExecutionStartTimeHasBeenSet() const { return m_executionStartTimeHasBeenSet; }

    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline void SetExecutionStartTime(const Aws::Utils::DateTime& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = value; }

    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline void SetExecutionStartTime(Aws::Utils::DateTime&& value) { m_executionStartTimeHasBeenSet = true; m_executionStartTime = std::move(value); }

    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline AutomationExecutionMetadata& WithExecutionStartTime(const Aws::Utils::DateTime& value) { SetExecutionStartTime(value); return *this;}

    /**
     * <p>The time the execution started.&gt;</p>
     */
    inline AutomationExecutionMetadata& WithExecutionStartTime(Aws::Utils::DateTime&& value) { SetExecutionStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionEndTime() const{ return m_executionEndTime; }

    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline bool ExecutionEndTimeHasBeenSet() const { return m_executionEndTimeHasBeenSet; }

    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline void SetExecutionEndTime(const Aws::Utils::DateTime& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = value; }

    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline void SetExecutionEndTime(Aws::Utils::DateTime&& value) { m_executionEndTimeHasBeenSet = true; m_executionEndTime = std::move(value); }

    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline AutomationExecutionMetadata& WithExecutionEndTime(const Aws::Utils::DateTime& value) { SetExecutionEndTime(value); return *this;}

    /**
     * <p>The time the execution finished. This is not populated if the execution is
     * still in progress.</p>
     */
    inline AutomationExecutionMetadata& WithExecutionEndTime(Aws::Utils::DateTime&& value) { SetExecutionEndTime(std::move(value)); return *this;}


    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const{ return m_executedBy; }

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline bool ExecutedByHasBeenSet() const { return m_executedByHasBeenSet; }

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline void SetExecutedBy(const Aws::String& value) { m_executedByHasBeenSet = true; m_executedBy = value; }

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline void SetExecutedBy(Aws::String&& value) { m_executedByHasBeenSet = true; m_executedBy = std::move(value); }

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline void SetExecutedBy(const char* value) { m_executedByHasBeenSet = true; m_executedBy.assign(value); }

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(const Aws::String& value) { SetExecutedBy(value); return *this;}

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(Aws::String&& value) { SetExecutedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN of the user who ran the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(const char* value) { SetExecutedBy(value); return *this;}


    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline const Aws::String& GetLogFile() const{ return m_logFile; }

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline bool LogFileHasBeenSet() const { return m_logFileHasBeenSet; }

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline void SetLogFile(const Aws::String& value) { m_logFileHasBeenSet = true; m_logFile = value; }

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline void SetLogFile(Aws::String&& value) { m_logFileHasBeenSet = true; m_logFile = std::move(value); }

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline void SetLogFile(const char* value) { m_logFileHasBeenSet = true; m_logFile.assign(value); }

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline AutomationExecutionMetadata& WithLogFile(const Aws::String& value) { SetLogFile(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline AutomationExecutionMetadata& WithLogFile(Aws::String&& value) { SetLogFile(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline AutomationExecutionMetadata& WithLogFile(const char* value) { SetLogFile(value); return *this;}


    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& AddOutputs(const char* key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }


    /**
     * <p>The Automation execution mode.</p>
     */
    inline const ExecutionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The Automation execution mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The Automation execution mode.</p>
     */
    inline void SetMode(const ExecutionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The Automation execution mode.</p>
     */
    inline void SetMode(ExecutionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The Automation execution mode.</p>
     */
    inline AutomationExecutionMetadata& WithMode(const ExecutionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The Automation execution mode.</p>
     */
    inline AutomationExecutionMetadata& WithMode(ExecutionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline const Aws::String& GetParentAutomationExecutionId() const{ return m_parentAutomationExecutionId; }

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline bool ParentAutomationExecutionIdHasBeenSet() const { return m_parentAutomationExecutionIdHasBeenSet; }

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline void SetParentAutomationExecutionId(const Aws::String& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = value; }

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline void SetParentAutomationExecutionId(Aws::String&& value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId = std::move(value); }

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline void SetParentAutomationExecutionId(const char* value) { m_parentAutomationExecutionIdHasBeenSet = true; m_parentAutomationExecutionId.assign(value); }

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline AutomationExecutionMetadata& WithParentAutomationExecutionId(const Aws::String& value) { SetParentAutomationExecutionId(value); return *this;}

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline AutomationExecutionMetadata& WithParentAutomationExecutionId(Aws::String&& value) { SetParentAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ExecutionId of the parent Automation.</p>
     */
    inline AutomationExecutionMetadata& WithParentAutomationExecutionId(const char* value) { SetParentAutomationExecutionId(value); return *this;}


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
    inline AutomationExecutionMetadata& WithCurrentStepName(const Aws::String& value) { SetCurrentStepName(value); return *this;}

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline AutomationExecutionMetadata& WithCurrentStepName(Aws::String&& value) { SetCurrentStepName(std::move(value)); return *this;}

    /**
     * <p>The name of the step that is currently running.</p>
     */
    inline AutomationExecutionMetadata& WithCurrentStepName(const char* value) { SetCurrentStepName(value); return *this;}


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
    inline AutomationExecutionMetadata& WithCurrentAction(const Aws::String& value) { SetCurrentAction(value); return *this;}

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline AutomationExecutionMetadata& WithCurrentAction(Aws::String&& value) { SetCurrentAction(std::move(value)); return *this;}

    /**
     * <p>The action of the step that is currently running.</p>
     */
    inline AutomationExecutionMetadata& WithCurrentAction(const char* value) { SetCurrentAction(value); return *this;}


    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline const Aws::String& GetTargetParameterName() const{ return m_targetParameterName; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline bool TargetParameterNameHasBeenSet() const { return m_targetParameterNameHasBeenSet; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTargetParameterName(const Aws::String& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = value; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTargetParameterName(Aws::String&& value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTargetParameterName(const char* value) { m_targetParameterNameHasBeenSet = true; m_targetParameterName.assign(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTargetParameterName(const Aws::String& value) { SetTargetParameterName(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTargetParameterName(Aws::String&& value) { SetTargetParameterName(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTargetParameterName(const char* value) { SetTargetParameterName(value); return *this;}


    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets defined by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


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
    inline AutomationExecutionMetadata& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecutionMetadata& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecutionMetadata& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }

    /**
     * <p>The specified key-value mapping of document parameters to target
     * resources.</p>
     */
    inline AutomationExecutionMetadata& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline const ResolvedTargets& GetResolvedTargets() const{ return m_resolvedTargets; }

    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline bool ResolvedTargetsHasBeenSet() const { return m_resolvedTargetsHasBeenSet; }

    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline void SetResolvedTargets(const ResolvedTargets& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = value; }

    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline void SetResolvedTargets(ResolvedTargets&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::move(value); }

    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline AutomationExecutionMetadata& WithResolvedTargets(const ResolvedTargets& value) { SetResolvedTargets(value); return *this;}

    /**
     * <p>A list of targets that resolved during the execution.</p>
     */
    inline AutomationExecutionMetadata& WithResolvedTargets(ResolvedTargets&& value) { SetResolvedTargets(std::move(value)); return *this;}


    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The MaxConcurrency value specified by the user when starting the
     * Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The MaxErrors value specified by the user when starting the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the Automation document.</p>
     */
    inline AutomationExecutionMetadata& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline const AutomationType& GetAutomationType() const{ return m_automationType; }

    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline bool AutomationTypeHasBeenSet() const { return m_automationTypeHasBeenSet; }

    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline void SetAutomationType(const AutomationType& value) { m_automationTypeHasBeenSet = true; m_automationType = value; }

    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline void SetAutomationType(AutomationType&& value) { m_automationTypeHasBeenSet = true; m_automationType = std::move(value); }

    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline AutomationExecutionMetadata& WithAutomationType(const AutomationType& value) { SetAutomationType(value); return *this;}

    /**
     * <p>Use this filter with <a>DescribeAutomationExecutions</a>. Specify either
     * Local or CrossAccount. CrossAccount is an Automation that runs in multiple AWS
     * Regions and accounts. For more information, see <a
     * href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-automation-multiple-accounts-and-regions.html">Executing
     * Automations in Multiple AWS Regions and Accounts</a> in the <i>AWS Systems
     * Manager User Guide</i>. </p>
     */
    inline AutomationExecutionMetadata& WithAutomationType(AutomationType&& value) { SetAutomationType(std::move(value)); return *this;}

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;

    AutomationExecutionStatus m_automationExecutionStatus;
    bool m_automationExecutionStatusHasBeenSet;

    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet;

    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet;

    Aws::String m_executedBy;
    bool m_executedByHasBeenSet;

    Aws::String m_logFile;
    bool m_logFileHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet;

    ExecutionMode m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_parentAutomationExecutionId;
    bool m_parentAutomationExecutionIdHasBeenSet;

    Aws::String m_currentStepName;
    bool m_currentStepNameHasBeenSet;

    Aws::String m_currentAction;
    bool m_currentActionHasBeenSet;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;

    Aws::String m_targetParameterName;
    bool m_targetParameterNameHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet;

    ResolvedTargets m_resolvedTargets;
    bool m_resolvedTargetsHasBeenSet;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;

    AutomationType m_automationType;
    bool m_automationTypeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
