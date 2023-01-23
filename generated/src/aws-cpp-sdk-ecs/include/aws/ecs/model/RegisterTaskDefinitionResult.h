/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Tag.h>
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
  class RegisterTaskDefinitionResult
  {
  public:
    AWS_ECS_API RegisterTaskDefinitionResult();
    AWS_ECS_API RegisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API RegisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the registered task definition.</p>
     */
    inline const TaskDefinition& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The full description of the registered task definition.</p>
     */
    inline void SetTaskDefinition(const TaskDefinition& value) { m_taskDefinition = value; }

    /**
     * <p>The full description of the registered task definition.</p>
     */
    inline void SetTaskDefinition(TaskDefinition&& value) { m_taskDefinition = std::move(value); }

    /**
     * <p>The full description of the registered task definition.</p>
     */
    inline RegisterTaskDefinitionResult& WithTaskDefinition(const TaskDefinition& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The full description of the registered task definition.</p>
     */
    inline RegisterTaskDefinitionResult& WithTaskDefinition(TaskDefinition&& value) { SetTaskDefinition(std::move(value)); return *this;}


    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline RegisterTaskDefinitionResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline RegisterTaskDefinitionResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline RegisterTaskDefinitionResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with the task definition.</p>
     */
    inline RegisterTaskDefinitionResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    TaskDefinition m_taskDefinition;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
