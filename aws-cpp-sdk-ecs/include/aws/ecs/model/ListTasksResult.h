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
  class AWS_ECS_API ListTasksResult
  {
  public:
    ListTasksResult();
    ListTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
