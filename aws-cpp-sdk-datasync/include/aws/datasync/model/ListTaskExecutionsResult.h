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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TaskExecutionListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListTaskExecutionsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTaskExecutionsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API ListTaskExecutionsResult
  {
  public:
    ListTaskExecutionsResult();
    ListTaskExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTaskExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of executed tasks.</p>
     */
    inline const Aws::Vector<TaskExecutionListEntry>& GetTaskExecutions() const{ return m_taskExecutions; }

    /**
     * <p>A list of executed tasks.</p>
     */
    inline void SetTaskExecutions(const Aws::Vector<TaskExecutionListEntry>& value) { m_taskExecutions = value; }

    /**
     * <p>A list of executed tasks.</p>
     */
    inline void SetTaskExecutions(Aws::Vector<TaskExecutionListEntry>&& value) { m_taskExecutions = std::move(value); }

    /**
     * <p>A list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& WithTaskExecutions(const Aws::Vector<TaskExecutionListEntry>& value) { SetTaskExecutions(value); return *this;}

    /**
     * <p>A list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& WithTaskExecutions(Aws::Vector<TaskExecutionListEntry>&& value) { SetTaskExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& AddTaskExecutions(const TaskExecutionListEntry& value) { m_taskExecutions.push_back(value); return *this; }

    /**
     * <p>A list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& AddTaskExecutions(TaskExecutionListEntry&& value) { m_taskExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of executed tasks.</p>
     */
    inline ListTaskExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TaskExecutionListEntry> m_taskExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
