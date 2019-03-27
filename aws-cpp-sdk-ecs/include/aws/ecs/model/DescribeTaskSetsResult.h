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
#include <aws/ecs/model/TaskSet.h>
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
  class AWS_ECS_API DescribeTaskSetsResult
  {
  public:
    DescribeTaskSetsResult();
    DescribeTaskSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTaskSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of task sets described.</p>
     */
    inline const Aws::Vector<TaskSet>& GetTaskSets() const{ return m_taskSets; }

    /**
     * <p>The list of task sets described.</p>
     */
    inline void SetTaskSets(const Aws::Vector<TaskSet>& value) { m_taskSets = value; }

    /**
     * <p>The list of task sets described.</p>
     */
    inline void SetTaskSets(Aws::Vector<TaskSet>&& value) { m_taskSets = std::move(value); }

    /**
     * <p>The list of task sets described.</p>
     */
    inline DescribeTaskSetsResult& WithTaskSets(const Aws::Vector<TaskSet>& value) { SetTaskSets(value); return *this;}

    /**
     * <p>The list of task sets described.</p>
     */
    inline DescribeTaskSetsResult& WithTaskSets(Aws::Vector<TaskSet>&& value) { SetTaskSets(std::move(value)); return *this;}

    /**
     * <p>The list of task sets described.</p>
     */
    inline DescribeTaskSetsResult& AddTaskSets(const TaskSet& value) { m_taskSets.push_back(value); return *this; }

    /**
     * <p>The list of task sets described.</p>
     */
    inline DescribeTaskSetsResult& AddTaskSets(TaskSet&& value) { m_taskSets.push_back(std::move(value)); return *this; }


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
    inline DescribeTaskSetsResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeTaskSetsResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeTaskSetsResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeTaskSetsResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TaskSet> m_taskSets;

    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
