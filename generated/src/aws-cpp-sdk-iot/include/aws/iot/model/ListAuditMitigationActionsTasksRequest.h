/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsTaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListAuditMitigationActionsTasksRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuditMitigationActionsTasks"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specify this filter to limit results to tasks that were applied to results
     * for a specific audit.</p>
     */
    inline const Aws::String& GetAuditTaskId() const{ return m_auditTaskId; }
    inline bool AuditTaskIdHasBeenSet() const { return m_auditTaskIdHasBeenSet; }
    inline void SetAuditTaskId(const Aws::String& value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId = value; }
    inline void SetAuditTaskId(Aws::String&& value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId = std::move(value); }
    inline void SetAuditTaskId(const char* value) { m_auditTaskIdHasBeenSet = true; m_auditTaskId.assign(value); }
    inline ListAuditMitigationActionsTasksRequest& WithAuditTaskId(const Aws::String& value) { SetAuditTaskId(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithAuditTaskId(Aws::String&& value) { SetAuditTaskId(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithAuditTaskId(const char* value) { SetAuditTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to tasks that were applied to a specific
     * audit finding.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline ListAuditMitigationActionsTasksRequest& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to tasks that are in a specific
     * state.</p>
     */
    inline const AuditMitigationActionsTaskStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const AuditMitigationActionsTaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(AuditMitigationActionsTaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline ListAuditMitigationActionsTasksRequest& WithTaskStatus(const AuditMitigationActionsTaskStatus& value) { SetTaskStatus(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithTaskStatus(AuditMitigationActionsTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAuditMitigationActionsTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAuditMitigationActionsTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to tasks that began on or after a
     * specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListAuditMitigationActionsTasksRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this filter to limit results to tasks that were completed or canceled
     * on or before a specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListAuditMitigationActionsTasksRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListAuditMitigationActionsTasksRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_auditTaskId;
    bool m_auditTaskIdHasBeenSet = false;

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    AuditMitigationActionsTaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
