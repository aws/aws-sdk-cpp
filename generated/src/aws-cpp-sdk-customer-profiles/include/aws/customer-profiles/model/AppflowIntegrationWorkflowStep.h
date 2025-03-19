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
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep() = default;
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AppflowIntegrationWorkflowStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the flow created during execution of workflow step.
     * <code>APPFLOW_INTEGRATION</code> workflow type creates an appflow flow during
     * workflow step execution on the customers behalf.</p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    AppflowIntegrationWorkflowStep& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow step status for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AppflowIntegrationWorkflowStep& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message indicating execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetExecutionMessage() const { return m_executionMessage; }
    inline bool ExecutionMessageHasBeenSet() const { return m_executionMessageHasBeenSet; }
    template<typename ExecutionMessageT = Aws::String>
    void SetExecutionMessage(ExecutionMessageT&& value) { m_executionMessageHasBeenSet = true; m_executionMessage = std::forward<ExecutionMessageT>(value); }
    template<typename ExecutionMessageT = Aws::String>
    AppflowIntegrationWorkflowStep& WithExecutionMessage(ExecutionMessageT&& value) { SetExecutionMessage(std::forward<ExecutionMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of records processed during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline long long GetRecordsProcessed() const { return m_recordsProcessed; }
    inline bool RecordsProcessedHasBeenSet() const { return m_recordsProcessedHasBeenSet; }
    inline void SetRecordsProcessed(long long value) { m_recordsProcessedHasBeenSet = true; m_recordsProcessed = value; }
    inline AppflowIntegrationWorkflowStep& WithRecordsProcessed(long long value) { SetRecordsProcessed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start datetime of records pulled in batch during execution of workflow step
     * for <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetBatchRecordsStartTime() const { return m_batchRecordsStartTime; }
    inline bool BatchRecordsStartTimeHasBeenSet() const { return m_batchRecordsStartTimeHasBeenSet; }
    template<typename BatchRecordsStartTimeT = Aws::String>
    void SetBatchRecordsStartTime(BatchRecordsStartTimeT&& value) { m_batchRecordsStartTimeHasBeenSet = true; m_batchRecordsStartTime = std::forward<BatchRecordsStartTimeT>(value); }
    template<typename BatchRecordsStartTimeT = Aws::String>
    AppflowIntegrationWorkflowStep& WithBatchRecordsStartTime(BatchRecordsStartTimeT&& value) { SetBatchRecordsStartTime(std::forward<BatchRecordsStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>End datetime of records pulled in batch during execution of workflow step for
     * <code>APPFLOW_INTEGRATION</code> workflow.</p>
     */
    inline const Aws::String& GetBatchRecordsEndTime() const { return m_batchRecordsEndTime; }
    inline bool BatchRecordsEndTimeHasBeenSet() const { return m_batchRecordsEndTimeHasBeenSet; }
    template<typename BatchRecordsEndTimeT = Aws::String>
    void SetBatchRecordsEndTime(BatchRecordsEndTimeT&& value) { m_batchRecordsEndTimeHasBeenSet = true; m_batchRecordsEndTime = std::forward<BatchRecordsEndTimeT>(value); }
    template<typename BatchRecordsEndTimeT = Aws::String>
    AppflowIntegrationWorkflowStep& WithBatchRecordsEndTime(BatchRecordsEndTimeT&& value) { SetBatchRecordsEndTime(std::forward<BatchRecordsEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation timestamp of workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AppflowIntegrationWorkflowStep& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last updated timestamp for workflow step for <code>APPFLOW_INTEGRATION</code>
     * workflow.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    AppflowIntegrationWorkflowStep& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_executionMessage;
    bool m_executionMessageHasBeenSet = false;

    long long m_recordsProcessed{0};
    bool m_recordsProcessedHasBeenSet = false;

    Aws::String m_batchRecordsStartTime;
    bool m_batchRecordsStartTimeHasBeenSet = false;

    Aws::String m_batchRecordsEndTime;
    bool m_batchRecordsEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
