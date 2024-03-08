/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class RunTaskResult
  {
  public:
    AWS_ECS_API RunTaskResult();
    AWS_ECS_API RunTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API RunTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasks = value; }

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasks = std::move(value); }

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline RunTaskResult& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline RunTaskResult& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline RunTaskResult& AddTasks(const Task& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>A full description of the tasks that were run. The tasks that were
     * successfully placed on your cluster are described here.</p> <p/>
     */
    inline RunTaskResult& AddTasks(Task&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p> <p>For information about how to
     * address failures, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-event-messages.html#service-event-messages-list">Service
     * event messages</a> and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/api_failures_messages.html">API
     * failure reasons</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline RunTaskResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RunTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RunTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RunTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Task> m_tasks;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
