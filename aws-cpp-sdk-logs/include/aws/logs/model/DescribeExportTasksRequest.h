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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ExportTaskStatusCode.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeExportTasksRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeExportTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportTasks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the export task. Specifying a task ID filters the results to zero
     * or one export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline const ExportTaskStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline void SetStatusCode(const ExportTaskStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline void SetStatusCode(ExportTaskStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithStatusCode(const ExportTaskStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code of the export task. Specifying a status code filters the
     * results to zero or more export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithStatusCode(ExportTaskStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeExportTasksRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    ExportTaskStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
