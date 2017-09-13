/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ECS_API UpdateContainerInstancesStateResult
  {
  public:
    UpdateContainerInstancesStateResult();
    UpdateContainerInstancesStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateContainerInstancesStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of container instances.</p>
     */
    inline const Aws::Vector<ContainerInstance>& GetContainerInstances() const{ return m_containerInstances; }

    /**
     * <p>The list of container instances.</p>
     */
    inline void SetContainerInstances(const Aws::Vector<ContainerInstance>& value) { m_containerInstances = value; }

    /**
     * <p>The list of container instances.</p>
     */
    inline void SetContainerInstances(Aws::Vector<ContainerInstance>&& value) { m_containerInstances = std::move(value); }

    /**
     * <p>The list of container instances.</p>
     */
    inline UpdateContainerInstancesStateResult& WithContainerInstances(const Aws::Vector<ContainerInstance>& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>The list of container instances.</p>
     */
    inline UpdateContainerInstancesStateResult& WithContainerInstances(Aws::Vector<ContainerInstance>&& value) { SetContainerInstances(std::move(value)); return *this;}

    /**
     * <p>The list of container instances.</p>
     */
    inline UpdateContainerInstancesStateResult& AddContainerInstances(const ContainerInstance& value) { m_containerInstances.push_back(value); return *this; }

    /**
     * <p>The list of container instances.</p>
     */
    inline UpdateContainerInstancesStateResult& AddContainerInstances(ContainerInstance&& value) { m_containerInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline UpdateContainerInstancesStateResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline UpdateContainerInstancesStateResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline UpdateContainerInstancesStateResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline UpdateContainerInstancesStateResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContainerInstance> m_containerInstances;

    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
