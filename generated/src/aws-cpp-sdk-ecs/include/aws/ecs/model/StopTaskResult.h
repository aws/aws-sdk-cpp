/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Task.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Task m_task;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
