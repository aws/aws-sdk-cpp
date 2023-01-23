/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Task.h>
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
  class StopTaskResult
  {
  public:
    AWS_ECS_API StopTaskResult();
    AWS_ECS_API StopTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API StopTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The task that was stopped.</p>
     */
    inline const Task& GetTask() const{ return m_task; }

    /**
     * <p>The task that was stopped.</p>
     */
    inline void SetTask(const Task& value) { m_task = value; }

    /**
     * <p>The task that was stopped.</p>
     */
    inline void SetTask(Task&& value) { m_task = std::move(value); }

    /**
     * <p>The task that was stopped.</p>
     */
    inline StopTaskResult& WithTask(const Task& value) { SetTask(value); return *this;}

    /**
     * <p>The task that was stopped.</p>
     */
    inline StopTaskResult& WithTask(Task&& value) { SetTask(std::move(value)); return *this;}

  private:

    Task m_task;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
