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
  class AWS_ECS_API DescribeTaskDefinitionResult
  {
  public:
    DescribeTaskDefinitionResult();
    DescribeTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full task definition description.</p>
     */
    inline const TaskDefinition& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The full task definition description.</p>
     */
    inline void SetTaskDefinition(const TaskDefinition& value) { m_taskDefinition = value; }

    /**
     * <p>The full task definition description.</p>
     */
    inline void SetTaskDefinition(TaskDefinition&& value) { m_taskDefinition = std::move(value); }

    /**
     * <p>The full task definition description.</p>
     */
    inline DescribeTaskDefinitionResult& WithTaskDefinition(const TaskDefinition& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The full task definition description.</p>
     */
    inline DescribeTaskDefinitionResult& WithTaskDefinition(TaskDefinition&& value) { SetTaskDefinition(std::move(value)); return *this;}


    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline DescribeTaskDefinitionResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline DescribeTaskDefinitionResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline DescribeTaskDefinitionResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that is applied to the task definition to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline DescribeTaskDefinitionResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    TaskDefinition m_taskDefinition;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
