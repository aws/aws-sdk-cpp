/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/model/TaskObject.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of PollForTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PollForTaskOutput">AWS
   * API Reference</a></p>
   */
  class PollForTaskResult
  {
  public:
    AWS_DATAPIPELINE_API PollForTaskResult();
    AWS_DATAPIPELINE_API PollForTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API PollForTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetTaskObject(TaskObject&& value) { m_taskObject = std::move(value); }

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
    inline PollForTaskResult& WithTaskObject(TaskObject&& value) { SetTaskObject(std::move(value)); return *this;}

  private:

    TaskObject m_taskObject;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
