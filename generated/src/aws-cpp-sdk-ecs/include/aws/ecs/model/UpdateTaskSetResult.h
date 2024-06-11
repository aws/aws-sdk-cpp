﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>Details about the task set.</p>
     */
    inline const TaskSet& GetTaskSet() const{ return m_taskSet; }
    inline void SetTaskSet(const TaskSet& value) { m_taskSet = value; }
    inline void SetTaskSet(TaskSet&& value) { m_taskSet = std::move(value); }
    inline UpdateTaskSetResult& WithTaskSet(const TaskSet& value) { SetTaskSet(value); return *this;}
    inline UpdateTaskSetResult& WithTaskSet(TaskSet&& value) { SetTaskSet(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTaskSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTaskSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTaskSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TaskSet m_taskSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
