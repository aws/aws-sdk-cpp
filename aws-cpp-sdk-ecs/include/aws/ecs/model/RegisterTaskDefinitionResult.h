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
  class AWS_ECS_API RegisterTaskDefinitionResult
  {
  public:
    RegisterTaskDefinitionResult();
    RegisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
