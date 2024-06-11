﻿/**
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
    AWS_ECS_API UpdateContainerInstancesStateResult();
    AWS_ECS_API UpdateContainerInstancesStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateContainerInstancesStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of container instances.</p>
     */
    inline const Aws::Vector<ContainerInstance>& GetContainerInstances() const{ return m_containerInstances; }
    inline void SetContainerInstances(const Aws::Vector<ContainerInstance>& value) { m_containerInstances = value; }
    inline void SetContainerInstances(Aws::Vector<ContainerInstance>&& value) { m_containerInstances = std::move(value); }
    inline UpdateContainerInstancesStateResult& WithContainerInstances(const Aws::Vector<ContainerInstance>& value) { SetContainerInstances(value); return *this;}
    inline UpdateContainerInstancesStateResult& WithContainerInstances(Aws::Vector<ContainerInstance>&& value) { SetContainerInstances(std::move(value)); return *this;}
    inline UpdateContainerInstancesStateResult& AddContainerInstances(const ContainerInstance& value) { m_containerInstances.push_back(value); return *this; }
    inline UpdateContainerInstancesStateResult& AddContainerInstances(ContainerInstance&& value) { m_containerInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }
    inline UpdateContainerInstancesStateResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}
    inline UpdateContainerInstancesStateResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}
    inline UpdateContainerInstancesStateResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }
    inline UpdateContainerInstancesStateResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateContainerInstancesStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateContainerInstancesStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateContainerInstancesStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerInstance> m_containerInstances;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
