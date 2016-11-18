﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/RunsFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API ListRunsRequest : public InspectorRequest
  {
  public:
    ListRunsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentArns() const{ return m_assessmentArns; }

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline void SetAssessmentArns(const Aws::Vector<Aws::String>& value) { m_assessmentArnsHasBeenSet = true; m_assessmentArns = value; }

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline void SetAssessmentArns(Aws::Vector<Aws::String>&& value) { m_assessmentArnsHasBeenSet = true; m_assessmentArns = value; }

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline ListRunsRequest& WithAssessmentArns(const Aws::Vector<Aws::String>& value) { SetAssessmentArns(value); return *this;}

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline ListRunsRequest& WithAssessmentArns(Aws::Vector<Aws::String>&& value) { SetAssessmentArns(value); return *this;}

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline ListRunsRequest& AddAssessmentArns(const Aws::String& value) { m_assessmentArnsHasBeenSet = true; m_assessmentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline ListRunsRequest& AddAssessmentArns(Aws::String&& value) { m_assessmentArnsHasBeenSet = true; m_assessmentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs specifying the assessments whose runs you want to list.</p>
     */
    inline ListRunsRequest& AddAssessmentArns(const char* value) { m_assessmentArnsHasBeenSet = true; m_assessmentArns.push_back(value); return *this; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline const RunsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(const RunsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(RunsFilter&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListRunsRequest& WithFilter(const RunsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListRunsRequest& WithFilter(RunsFilter&& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListRuns</b> action. Subsequent
     * calls to the action fill <b>nextToken</b> in the request with the value of
     * <b>NextToken</b> from previous response to continue listing data.</p>
     */
    inline ListRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline ListRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_assessmentArns;
    bool m_assessmentArnsHasBeenSet;
    RunsFilter m_filter;
    bool m_filterHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
