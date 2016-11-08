/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/TaskObject.h>

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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of PollForTask.</p>
   */
  class AWS_DATAPIPELINE_API PollForTaskResult
  {
  public:
    PollForTaskResult();
    PollForTaskResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PollForTaskResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The information needed to complete the task that is being assigned to the
     * task runner. One of the fields returned in this object is <code>taskId</code>,
     * which contains an identifier for the task being assigned. The calling task
     * runner uses <code>taskId</code> in subsequent calls to <a>ReportTaskProgress</a>
     * and <a>SetTaskStatus</a>.</p>
     */
    inline const TaskObject& GetTaskObject() const{ return m_taskObject; }

    /**
     * <p>The information needed to complete the task that is being assigned to the
     * task runner. One of the fields returned in this object is <code>taskId</code>,
     * which contains an identifier for the task being assigned. The calling task
     * runner uses <code>taskId</code> in subsequent calls to <a>ReportTaskProgress</a>
     * and <a>SetTaskStatus</a>.</p>
     */
    inline void SetTaskObject(const TaskObject& value) { m_taskObject = value; }

    /**
     * <p>The information needed to complete the task that is being assigned to the
     * task runner. One of the fields returned in this object is <code>taskId</code>,
     * which contains an identifier for the task being assigned. The calling task
     * runner uses <code>taskId</code> in subsequent calls to <a>ReportTaskProgress</a>
     * and <a>SetTaskStatus</a>.</p>
     */
    inline void SetTaskObject(TaskObject&& value) { m_taskObject = value; }

    /**
     * <p>The information needed to complete the task that is being assigned to the
     * task runner. One of the fields returned in this object is <code>taskId</code>,
     * which contains an identifier for the task being assigned. The calling task
     * runner uses <code>taskId</code> in subsequent calls to <a>ReportTaskProgress</a>
     * and <a>SetTaskStatus</a>.</p>
     */
    inline PollForTaskResult& WithTaskObject(const TaskObject& value) { SetTaskObject(value); return *this;}

    /**
     * <p>The information needed to complete the task that is being assigned to the
     * task runner. One of the fields returned in this object is <code>taskId</code>,
     * which contains an identifier for the task being assigned. The calling task
     * runner uses <code>taskId</code> in subsequent calls to <a>ReportTaskProgress</a>
     * and <a>SetTaskStatus</a>.</p>
     */
    inline PollForTaskResult& WithTaskObject(TaskObject&& value) { SetTaskObject(value); return *this;}

  private:
    TaskObject m_taskObject;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
