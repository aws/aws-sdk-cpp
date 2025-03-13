/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskSet.h>
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
  class CreateTaskSetResult
  {
  public:
    AWS_ECS_API CreateTaskSetResult() = default;
    AWS_ECS_API CreateTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API CreateTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline const TaskSet& GetTaskSet() const { return m_taskSet; }
    template<typename TaskSetT = TaskSet>
    void SetTaskSet(TaskSetT&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::forward<TaskSetT>(value); }
    template<typename TaskSetT = TaskSet>
    CreateTaskSetResult& WithTaskSet(TaskSetT&& value) { SetTaskSet(std::forward<TaskSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTaskSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TaskSet m_taskSet;
    bool m_taskSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
