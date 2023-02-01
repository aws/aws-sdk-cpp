/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskDefinition.h>
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
  class DeregisterTaskDefinitionResult
  {
  public:
    AWS_ECS_API DeregisterTaskDefinitionResult();
    AWS_ECS_API DeregisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeregisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline const TaskDefinition& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline void SetTaskDefinition(const TaskDefinition& value) { m_taskDefinition = value; }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline void SetTaskDefinition(TaskDefinition&& value) { m_taskDefinition = std::move(value); }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline DeregisterTaskDefinitionResult& WithTaskDefinition(const TaskDefinition& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline DeregisterTaskDefinitionResult& WithTaskDefinition(TaskDefinition&& value) { SetTaskDefinition(std::move(value)); return *this;}

  private:

    TaskDefinition m_taskDefinition;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
