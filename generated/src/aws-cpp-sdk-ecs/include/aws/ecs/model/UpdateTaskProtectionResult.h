/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ProtectedTask.h>
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
  class UpdateTaskProtectionResult
  {
  public:
    AWS_ECS_API UpdateTaskProtectionResult() = default;
    AWS_ECS_API UpdateTaskProtectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateTaskProtectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is turned on for a task, the value is <code>true</code>. Otherwise,
     * it is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The
     * epoch time when protection for the task will expire.</p> </li> </ul>
     */
    inline const Aws::Vector<ProtectedTask>& GetProtectedTasks() const { return m_protectedTasks; }
    template<typename ProtectedTasksT = Aws::Vector<ProtectedTask>>
    void SetProtectedTasks(ProtectedTasksT&& value) { m_protectedTasksHasBeenSet = true; m_protectedTasks = std::forward<ProtectedTasksT>(value); }
    template<typename ProtectedTasksT = Aws::Vector<ProtectedTask>>
    UpdateTaskProtectionResult& WithProtectedTasks(ProtectedTasksT&& value) { SetProtectedTasks(std::forward<ProtectedTasksT>(value)); return *this;}
    template<typename ProtectedTasksT = ProtectedTask>
    UpdateTaskProtectionResult& AddProtectedTasks(ProtectedTasksT&& value) { m_protectedTasksHasBeenSet = true; m_protectedTasks.emplace_back(std::forward<ProtectedTasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    UpdateTaskProtectionResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    UpdateTaskProtectionResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTaskProtectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProtectedTask> m_protectedTasks;
    bool m_protectedTasksHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
