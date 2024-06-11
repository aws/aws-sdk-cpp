﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/TaskSummary.h>
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
  class ListTasksResult
  {
  public:
    AWS_DEADLINE_API ListTasksResult();
    AWS_DEADLINE_API ListTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API ListTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If Deadline Cloud returns <code>nextToken</code>, then there are more results
     * available. The value of <code>nextToken</code> is a unique pagination token for
     * each page. To retrieve the next page, call the operation again using the
     * returned token. Keep all other arguments unchanged. If no results remain, then
     * <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an HTTP 400 <code>ValidationException</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tasks for the job.</p>
     */
    inline const Aws::Vector<TaskSummary>& GetTasks() const{ return m_tasks; }
    inline void SetTasks(const Aws::Vector<TaskSummary>& value) { m_tasks = value; }
    inline void SetTasks(Aws::Vector<TaskSummary>&& value) { m_tasks = std::move(value); }
    inline ListTasksResult& WithTasks(const Aws::Vector<TaskSummary>& value) { SetTasks(value); return *this;}
    inline ListTasksResult& WithTasks(Aws::Vector<TaskSummary>&& value) { SetTasks(std::move(value)); return *this;}
    inline ListTasksResult& AddTasks(const TaskSummary& value) { m_tasks.push_back(value); return *this; }
    inline ListTasksResult& AddTasks(TaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TaskSummary> m_tasks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
