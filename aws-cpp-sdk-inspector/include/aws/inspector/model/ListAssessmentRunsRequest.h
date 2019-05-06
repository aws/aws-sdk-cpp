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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/AssessmentRunFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API ListAssessmentRunsRequest : public InspectorRequest
  {
  public:
    ListAssessmentRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentRuns"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentTemplateArns() const{ return m_assessmentTemplateArns; }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline bool AssessmentTemplateArnsHasBeenSet() const { return m_assessmentTemplateArnsHasBeenSet; }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline void SetAssessmentTemplateArns(const Aws::Vector<Aws::String>& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns = value; }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline void SetAssessmentTemplateArns(Aws::Vector<Aws::String>&& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns = std::move(value); }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline ListAssessmentRunsRequest& WithAssessmentTemplateArns(const Aws::Vector<Aws::String>& value) { SetAssessmentTemplateArns(value); return *this;}

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline ListAssessmentRunsRequest& WithAssessmentTemplateArns(Aws::Vector<Aws::String>&& value) { SetAssessmentTemplateArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline ListAssessmentRunsRequest& AddAssessmentTemplateArns(const Aws::String& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(value); return *this; }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline ListAssessmentRunsRequest& AddAssessmentTemplateArns(Aws::String&& value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs that specify the assessment templates whose assessment runs you want
     * to list.</p>
     */
    inline ListAssessmentRunsRequest& AddAssessmentTemplateArns(const char* value) { m_assessmentTemplateArnsHasBeenSet = true; m_assessmentTemplateArns.push_back(value); return *this; }


    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline const AssessmentRunFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(const AssessmentRunFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(AssessmentRunFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAssessmentRunsRequest& WithFilter(const AssessmentRunFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAssessmentRunsRequest& WithFilter(AssessmentRunFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentRuns</b> action.
     * Subsequent calls to the action fill <b>nextToken</b> in the request with the
     * value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items that you
     * want in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline ListAssessmentRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_assessmentTemplateArns;
    bool m_assessmentTemplateArnsHasBeenSet;

    AssessmentRunFilter m_filter;
    bool m_filterHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
