/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/codebuild/model/ReportFilter.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListReportsForReportGroupRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListReportsForReportGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReportsForReportGroup"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN of the report group for which you want to return report ARNs. </p>
     */
    inline const Aws::String& GetReportGroupArn() const { return m_reportGroupArn; }
    inline bool ReportGroupArnHasBeenSet() const { return m_reportGroupArnHasBeenSet; }
    template<typename ReportGroupArnT = Aws::String>
    void SetReportGroupArn(ReportGroupArnT&& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = std::forward<ReportGroupArnT>(value); }
    template<typename ReportGroupArnT = Aws::String>
    ListReportsForReportGroupRequest& WithReportGroupArn(ReportGroupArnT&& value) { SetReportGroupArn(std::forward<ReportGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReportsForReportGroupRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Use to specify whether the results are returned in ascending or descending
     * order. </p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListReportsForReportGroupRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of paginated reports in this report group returned per
     * response. Use <code>nextToken</code> to iterate pages in the list of returned
     * <code>Report</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReportsForReportGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline const ReportFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = ReportFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = ReportFilter>
    ListReportsForReportGroupRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportGroupArn;
    bool m_reportGroupArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ReportFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
