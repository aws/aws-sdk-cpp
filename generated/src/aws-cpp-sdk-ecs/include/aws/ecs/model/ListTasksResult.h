/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{
  class ListTasksResult
  {
  public:
    AWS_ECS_API ListTasksResult();
    AWS_ECS_API ListTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskArns() const{ return m_taskArns; }

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline void SetTaskArns(const Aws::Vector<Aws::String>& value) { m_taskArns = value; }

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline void SetTaskArns(Aws::Vector<Aws::String>&& value) { m_taskArns = std::move(value); }

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline ListTasksResult& WithTaskArns(const Aws::Vector<Aws::String>& value) { SetTaskArns(value); return *this;}

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline ListTasksResult& WithTaskArns(Aws::Vector<Aws::String>&& value) { SetTaskArns(std::move(value)); return *this;}

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline ListTasksResult& AddTaskArns(const Aws::String& value) { m_taskArns.push_back(value); return *this; }

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline ListTasksResult& AddTaskArns(Aws::String&& value) { m_taskArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of task ARN entries for the <code>ListTasks</code> request.</p>
     */
    inline ListTasksResult& AddTaskArns(const char* value) { m_taskArns.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline ListTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline ListTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTasks</code> request. When the results of a <code>ListTasks</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return.</p>
     */
    inline ListTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_taskArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
