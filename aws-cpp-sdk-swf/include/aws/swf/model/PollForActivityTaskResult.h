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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
#include <aws/swf/model/ActivityType.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Unit of work sent to an activity worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityTask">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API PollForActivityTaskResult
  {
  public:
    PollForActivityTaskResult();
    PollForActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PollForActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline void SetTaskToken(const Aws::String& value) { m_taskToken = value; }

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline void SetTaskToken(Aws::String&& value) { m_taskToken = std::move(value); }

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline void SetTaskToken(const char* value) { m_taskToken.assign(value); }

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline PollForActivityTaskResult& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline PollForActivityTaskResult& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline PollForActivityTaskResult& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}


    /**
     * <p>The unique ID of the task.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityId = value; }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityId = std::move(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline void SetActivityId(const char* value) { m_activityId.assign(value); }

    /**
     * <p>The unique ID of the task.</p>
     */
    inline PollForActivityTaskResult& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline PollForActivityTaskResult& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the task.</p>
     */
    inline PollForActivityTaskResult& WithActivityId(const char* value) { SetActivityId(value); return *this;}


    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventId = value; }

    /**
     * <p>The ID of the <code>ActivityTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline PollForActivityTaskResult& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}


    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }

    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecution = value; }

    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecution = std::move(value); }

    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline PollForActivityTaskResult& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}

    /**
     * <p>The workflow execution that started this activity task.</p>
     */
    inline PollForActivityTaskResult& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The type of this activity task.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }

    /**
     * <p>The type of this activity task.</p>
     */
    inline void SetActivityType(const ActivityType& value) { m_activityType = value; }

    /**
     * <p>The type of this activity task.</p>
     */
    inline void SetActivityType(ActivityType&& value) { m_activityType = std::move(value); }

    /**
     * <p>The type of this activity task.</p>
     */
    inline PollForActivityTaskResult& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}

    /**
     * <p>The type of this activity task.</p>
     */
    inline PollForActivityTaskResult& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}


    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline void SetInput(const Aws::String& value) { m_input = value; }

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline void SetInput(const char* value) { m_input.assign(value); }

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline PollForActivityTaskResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline PollForActivityTaskResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The inputs provided when the activity task was scheduled. The form of the
     * input is user defined and should be meaningful to the activity
     * implementation.</p>
     */
    inline PollForActivityTaskResult& WithInput(const char* value) { SetInput(value); return *this;}

  private:

    Aws::String m_taskToken;

    Aws::String m_activityId;

    long long m_startedEventId;

    WorkflowExecution m_workflowExecution;

    ActivityType m_activityType;

    Aws::String m_input;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
