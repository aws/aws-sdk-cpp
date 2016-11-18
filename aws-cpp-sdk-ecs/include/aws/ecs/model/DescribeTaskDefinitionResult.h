﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    DescribeTaskDefinitionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTaskDefinitionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetTaskDefinition(TaskDefinition&& value) { m_taskDefinition = value; }

    /**
     * <p>The full task definition description.</p>
     */
    inline DescribeTaskDefinitionResult& WithTaskDefinition(const TaskDefinition& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The full task definition description.</p>
     */
    inline DescribeTaskDefinitionResult& WithTaskDefinition(TaskDefinition&& value) { SetTaskDefinition(value); return *this;}

  private:
    TaskDefinition m_taskDefinition;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
