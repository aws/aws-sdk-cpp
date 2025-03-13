/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ExportTask.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class DescribeExportTasksResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult() = default;
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The export tasks.</p>
     */
    inline const Aws::Vector<ExportTask>& GetExportTasks() const { return m_exportTasks; }
    template<typename ExportTasksT = Aws::Vector<ExportTask>>
    void SetExportTasks(ExportTasksT&& value) { m_exportTasksHasBeenSet = true; m_exportTasks = std::forward<ExportTasksT>(value); }
    template<typename ExportTasksT = Aws::Vector<ExportTask>>
    DescribeExportTasksResult& WithExportTasks(ExportTasksT&& value) { SetExportTasks(std::forward<ExportTasksT>(value)); return *this;}
    template<typename ExportTasksT = ExportTask>
    DescribeExportTasksResult& AddExportTasks(ExportTasksT&& value) { m_exportTasksHasBeenSet = true; m_exportTasks.emplace_back(std::forward<ExportTasksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeExportTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeExportTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportTask> m_exportTasks;
    bool m_exportTasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
