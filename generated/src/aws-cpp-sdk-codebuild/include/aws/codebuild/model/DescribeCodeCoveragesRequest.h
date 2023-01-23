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
    AWS_CODEBUILD_API DescribeCodeCoveragesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCodeCoverages"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline const Aws::String& GetReportArn() const{ return m_reportArn; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(const Aws::String& value) { m_reportArnHasBeenSet = true; m_reportArn = value; }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(Aws::String&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::move(value); }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline void SetReportArn(const char* value) { m_reportArnHasBeenSet = true; m_reportArn.assign(value); }

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeCodeCoveragesRequest& WithReportArn(const Aws::String& value) { SetReportArn(value); return *this;}

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeCodeCoveragesRequest& WithReportArn(Aws::String&& value) { SetReportArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report for which test cases are returned. </p>
     */
    inline DescribeCodeCoveragesRequest& WithReportArn(const char* value) { SetReportArn(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline DescribeCodeCoveragesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline DescribeCodeCoveragesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous call to
     * <code>DescribeCodeCoverages</code>. This specifies the next item to return. To
     * return the beginning of the list, exclude this parameter.</p>
     */
    inline DescribeCodeCoveragesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline DescribeCodeCoveragesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline DescribeCodeCoveragesRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Specifies if the results are sorted in ascending or descending order.</p>
     */
    inline DescribeCodeCoveragesRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline const ReportCodeCoverageSortByType& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline void SetSortBy(const ReportCodeCoverageSortByType& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline void SetSortBy(ReportCodeCoverageSortByType&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline DescribeCodeCoveragesRequest& WithSortBy(const ReportCodeCoverageSortByType& value) { SetSortBy(value); return *this;}

    /**
     * <p>Specifies how the results are sorted. Possible values are:</p> <dl>
     * <dt>FILE_PATH</dt> <dd> <p>The results are sorted by file path.</p> </dd>
     * <dt>LINE_COVERAGE_PERCENTAGE</dt> <dd> <p>The results are sorted by the
     * percentage of lines that are covered.</p> </dd> </dl>
     */
    inline DescribeCodeCoveragesRequest& WithSortBy(ReportCodeCoverageSortByType&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The minimum line coverage percentage to report.</p>
     */
    inline double GetMinLineCoveragePercentage() const{ return m_minLineCoveragePercentage; }

    /**
     * <p>The minimum line coverage percentage to report.</p>
     */
    inline bool MinLineCoveragePercentageHasBeenSet() const { return m_minLineCoveragePercentageHasBeenSet; }

    /**
     * <p>The minimum line coverage percentage to report.</p>
     */
    inline void SetMinLineCoveragePercentage(double value) { m_minLineCoveragePercentageHasBeenSet = true; m_minLineCoveragePercentage = value; }

    /**
     * <p>The minimum line coverage percentage to report.</p>
     */
    inline DescribeCodeCoveragesRequest& WithMinLineCoveragePercentage(double value) { SetMinLineCoveragePercentage(value); return *this;}


    /**
     * <p>The maximum line coverage percentage to report.</p>
     */
    inline double GetMaxLineCoveragePercentage() const{ return m_maxLineCoveragePercentage; }

    /**
     * <p>The maximum line coverage percentage to report.</p>
     */
    inline bool MaxLineCoveragePercentageHasBeenSet() const { return m_maxLineCoveragePercentageHasBeenSet; }

    /**
     * <p>The maximum line coverage percentage to report.</p>
     */
    inline void SetMaxLineCoveragePercentage(double value) { m_maxLineCoveragePercentageHasBeenSet = true; m_maxLineCoveragePercentage = value; }

    /**
     * <p>The maximum line coverage percentage to report.</p>
     */
    inline DescribeCodeCoveragesRequest& WithMaxLineCoveragePercentage(double value) { SetMaxLineCoveragePercentage(value); return *this;}

  private:

    Aws::String m_reportArn;
    bool m_reportArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    ReportCodeCoverageSortByType m_sortBy;
    bool m_sortByHasBeenSet = false;

    double m_minLineCoveragePercentage;
    bool m_minLineCoveragePercentageHasBeenSet = false;

    double m_maxLineCoveragePercentage;
    bool m_maxLineCoveragePercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
