/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AssessmentsFilter.h>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API ListAttachedAssessmentsRequest : public InspectorRequest
  {
  public:
    ListAttachedAssessmentsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline const Aws::String& GetRulesPackageArn() const{ return m_rulesPackageArn; }

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline void SetRulesPackageArn(const Aws::String& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline void SetRulesPackageArn(Aws::String&& value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn = value; }

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline void SetRulesPackageArn(const char* value) { m_rulesPackageArnHasBeenSet = true; m_rulesPackageArn.assign(value); }

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline ListAttachedAssessmentsRequest& WithRulesPackageArn(const Aws::String& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline ListAttachedAssessmentsRequest& WithRulesPackageArn(Aws::String&& value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>The ARN specifying the rules package whose assessments you want to list.</p>
     */
    inline ListAttachedAssessmentsRequest& WithRulesPackageArn(const char* value) { SetRulesPackageArn(value); return *this;}

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline const AssessmentsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(const AssessmentsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(AssessmentsFilter&& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAttachedAssessmentsRequest& WithFilter(const AssessmentsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAttachedAssessmentsRequest& WithFilter(AssessmentsFilter&& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline ListAttachedAssessmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline ListAttachedAssessmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to 'null' on your first call to the <b>ListAttachedAssessments</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from previous response to continue listing
     * data.</p>
     */
    inline ListAttachedAssessmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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
    inline ListAttachedAssessmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_rulesPackageArn;
    bool m_rulesPackageArnHasBeenSet;
    AssessmentsFilter m_filter;
    bool m_filterHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
