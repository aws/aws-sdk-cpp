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
  class UpdateServicePrimaryTaskSetResult
  {
  public:
    AWS_ECS_API UpdateServicePrimaryTaskSetResult();
    AWS_ECS_API UpdateServicePrimaryTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateServicePrimaryTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details about the task set.</p>
     */
    inline const TaskSet& GetTaskSet() const{ return m_taskSet; }

    /**
     * <p>The details about the task set.</p>
     */
    inline void SetTaskSet(const TaskSet& value) { m_taskSet = value; }

    /**
     * <p>The details about the task set.</p>
     */
    inline void SetTaskSet(TaskSet&& value) { m_taskSet = std::move(value); }

    /**
     * <p>The details about the task set.</p>
     */
    inline UpdateServicePrimaryTaskSetResult& WithTaskSet(const TaskSet& value) { SetTaskSet(value); return *this;}

    /**
     * <p>The details about the task set.</p>
     */
    inline UpdateServicePrimaryTaskSetResult& WithTaskSet(TaskSet&& value) { SetTaskSet(std::move(value)); return *this;}

  private:

    TaskSet m_taskSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
