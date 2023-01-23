/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/AssessmentTemplateFilter.h>
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
  class ListAssessmentTemplatesRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API ListAssessmentTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentTemplates"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentTargetArns() const{ return m_assessmentTargetArns; }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline bool AssessmentTargetArnsHasBeenSet() const { return m_assessmentTargetArnsHasBeenSet; }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline void SetAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = value; }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline void SetAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = std::move(value); }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline ListAssessmentTemplatesRequest& WithAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { SetAssessmentTargetArns(value); return *this;}

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline ListAssessmentTemplatesRequest& WithAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { SetAssessmentTargetArns(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline ListAssessmentTemplatesRequest& AddAssessmentTargetArns(const Aws::String& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline ListAssessmentTemplatesRequest& AddAssessmentTargetArns(Aws::String&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline ListAssessmentTemplatesRequest& AddAssessmentTargetArns(const char* value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }


    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline const AssessmentTemplateFilter& GetFilter() const{ return m_filter; }

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
    inline void SetFilter(const AssessmentTemplateFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline void SetFilter(AssessmentTemplateFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAssessmentTemplatesRequest& WithFilter(const AssessmentTemplateFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline ListAssessmentTemplatesRequest& WithFilter(AssessmentTemplateFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline ListAssessmentTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline ListAssessmentTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_assessmentTargetArns;
    bool m_assessmentTargetArnsHasBeenSet = false;

    AssessmentTemplateFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
