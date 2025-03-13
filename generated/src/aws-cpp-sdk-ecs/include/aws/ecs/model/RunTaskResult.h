/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Task.h>
#include <aws/ecs/model/Failure.h>
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
  class RunTaskResult
  {
  public:
    AWS_ECS_API RunTaskResult() = default;
    AWS_ECS_API RunTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API RunTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p>
     */
    inline const Aws::Vector<Task>& GetTasks() const { return m_tasks; }
    template<typename TasksT = Aws::Vector<Task>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<Task>>
    RunTaskResult& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = Task>
    RunTaskResult& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    RunTaskResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    RunTaskResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RunTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
