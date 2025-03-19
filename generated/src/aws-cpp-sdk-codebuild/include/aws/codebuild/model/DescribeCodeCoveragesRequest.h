/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/codebuild/model/ReportCodeCoverageSortByType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class DescribeCodeCoveragesRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API DescribeCodeCoveragesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCodeCoverages"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline const Aws::String& GetReportArn() const { return m_reportArn; }
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }
    template<typename ReportArnT = Aws::String>
    void SetReportArn(ReportArnT&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::forward<ReportArnT>(value); }
    template<typename ReportArnT = Aws::String>
    DescribeCodeCoveragesRequest& WithReportArn(ReportArnT&& value) { SetReportArn(std::forward<ReportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCodeCoveragesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCodeCoveragesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline DescribeCodeCoveragesRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline ReportCodeCoverageSortByType GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ReportCodeCoverageSortByType value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline DescribeCodeCoveragesRequest& WithSortBy(ReportCodeCoverageSortByType value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum line coverage percentage to report.</p>
     */
    inline double GetMinLineCoveragePercentage() const { return m_minLineCoveragePercentage; }
    inline bool MinLineCoveragePercentageHasBeenSet() const { return m_minLineCoveragePercentageHasBeenSet; }
    inline void SetMinLineCoveragePercentage(double value) { m_minLineCoveragePercentageHasBeenSet = true; m_minLineCoveragePercentage = value; }
    inline DescribeCodeCoveragesRequest& WithMinLineCoveragePercentage(double value) { SetMinLineCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum line coverage percentage to report.</p>
     */
    inline double GetMaxLineCoveragePercentage() const { return m_maxLineCoveragePercentage; }
    inline bool MaxLineCoveragePercentageHasBeenSet() const { return m_maxLineCoveragePercentageHasBeenSet; }
    inline void SetMaxLineCoveragePercentage(double value) { m_maxLineCoveragePercentageHasBeenSet = true; m_maxLineCoveragePercentage = value; }
    inline DescribeCodeCoveragesRequest& WithMaxLineCoveragePercentage(double value) { SetMaxLineCoveragePercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_reportArn;
    bool m_reportArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    ReportCodeCoverageSortByType m_sortBy{ReportCodeCoverageSortByType::NOT_SET};
    bool m_sortByHasBeenSet = false;

    double m_minLineCoveragePercentage{0.0};
    bool m_minLineCoveragePercentageHasBeenSet = false;

    double m_maxLineCoveragePercentage{0.0};
    bool m_maxLineCoveragePercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
