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
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AutomationExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/StepExecution.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_SSM_API AutomationExecution
  {
  public:
    AutomationExecution();
    AutomationExecution(const Aws::Utils::Json::JsonValue& jsonValue);
    AutomationExecution& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The execution ID.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

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
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline const Aws::String& GetDocumentName() const{ return m_documentName; }

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline void SetDocumentName(const Aws::String& value) { m_documentNameHasBeenSet = true; m_documentName = value; }

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline void SetDocumentName(Aws::String&& value) { m_documentNameHasBeenSet = true; m_documentName = std::move(value); }

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline void SetDocumentName(const char* value) { m_documentNameHasBeenSet = true; m_documentName.assign(value); }

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(const Aws::String& value) { SetDocumentName(value); return *this;}

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(Aws::String&& value) { SetDocumentName(std::move(value)); return *this;}

    /**
     * <p>The name of the Automation document used during the execution.</p>
     */
    inline AutomationExecution& WithDocumentName(const char* value) { SetDocumentName(value); return *this;}

    /**
     * <p>The version of the document to use during execution.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

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
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const{ return m_stepExecutions; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline void SetStepExecutions(const Aws::Vector<StepExecution>& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = value; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline void SetStepExecutions(Aws::Vector<StepExecution>&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = std::move(value); }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline AutomationExecution& WithStepExecutions(const Aws::Vector<StepExecution>& value) { SetStepExecutions(value); return *this;}

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline AutomationExecution& WithStepExecutions(Aws::Vector<StepExecution>&& value) { SetStepExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline AutomationExecution& AddStepExecutions(const StepExecution& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(value); return *this; }

    /**
     * <p>A list of details about the current state of all steps that comprise an
     * execution. An Automation document contains a list of steps that are executed in
     * order.</p>
     */
    inline AutomationExecution& AddStepExecutions(StepExecution&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.push_back(std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of execution parameters, which were supplied when calling
     * <code>StartAutomationExecution</code>.</p>
     */
    inline AutomationExecution& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline void SetOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline void SetOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& WithOutputs(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& WithOutputs(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& AddOutputs(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& AddOutputs(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& AddOutputs(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& AddOutputs(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
     */
    inline AutomationExecution& AddOutputs(const char* key, Aws::Vector<Aws::String>&& value) { m_outputsHasBeenSet = true; m_outputs.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of execution outputs as defined in the automation document.</p>
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

  private:
    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet;
    Aws::String m_documentName;
    bool m_documentNameHasBeenSet;
    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet;
    Aws::Utils::DateTime m_executionStartTime;
    bool m_executionStartTimeHasBeenSet;
    Aws::Utils::DateTime m_executionEndTime;
    bool m_executionEndTimeHasBeenSet;
    AutomationExecutionStatus m_automationExecutionStatus;
    bool m_automationExecutionStatusHasBeenSet;
    Aws::Vector<StepExecution> m_stepExecutions;
    bool m_stepExecutionsHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_outputs;
    bool m_outputsHasBeenSet;
    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
