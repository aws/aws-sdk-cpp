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
  class UpdateServicePrimaryTaskSetResult
  {
  public:
    AWS_ECS_API UpdateServicePrimaryTaskSetResult() = default;
    AWS_ECS_API UpdateServicePrimaryTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateServicePrimaryTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details about the task set.</p>
     */
    inline const TaskSet& GetTaskSet() const { return m_taskSet; }
    template<typename TaskSetT = TaskSet>
    void SetTaskSet(TaskSetT&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::forward<TaskSetT>(value); }
    template<typename TaskSetT = TaskSet>
    UpdateServicePrimaryTaskSetResult& WithTaskSet(TaskSetT&& value) { SetTaskSet(std::forward<TaskSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateServicePrimaryTaskSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
