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
#include <aws/ecs/model/Task.h>
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
  class AWS_ECS_API StartTaskResult
  {
  public:
    StartTaskResult();
    StartTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasks = value; }

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasks = std::move(value); }

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline StartTaskResult& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline StartTaskResult& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline StartTaskResult& AddTasks(const Task& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>A full description of the tasks that were started. Each task that was
     * successfully placed on your container instances is described.</p>
     */
    inline StartTaskResult& AddTasks(Task&& value) { m_tasks.push_back(std::move(value)); return *this; }


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
    inline StartTaskResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline StartTaskResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline StartTaskResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline StartTaskResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Task> m_tasks;

    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
