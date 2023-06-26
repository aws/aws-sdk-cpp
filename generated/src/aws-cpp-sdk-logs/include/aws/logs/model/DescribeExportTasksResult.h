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
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult();
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API DescribeExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The export tasks.</p>
     */
    inline const Aws::Vector<ExportTask>& GetExportTasks() const{ return m_exportTasks; }

    /**
     * <p>The export tasks.</p>
     */
    inline void SetExportTasks(const Aws::Vector<ExportTask>& value) { m_exportTasks = value; }

    /**
     * <p>The export tasks.</p>
     */
    inline void SetExportTasks(Aws::Vector<ExportTask>&& value) { m_exportTasks = std::move(value); }

    /**
     * <p>The export tasks.</p>
     */
    inline DescribeExportTasksResult& WithExportTasks(const Aws::Vector<ExportTask>& value) { SetExportTasks(value); return *this;}

    /**
     * <p>The export tasks.</p>
     */
    inline DescribeExportTasksResult& WithExportTasks(Aws::Vector<ExportTask>&& value) { SetExportTasks(std::move(value)); return *this;}

    /**
     * <p>The export tasks.</p>
     */
    inline DescribeExportTasksResult& AddExportTasks(const ExportTask& value) { m_exportTasks.push_back(value); return *this; }

    /**
     * <p>The export tasks.</p>
     */
    inline DescribeExportTasksResult& AddExportTasks(ExportTask&& value) { m_exportTasks.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeExportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeExportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeExportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeExportTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeExportTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeExportTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ExportTask> m_exportTasks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
