/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskDefinition.h>
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
  class DeleteTaskDefinitionsResult
  {
  public:
    AWS_ECS_API DeleteTaskDefinitionsResult() = default;
    AWS_ECS_API DeleteTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeleteTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline const Aws::Vector<TaskDefinition>& GetTaskDefinitions() const { return m_taskDefinitions; }
    template<typename TaskDefinitionsT = Aws::Vector<TaskDefinition>>
    void SetTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions = std::forward<TaskDefinitionsT>(value); }
    template<typename TaskDefinitionsT = Aws::Vector<TaskDefinition>>
    DeleteTaskDefinitionsResult& WithTaskDefinitions(TaskDefinitionsT&& value) { SetTaskDefinitions(std::forward<TaskDefinitionsT>(value)); return *this;}
    template<typename TaskDefinitionsT = TaskDefinition>
    DeleteTaskDefinitionsResult& AddTaskDefinitions(TaskDefinitionsT&& value) { m_taskDefinitionsHasBeenSet = true; m_taskDefinitions.emplace_back(std::forward<TaskDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    DeleteTaskDefinitionsResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    DeleteTaskDefinitionsResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteTaskDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TaskDefinition> m_taskDefinitions;
    bool m_taskDefinitionsHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
