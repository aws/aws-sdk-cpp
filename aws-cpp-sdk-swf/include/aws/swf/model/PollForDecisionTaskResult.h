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
#include <aws/swf/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/HistoryEvent.h>
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
   * <p>A structure that represents a decision task. Decision tasks are sent to
   * deciders in order for them to make decisions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTask">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API PollForDecisionTaskResult
  {
  public:
    PollForDecisionTaskResult();
    PollForDecisionTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PollForDecisionTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline PollForDecisionTaskResult& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline PollForDecisionTaskResult& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string used as a handle on the task. This token is used by workers
     * to communicate progress and response information back to the system about the
     * task.</p>
     */
    inline PollForDecisionTaskResult& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline long long GetStartedEventId() const{ return m_startedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline void SetStartedEventId(long long value) { m_startedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskStarted</code> event recorded in the
     * history.</p>
     */
    inline PollForDecisionTaskResult& WithStartedEventId(long long value) { SetStartedEventId(value); return *this;}


    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline const WorkflowExecution& GetWorkflowExecution() const{ return m_workflowExecution; }

    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline void SetWorkflowExecution(const WorkflowExecution& value) { m_workflowExecution = value; }

    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline void SetWorkflowExecution(WorkflowExecution&& value) { m_workflowExecution = std::move(value); }

    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline PollForDecisionTaskResult& WithWorkflowExecution(const WorkflowExecution& value) { SetWorkflowExecution(value); return *this;}

    /**
     * <p>The workflow execution for which this decision task was created.</p>
     */
    inline PollForDecisionTaskResult& WithWorkflowExecution(WorkflowExecution&& value) { SetWorkflowExecution(std::move(value)); return *this;}


    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowType = value; }

    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowType = std::move(value); }

    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline PollForDecisionTaskResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of the workflow execution for which this decision task was
     * created.</p>
     */
    inline PollForDecisionTaskResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline const Aws::Vector<HistoryEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline void SetEvents(const Aws::Vector<HistoryEvent>& value) { m_events = value; }

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline void SetEvents(Aws::Vector<HistoryEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline PollForDecisionTaskResult& WithEvents(const Aws::Vector<HistoryEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline PollForDecisionTaskResult& WithEvents(Aws::Vector<HistoryEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline PollForDecisionTaskResult& AddEvents(const HistoryEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A paginated list of history events of the workflow execution. The decider
     * uses this during the processing of the decision task.</p>
     */
    inline PollForDecisionTaskResult& AddEvents(HistoryEvent&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline PollForDecisionTaskResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline PollForDecisionTaskResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextPageToken</code> was returned by a previous call, there are
     * more results available. To retrieve the next page of results, make the call
     * again using the returned token in <code>nextPageToken</code>. Keep all other
     * arguments unchanged.</p> <p>The configured <code>maximumPageSize</code>
     * determines how many results can be returned in a single call.</p>
     */
    inline PollForDecisionTaskResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The ID of the DecisionTaskStarted event of the previous decision task of this
     * workflow execution that was processed by the decider. This can be used to
     * determine the events in the history new since the last decision task received by
     * the decider.</p>
     */
    inline long long GetPreviousStartedEventId() const{ return m_previousStartedEventId; }

    /**
     * <p>The ID of the DecisionTaskStarted event of the previous decision task of this
     * workflow execution that was processed by the decider. This can be used to
     * determine the events in the history new since the last decision task received by
     * the decider.</p>
     */
    inline void SetPreviousStartedEventId(long long value) { m_previousStartedEventId = value; }

    /**
     * <p>The ID of the DecisionTaskStarted event of the previous decision task of this
     * workflow execution that was processed by the decider. This can be used to
     * determine the events in the history new since the last decision task received by
     * the decider.</p>
     */
    inline PollForDecisionTaskResult& WithPreviousStartedEventId(long long value) { SetPreviousStartedEventId(value); return *this;}

  private:

    Aws::String m_taskToken;

    long long m_startedEventId;

    WorkflowExecution m_workflowExecution;

    WorkflowType m_workflowType;

    Aws::Vector<HistoryEvent> m_events;

    Aws::String m_nextPageToken;

    long long m_previousStartedEventId;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
