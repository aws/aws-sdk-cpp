/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ContainerInstance.h>
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
  class UpdateContainerInstancesStateResult
  {
  public:
    AWS_ECS_API UpdateContainerInstancesStateResult() = default;
    AWS_ECS_API UpdateContainerInstancesStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateContainerInstancesStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of container instances.</p>
     */
    inline const Aws::Vector<ContainerInstance>& GetContainerInstances() const { return m_containerInstances; }
    template<typename ContainerInstancesT = Aws::Vector<ContainerInstance>>
    void SetContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = std::forward<ContainerInstancesT>(value); }
    template<typename ContainerInstancesT = Aws::Vector<ContainerInstance>>
    UpdateContainerInstancesStateResult& WithContainerInstances(ContainerInstancesT&& value) { SetContainerInstances(std::forward<ContainerInstancesT>(value)); return *this;}
    template<typename ContainerInstancesT = ContainerInstance>
    UpdateContainerInstancesStateResult& AddContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.emplace_back(std::forward<ContainerInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    UpdateContainerInstancesStateResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    UpdateContainerInstancesStateResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateContainerInstancesStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerInstance> m_containerInstances;
    bool m_containerInstancesHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
