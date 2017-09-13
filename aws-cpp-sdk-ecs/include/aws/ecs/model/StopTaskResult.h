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
  class AWS_ECS_API StopTaskResult
  {
  public:
    StopTaskResult();
    StopTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
