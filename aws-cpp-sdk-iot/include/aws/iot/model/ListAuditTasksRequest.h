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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/AuditTaskType.h>
#include <aws/iot/model/AuditTaskStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IOT_API ListAuditTasksRequest : public IoTRequest
  {
  public:
    ListAuditTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuditTasks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline ListAuditTasksRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The beginning of the time period. Note that audit information is retained for
     * a limited time (180 days). Requesting a start time prior to what is retained
     * results in an "InvalidRequestException".</p>
     */
    inline ListAuditTasksRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period.</p>
     */
    inline ListAuditTasksRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period.</p>
     */
    inline ListAuditTasksRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline const AuditTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline void SetTaskType(const AuditTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline void SetTaskType(AuditTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline ListAuditTasksRequest& WithTaskType(const AuditTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>A filter to limit the output to the specified type of audit: can be one of
     * "ON_DEMAND_AUDIT_TASK" or "SCHEDULED__AUDIT_TASK".</p>
     */
    inline ListAuditTasksRequest& WithTaskType(AuditTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline const AuditTaskStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline void SetTaskStatus(const AuditTaskStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline void SetTaskStatus(AuditTaskStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline ListAuditTasksRequest& WithTaskStatus(const AuditTaskStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>A filter to limit the output to audits with the specified completion status:
     * can be one of "IN_PROGRESS", "COMPLETED", "FAILED" or "CANCELED".</p>
     */
    inline ListAuditTasksRequest& WithTaskStatus(AuditTaskStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline ListAuditTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    AuditTaskType m_taskType;
    bool m_taskTypeHasBeenSet;

    AuditTaskStatus m_taskStatus;
    bool m_taskStatusHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
