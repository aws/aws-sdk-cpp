/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ContainerInstance.h>
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
  class DeregisterContainerInstanceResult
  {
  public:
    AWS_ECS_API DeregisterContainerInstanceResult() = default;
    AWS_ECS_API DeregisterContainerInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeregisterContainerInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The container instance that was deregistered.</p>
     */
    inline const ContainerInstance& GetContainerInstance() const { return m_containerInstance; }
    template<typename ContainerInstanceT = ContainerInstance>
    void SetContainerInstance(ContainerInstanceT&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::forward<ContainerInstanceT>(value); }
    template<typename ContainerInstanceT = ContainerInstance>
    DeregisterContainerInstanceResult& WithContainerInstance(ContainerInstanceT&& value) { SetContainerInstance(std::forward<ContainerInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeregisterContainerInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerInstance m_containerInstance;
    bool m_containerInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
