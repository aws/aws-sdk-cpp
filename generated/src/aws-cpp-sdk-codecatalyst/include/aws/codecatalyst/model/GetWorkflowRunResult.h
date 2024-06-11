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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCatalyst
{
namespace Model
{
  class GetWorkflowRunResult
  {
  public:
    AWS_CODECATALYST_API GetWorkflowRunResult();
    AWS_CODECATALYST_API GetWorkflowRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API GetWorkflowRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline GetWorkflowRunResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline GetWorkflowRunResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline GetWorkflowRunResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }
    inline GetWorkflowRunResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline GetWorkflowRunResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline GetWorkflowRunResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetWorkflowRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetWorkflowRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetWorkflowRunResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline GetWorkflowRunResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline GetWorkflowRunResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline GetWorkflowRunResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the workflow run.</p>
     */
    inline const WorkflowRunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const WorkflowRunStatus& value) { m_status = value; }
    inline void SetStatus(WorkflowRunStatus&& value) { m_status = std::move(value); }
    inline GetWorkflowRunResult& WithStatus(const WorkflowRunStatus& value) { SetStatus(value); return *this;}
    inline GetWorkflowRunResult& WithStatus(WorkflowRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the reasons for the status of the workflow run.</p>
     */
    inline const Aws::Vector<WorkflowRunStatusReason>& GetStatusReasons() const{ return m_statusReasons; }
    inline void SetStatusReasons(const Aws::Vector<WorkflowRunStatusReason>& value) { m_statusReasons = value; }
    inline void SetStatusReasons(Aws::Vector<WorkflowRunStatusReason>&& value) { m_statusReasons = std::move(value); }
    inline GetWorkflowRunResult& WithStatusReasons(const Aws::Vector<WorkflowRunStatusReason>& value) { SetStatusReasons(value); return *this;}
    inline GetWorkflowRunResult& WithStatusReasons(Aws::Vector<WorkflowRunStatusReason>&& value) { SetStatusReasons(std::move(value)); return *this;}
    inline GetWorkflowRunResult& AddStatusReasons(const WorkflowRunStatusReason& value) { m_statusReasons.push_back(value); return *this; }
    inline GetWorkflowRunResult& AddStatusReasons(WorkflowRunStatusReason&& value) { m_statusReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow run began, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetWorkflowRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetWorkflowRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow run ended, in coordinated universal time (UTC)
     * timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetWorkflowRunResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetWorkflowRunResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the workflow run status was last updated, in coordinated
     * universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a> </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline GetWorkflowRunResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline GetWorkflowRunResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_id;

    Aws::String m_workflowId;

    WorkflowRunStatus m_status;

    Aws::Vector<WorkflowRunStatusReason> m_statusReasons;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
