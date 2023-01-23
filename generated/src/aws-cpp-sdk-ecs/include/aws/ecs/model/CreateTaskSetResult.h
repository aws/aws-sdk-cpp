/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskSet.h>
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
  class CreateTaskSetResult
  {
  public:
    AWS_ECS_API CreateTaskSetResult();
    AWS_ECS_API CreateTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API CreateTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline const TaskSet& GetTaskSet() const{ return m_taskSet; }

    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline void SetTaskSet(const TaskSet& value) { m_taskSet = value; }

    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline void SetTaskSet(TaskSet&& value) { m_taskSet = std::move(value); }

    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline CreateTaskSetResult& WithTaskSet(const TaskSet& value) { SetTaskSet(value); return *this;}

    /**
     * <p>Information about a set of Amazon ECS tasks in either an CodeDeploy or an
     * <code>EXTERNAL</code> deployment. A task set includes details such as the
     * desired number of tasks, how many tasks are running, and whether the task set
     * serves production traffic.</p>
     */
    inline CreateTaskSetResult& WithTaskSet(TaskSet&& value) { SetTaskSet(std::move(value)); return *this;}

  private:

    TaskSet m_taskSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
