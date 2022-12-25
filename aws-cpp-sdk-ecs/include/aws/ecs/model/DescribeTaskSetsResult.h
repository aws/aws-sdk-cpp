/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeTaskSetsResult
  {
  public:
    AWS_ECS_API DescribeTaskSetsResult();
    AWS_ECS_API DescribeTaskSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeTaskSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
