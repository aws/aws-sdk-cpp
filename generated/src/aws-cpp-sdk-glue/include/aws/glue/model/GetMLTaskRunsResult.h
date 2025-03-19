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
    AWS_GLUE_API GetMLTaskRunsResult() = default;
    AWS_GLUE_API GetMLTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetMLTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of task runs that are associated with the transform.</p>
     */
    inline const Aws::Vector<TaskRun>& GetTaskRuns() const { return m_taskRuns; }
    template<typename TaskRunsT = Aws::Vector<TaskRun>>
    void SetTaskRuns(TaskRunsT&& value) { m_taskRunsHasBeenSet = true; m_taskRuns = std::forward<TaskRunsT>(value); }
    template<typename TaskRunsT = Aws::Vector<TaskRun>>
    GetMLTaskRunsResult& WithTaskRuns(TaskRunsT&& value) { SetTaskRuns(std::forward<TaskRunsT>(value)); return *this;}
    template<typename TaskRunsT = TaskRun>
    GetMLTaskRunsResult& AddTaskRuns(TaskRunsT&& value) { m_taskRunsHasBeenSet = true; m_taskRuns.emplace_back(std::forward<TaskRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMLTaskRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMLTaskRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaskRun> m_taskRuns;
    bool m_taskRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
