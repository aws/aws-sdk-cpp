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
    AWS_INSPECTOR_API ListAssessmentTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentTemplates"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of ARNs that specifies the assessment targets whose assessment
     * templates you want to list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentTargetArns() const { return m_assessmentTargetArns; }
    inline bool AssessmentTargetArnsHasBeenSet() const { return m_assessmentTargetArnsHasBeenSet; }
    template<typename AssessmentTargetArnsT = Aws::Vector<Aws::String>>
    void SetAssessmentTargetArns(AssessmentTargetArnsT&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = std::forward<AssessmentTargetArnsT>(value); }
    template<typename AssessmentTargetArnsT = Aws::Vector<Aws::String>>
    ListAssessmentTemplatesRequest& WithAssessmentTargetArns(AssessmentTargetArnsT&& value) { SetAssessmentTargetArns(std::forward<AssessmentTargetArnsT>(value)); return *this;}
    template<typename AssessmentTargetArnsT = Aws::String>
    ListAssessmentTemplatesRequest& AddAssessmentTargetArns(AssessmentTargetArnsT&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.emplace_back(std::forward<AssessmentTargetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to specify a subset of data to be included in the
     * action's response.</p> <p>For a record to match a filter, all specified filter
     * attributes must match. When multiple values are specified for a filter
     * attribute, any of the values can match.</p>
     */
    inline const AssessmentTemplateFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = AssessmentTemplateFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = AssessmentTemplateFilter>
    ListAssessmentTemplatesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the <b>ListAssessmentTemplates</b>
     * action. Subsequent calls to the action fill <b>nextToken</b> in the request with
     * the value of <b>NextToken</b> from the previous response to continue listing
     * data.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to indicate the maximum number of items you want
     * in the response. The default value is 10. The maximum value is 500.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssessmentTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_assessmentTargetArns;
    bool m_assessmentTargetArnsHasBeenSet = false;

    AssessmentTemplateFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
