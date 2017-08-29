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
#include <aws/ecs/model/ContainerInstance.h>
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
  class AWS_ECS_API UpdateContainerAgentResult
  {
  public:
    UpdateContainerAgentResult();
    UpdateContainerAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateContainerAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The container instance for which the container agent was updated.</p>
     */
    inline const ContainerInstance& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance for which the container agent was updated.</p>
     */
    inline void SetContainerInstance(const ContainerInstance& value) { m_containerInstance = value; }

    /**
     * <p>The container instance for which the container agent was updated.</p>
     */
    inline void SetContainerInstance(ContainerInstance&& value) { m_containerInstance = std::move(value); }

    /**
     * <p>The container instance for which the container agent was updated.</p>
     */
    inline UpdateContainerAgentResult& WithContainerInstance(const ContainerInstance& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance for which the container agent was updated.</p>
     */
    inline UpdateContainerAgentResult& WithContainerInstance(ContainerInstance&& value) { SetContainerInstance(std::move(value)); return *this;}

  private:

    ContainerInstance m_containerInstance;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
