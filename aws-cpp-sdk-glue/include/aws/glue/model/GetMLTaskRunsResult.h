/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TaskRun.h>
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
namespace Glue
{
namespace Model
{
  class GetMLTaskRunsResult
  {
  public:
    AWS_GLUE_API GetMLTaskRunsResult();
    AWS_GLUE_API GetMLTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline const Aws::Vector<TaskRun>& GetTaskRuns() const{ return m_taskRuns; }

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline void SetTaskRuns(const Aws::Vector<TaskRun>& value) { m_taskRuns = value; }

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline void SetTaskRuns(Aws::Vector<TaskRun>&& value) { m_taskRuns = std::move(value); }

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline GetMLTaskRunsResult& WithTaskRuns(const Aws::Vector<TaskRun>& value) { SetTaskRuns(value); return *this;}

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline GetMLTaskRunsResult& WithTaskRuns(Aws::Vector<TaskRun>&& value) { SetTaskRuns(std::move(value)); return *this;}

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline GetMLTaskRunsResult& AddTaskRuns(const TaskRun& value) { m_taskRuns.push_back(value); return *this; }

    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline GetMLTaskRunsResult& AddTaskRuns(TaskRun&& value) { m_taskRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTaskRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTaskRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline GetMLTaskRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TaskRun> m_taskRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
