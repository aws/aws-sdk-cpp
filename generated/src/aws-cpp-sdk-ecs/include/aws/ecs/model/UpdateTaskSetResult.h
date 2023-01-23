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
  class UpdateTaskSetResult
  {
  public:
    AWS_ECS_API UpdateTaskSetResult();
    AWS_ECS_API UpdateTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the task set.</p>
     */
    inline const TaskSet& GetTaskSet() const{ return m_taskSet; }

    /**
     * <p>Details about the task set.</p>
     */
    inline void SetTaskSet(const TaskSet& value) { m_taskSet = value; }

    /**
     * <p>Details about the task set.</p>
     */
    inline void SetTaskSet(TaskSet&& value) { m_taskSet = std::move(value); }

    /**
     * <p>Details about the task set.</p>
     */
    inline UpdateTaskSetResult& WithTaskSet(const TaskSet& value) { SetTaskSet(value); return *this;}

    /**
     * <p>Details about the task set.</p>
     */
    inline UpdateTaskSetResult& WithTaskSet(TaskSet&& value) { SetTaskSet(std::move(value)); return *this;}

  private:

    TaskSet m_taskSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
