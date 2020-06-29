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
  class AWS_ECS_API UpdateTaskSetResult
  {
  public:
    UpdateTaskSetResult();
    UpdateTaskSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateTaskSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TaskSet& GetTaskSet() const{ return m_taskSet; }

    
    inline void SetTaskSet(const TaskSet& value) { m_taskSet = value; }

    
    inline void SetTaskSet(TaskSet&& value) { m_taskSet = std::move(value); }

    
    inline UpdateTaskSetResult& WithTaskSet(const TaskSet& value) { SetTaskSet(value); return *this;}

    
    inline UpdateTaskSetResult& WithTaskSet(TaskSet&& value) { SetTaskSet(std::move(value)); return *this;}

  private:

    TaskSet m_taskSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
