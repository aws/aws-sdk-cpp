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
#include <aws/swf/model/WorkflowExecutionInfo.h>
#include <aws/swf/model/WorkflowExecutionConfiguration.h>
#include <aws/swf/model/WorkflowExecutionOpenCounts.h>
#include <aws/core/utils/DateTime.h>
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
namespace SWF
{
namespace Model
{
  /**
   * <p>Contains details about a workflow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DescribeWorkflowExecutionResult
  {
  public:
    DescribeWorkflowExecutionResult();
    DescribeWorkflowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkflowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the workflow execution.</p>
     */
    inline const WorkflowExecutionInfo& GetExecutionInfo() const{ return m_executionInfo; }

    /**
     * <p>Information about the workflow execution.</p>
     */
    inline void SetExecutionInfo(const WorkflowExecutionInfo& value) { m_executionInfo = value; }

    /**
     * <p>Information about the workflow execution.</p>
     */
    inline void SetExecutionInfo(WorkflowExecutionInfo&& value) { m_executionInfo = std::move(value); }

    /**
     * <p>Information about the workflow execution.</p>
     */
    inline DescribeWorkflowExecutionResult& WithExecutionInfo(const WorkflowExecutionInfo& value) { SetExecutionInfo(value); return *this;}

    /**
     * <p>Information about the workflow execution.</p>
     */
    inline DescribeWorkflowExecutionResult& WithExecutionInfo(WorkflowExecutionInfo&& value) { SetExecutionInfo(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline const WorkflowExecutionConfiguration& GetExecutionConfiguration() const{ return m_executionConfiguration; }

    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline void SetExecutionConfiguration(const WorkflowExecutionConfiguration& value) { m_executionConfiguration = value; }

    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline void SetExecutionConfiguration(WorkflowExecutionConfiguration&& value) { m_executionConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline DescribeWorkflowExecutionResult& WithExecutionConfiguration(const WorkflowExecutionConfiguration& value) { SetExecutionConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for this workflow execution including timeout
     * values, tasklist etc.</p>
     */
    inline DescribeWorkflowExecutionResult& WithExecutionConfiguration(WorkflowExecutionConfiguration&& value) { SetExecutionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline const WorkflowExecutionOpenCounts& GetOpenCounts() const{ return m_openCounts; }

    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline void SetOpenCounts(const WorkflowExecutionOpenCounts& value) { m_openCounts = value; }

    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline void SetOpenCounts(WorkflowExecutionOpenCounts&& value) { m_openCounts = std::move(value); }

    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline DescribeWorkflowExecutionResult& WithOpenCounts(const WorkflowExecutionOpenCounts& value) { SetOpenCounts(value); return *this;}

    /**
     * <p>The number of tasks for this workflow execution. This includes open and
     * closed tasks of all types.</p>
     */
    inline DescribeWorkflowExecutionResult& WithOpenCounts(WorkflowExecutionOpenCounts&& value) { SetOpenCounts(std::move(value)); return *this;}


    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestActivityTaskTimestamp() const{ return m_latestActivityTaskTimestamp; }

    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline void SetLatestActivityTaskTimestamp(const Aws::Utils::DateTime& value) { m_latestActivityTaskTimestamp = value; }

    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline void SetLatestActivityTaskTimestamp(Aws::Utils::DateTime&& value) { m_latestActivityTaskTimestamp = std::move(value); }

    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline DescribeWorkflowExecutionResult& WithLatestActivityTaskTimestamp(const Aws::Utils::DateTime& value) { SetLatestActivityTaskTimestamp(value); return *this;}

    /**
     * <p>The time when the last activity task was scheduled for this workflow
     * execution. You can use this information to determine if the workflow has not
     * made progress for an unusually long period of time and might require a
     * corrective action.</p>
     */
    inline DescribeWorkflowExecutionResult& WithLatestActivityTaskTimestamp(Aws::Utils::DateTime&& value) { SetLatestActivityTaskTimestamp(std::move(value)); return *this;}


    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline const Aws::String& GetLatestExecutionContext() const{ return m_latestExecutionContext; }

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline void SetLatestExecutionContext(const Aws::String& value) { m_latestExecutionContext = value; }

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline void SetLatestExecutionContext(Aws::String&& value) { m_latestExecutionContext = std::move(value); }

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline void SetLatestExecutionContext(const char* value) { m_latestExecutionContext.assign(value); }

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline DescribeWorkflowExecutionResult& WithLatestExecutionContext(const Aws::String& value) { SetLatestExecutionContext(value); return *this;}

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline DescribeWorkflowExecutionResult& WithLatestExecutionContext(Aws::String&& value) { SetLatestExecutionContext(std::move(value)); return *this;}

    /**
     * <p>The latest executionContext provided by the decider for this workflow
     * execution. A decider can provide an executionContext (a free-form string) when
     * closing a decision task using <a>RespondDecisionTaskCompleted</a>.</p>
     */
    inline DescribeWorkflowExecutionResult& WithLatestExecutionContext(const char* value) { SetLatestExecutionContext(value); return *this;}

  private:

    WorkflowExecutionInfo m_executionInfo;

    WorkflowExecutionConfiguration m_executionConfiguration;

    WorkflowExecutionOpenCounts m_openCounts;

    Aws::Utils::DateTime m_latestActivityTaskTimestamp;

    Aws::String m_latestExecutionContext;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
