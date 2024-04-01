/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/TaskSearchSummary.h>
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
namespace deadline
{
namespace Model
{
  class SearchTasksResult
  {
  public:
    AWS_DEADLINE_API SearchTasksResult();
    AWS_DEADLINE_API SearchTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API SearchTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline int GetNextItemOffset() const{ return m_nextItemOffset; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline void SetNextItemOffset(int value) { m_nextItemOffset = value; }

    /**
     * <p>The next incremental starting point after the defined
     * <code>itemOffset</code>.</p>
     */
    inline SearchTasksResult& WithNextItemOffset(int value) { SetNextItemOffset(value); return *this;}


    /**
     * <p>Tasks in the search.</p>
     */
    inline const Aws::Vector<TaskSearchSummary>& GetTasks() const{ return m_tasks; }

    /**
     * <p>Tasks in the search.</p>
     */
    inline void SetTasks(const Aws::Vector<TaskSearchSummary>& value) { m_tasks = value; }

    /**
     * <p>Tasks in the search.</p>
     */
    inline void SetTasks(Aws::Vector<TaskSearchSummary>&& value) { m_tasks = std::move(value); }

    /**
     * <p>Tasks in the search.</p>
     */
    inline SearchTasksResult& WithTasks(const Aws::Vector<TaskSearchSummary>& value) { SetTasks(value); return *this;}

    /**
     * <p>Tasks in the search.</p>
     */
    inline SearchTasksResult& WithTasks(Aws::Vector<TaskSearchSummary>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>Tasks in the search.</p>
     */
    inline SearchTasksResult& AddTasks(const TaskSearchSummary& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>Tasks in the search.</p>
     */
    inline SearchTasksResult& AddTasks(TaskSearchSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of results in the search.</p>
     */
    inline int GetTotalResults() const{ return m_totalResults; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline void SetTotalResults(int value) { m_totalResults = value; }

    /**
     * <p>The total number of results in the search.</p>
     */
    inline SearchTasksResult& WithTotalResults(int value) { SetTotalResults(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_nextItemOffset;

    Aws::Vector<TaskSearchSummary> m_tasks;

    int m_totalResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
