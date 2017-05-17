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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Details about a specific Automation execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AutomationExecutionMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AutomationExecutionMetadata
  {
  public:
    AutomationExecutionMetadata();
    AutomationExecutionMetadata(const Aws::Utils::Json::JsonValue& jsonValue);
    AutomationExecutionMetadata& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline const Aws::String& GetExecutedBy() const{ return m_executedBy; }

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline void SetExecutedBy(const Aws::String& value) { m_executedByHasBeenSet = true; m_executedBy = value; }

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline void SetExecutedBy(Aws::String&& value) { m_executedByHasBeenSet = true; m_executedBy = std::move(value); }

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline void SetExecutedBy(const char* value) { m_executedByHasBeenSet = true; m_executedBy.assign(value); }

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(const Aws::String& value) { SetExecutedBy(value); return *this;}

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(Aws::String&& value) { SetExecutedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN of the user who executed the Automation.</p>
     */
    inline AutomationExecutionMetadata& WithExecutedBy(const char* value) { SetExecutedBy(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where execution information is stored.</p>
     */
    inline const Aws::String& GetLogFile() const{ return m_logFile; }

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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
