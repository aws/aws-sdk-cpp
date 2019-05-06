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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/StepExecutionFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeAutomationStepExecutionsRequest : public SSMRequest
  {
  public:
    DescribeAutomationStepExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAutomationStepExecutions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The Automation execution ID for which you want step execution
     * descriptions.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline const Aws::Vector<StepExecutionFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline void SetFilters(const Aws::Vector<StepExecutionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline void SetFilters(Aws::Vector<StepExecutionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithFilters(const Aws::Vector<StepExecutionFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithFilters(Aws::Vector<StepExecutionFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& AddFilters(const StepExecutionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters to limit the number of step executions returned by the
     * request.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& AddFilters(StepExecutionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A boolean that indicates whether to list step executions in reverse order by
     * start time. The default value is false.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>A boolean that indicates whether to list step executions in reverse order by
     * start time. The default value is false.</p>
     */
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

    /**
     * <p>A boolean that indicates whether to list step executions in reverse order by
     * start time. The default value is false.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>A boolean that indicates whether to list step executions in reverse order by
     * start time. The default value is false.</p>
     */
    inline DescribeAutomationStepExecutionsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet;

    Aws::Vector<StepExecutionFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
