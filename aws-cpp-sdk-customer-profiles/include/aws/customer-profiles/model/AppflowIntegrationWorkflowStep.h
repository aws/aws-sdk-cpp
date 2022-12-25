/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/Status.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Workflow step details for <code>APPFLOW_INTEGRATION</code>
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AppflowIntegrationWorkflowStep">AWS
   * API Reference</a></p>
   */
  class AppflowIntegrationWorkflowStep
  {
  public:
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep();
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetExecutionMessage() const{ return m_executionMessage; }

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool ExecutionMessageHasBeenSet() const { return m_executionMessageHasBeenSet; }

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetExecutionMessage(const Aws::String& value) { m_executionMessageHasBeenSet = true; m_executionMessage = value; }

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetExecutionMessage(Aws::String&& value) { m_executionMessageHasBeenSet = true; m_executionMessage = std::move(value); }

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetExecutionMessage(const char* value) { m_executionMessageHasBeenSet = true; m_executionMessage.assign(value); }

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithExecutionMessage(const Aws::String& value) { SetExecutionMessage(value); return *this;}

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithExecutionMessage(Aws::String&& value) { SetExecutionMessage(std::move(value)); return *this;}

    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithExecutionMessage(const char* value) { SetExecutionMessage(value); return *this;}


    /**
     * <p>Total number of records processed during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline long long GetRecordsProcessed() const{ return m_recordsProcessed; }

    /**
     * <p>Total number of records processed during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }

    /**
     * <p>Total number of records processed during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }

    /**
     * <p>Total number of records processed during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}


    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetBatchRecordsStartTime() const{ return m_batchRecordsStartTime; }

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool BatchRecordsStartTimeHasBeenSet() const { return m_batchRecordsStartTimeHasBeenSet; }

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsStartTime(const Aws::String& value) { m_batchRecordsStartTimeHasBeenSet = true; m_batchRecordsStartTime = value; }

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsStartTime(Aws::String&& value) { m_batchRecordsStartTimeHasBeenSet = true; m_batchRecordsStartTime = std::move(value); }

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsStartTime(const char* value) { m_batchRecordsStartTimeHasBeenSet = true; m_batchRecordsStartTime.assign(value); }

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsStartTime(const Aws::String& value) { SetBatchRecordsStartTime(value); return *this;}

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsStartTime(Aws::String&& value) { SetBatchRecordsStartTime(std::move(value)); return *this;}

    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsStartTime(const char* value) { SetBatchRecordsStartTime(value); return *this;}


    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetBatchRecordsEndTime() const{ return m_batchRecordsEndTime; }

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline bool BatchRecordsEndTimeHasBeenSet() const { return m_batchRecordsEndTimeHasBeenSet; }

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsEndTime(const Aws::String& value) { m_batchRecordsEndTimeHasBeenSet = true; m_batchRecordsEndTime = value; }

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsEndTime(Aws::String&& value) { m_batchRecordsEndTimeHasBeenSet = true; m_batchRecordsEndTime = std::move(value); }

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline void SetBatchRecordsEndTime(const char* value) { m_batchRecordsEndTimeHasBeenSet = true; m_batchRecordsEndTime.assign(value); }

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsEndTime(const Aws::String& value) { SetBatchRecordsEndTime(value); return *this;}

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsEndTime(Aws::String&& value) { SetBatchRecordsEndTime(std::move(value)); return *this;}

    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithBatchRecordsEndTime(const char* value) { SetBatchRecordsEndTime(value); return *this;}


    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline AppflowIntegrationWorkflowStep& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_executionMessage;
    bool m_executionMessageHasBeenSet = false;

    long long m_recordsProcessed;
    bool m_recordsProcessedHasBeenSet = false;

    Aws::String m_batchRecordsStartTime;
    bool m_batchRecordsStartTimeHasBeenSet = false;

    Aws::String m_batchRecordsEndTime;
    bool m_batchRecordsEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
