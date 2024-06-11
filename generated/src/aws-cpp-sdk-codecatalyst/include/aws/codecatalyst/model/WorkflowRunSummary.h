/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/WorkflowRunStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecatalyst/model/WorkflowRunStatusReason.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a workflow run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/WorkflowRunSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowRunSummary
  {
  public:
    AWS_CODECATALYST_API WorkflowRunSummary();
    AWS_CODECATALYST_API WorkflowRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API WorkflowRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated unique ID of the workflow run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkflowRunSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkflowRunSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkflowRunSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated unique ID of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline WorkflowRunSummary& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline WorkflowRunSummary& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline WorkflowRunSummary& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }
    inline WorkflowRunSummary& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline WorkflowRunSummary& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline WorkflowRunSummary& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow run.</p>
     */
    inline const WorkflowRunStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkflowRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkflowRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkflowRunSummary& WithStatus(const WorkflowRunStatus& value) { SetStatus(value); return *this;}
    inline WorkflowRunSummary& WithStatus(WorkflowRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the workflow run status.</p>
     */
    inline const Aws::Vector<WorkflowRunStatusReason>& GetStatusReasons() const{ return m_statusReasons; }
    inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
    inline void SetStatusReasons(const Aws::Vector<WorkflowRunStatusReason>& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = value; }
    inline void SetStatusReasons(Aws::Vector<WorkflowRunStatusReason>&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::move(value); }
    inline WorkflowRunSummary& WithStatusReasons(const Aws::Vector<WorkflowRunStatusReason>& value) { SetStatusReasons(value); return *this;}
    inline WorkflowRunSummary& WithStatusReasons(Aws::Vector<WorkflowRunStatusReason>&& value) { SetStatusReasons(std::move(value)); return *this;}
    inline WorkflowRunSummary& AddStatusReasons(const WorkflowRunStatusReason& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.push_back(value); return *this; }
    inline WorkflowRunSummary& AddStatusReasons(WorkflowRunStatusReason&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow run began, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline WorkflowRunSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline WorkflowRunSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow run ended, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline WorkflowRunSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline WorkflowRunSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow was last updated, in coordinated universal
     * time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline WorkflowRunSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline WorkflowRunSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    WorkflowRunStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<WorkflowRunStatusReason> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
