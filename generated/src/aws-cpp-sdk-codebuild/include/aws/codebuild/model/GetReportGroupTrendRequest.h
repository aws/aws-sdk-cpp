﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportGroupTrendFieldType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class GetReportGroupTrendRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API GetReportGroupTrendRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReportGroupTrend"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the report group that contains the reports to analyze.</p>
     */
    inline const Aws::String& GetReportGroupArn() const { return m_reportGroupArn; }
    inline bool ReportGroupArnHasBeenSet() const { return m_reportGroupArnHasBeenSet; }
    template<typename ReportGroupArnT = Aws::String>
    void SetReportGroupArn(ReportGroupArnT&& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = std::forward<ReportGroupArnT>(value); }
    template<typename ReportGroupArnT = Aws::String>
    GetReportGroupTrendRequest& WithReportGroupArn(ReportGroupArnT&& value) { SetReportGroupArn(std::forward<ReportGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reports to analyze. This operation always retrieves the most
     * recent reports.</p> <p>If this parameter is omitted, the most recent 100 reports
     * are analyzed.</p>
     */
    inline int GetNumOfReports() const { return m_numOfReports; }
    inline bool NumOfReportsHasBeenSet() const { return m_numOfReportsHasBeenSet; }
    inline void SetNumOfReports(int value) { m_numOfReportsHasBeenSet = true; m_numOfReports = value; }
    inline GetReportGroupTrendRequest& WithNumOfReports(int value) { SetNumOfReports(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test report value to accumulate. This must be one of the following
     * values:</p> <dl> <dt>Test reports:</dt> <dd> <dl> <dt>DURATION</dt> <dd>
     * <p>Accumulate the test run times for the specified reports.</p> </dd>
     * <dt>PASS_RATE</dt> <dd> <p>Accumulate the percentage of tests that passed for
     * the specified test reports.</p> </dd> <dt>TOTAL</dt> <dd> <p>Accumulate the
     * total number of tests for the specified test reports.</p> </dd> </dl> </dd>
     * </dl> <dl> <dt>Code coverage reports:</dt> <dd> <dl> <dt>BRANCH_COVERAGE</dt>
     * <dd> <p>Accumulate the branch coverage percentages for the specified test
     * reports.</p> </dd> <dt>BRANCHES_COVERED</dt> <dd> <p>Accumulate the branches
     * covered values for the specified test reports.</p> </dd>
     * <dt>BRANCHES_MISSED</dt> <dd> <p>Accumulate the branches missed values for the
     * specified test reports.</p> </dd> <dt>LINE_COVERAGE</dt> <dd> <p>Accumulate the
     * line coverage percentages for the specified test reports.</p> </dd>
     * <dt>LINES_COVERED</dt> <dd> <p>Accumulate the lines covered values for the
     * specified test reports.</p> </dd> <dt>LINES_MISSED</dt> <dd> <p>Accumulate the
     * lines not covered values for the specified test reports.</p> </dd> </dl> </dd>
     * </dl>
     */
    inline ReportGroupTrendFieldType GetTrendField() const { return m_trendField; }
    inline bool TrendFieldHasBeenSet() const { return m_trendFieldHasBeenSet; }
    inline void SetTrendField(ReportGroupTrendFieldType value) { m_trendFieldHasBeenSet = true; m_trendField = value; }
    inline GetReportGroupTrendRequest& WithTrendField(ReportGroupTrendFieldType value) { SetTrendField(value); return *this;}
    ///@}
  private:

    Aws::String m_reportGroupArn;
    bool m_reportGroupArnHasBeenSet = false;

    int m_numOfReports{0};
    bool m_numOfReportsHasBeenSet = false;

    ReportGroupTrendFieldType m_trendField{ReportGroupTrendFieldType::NOT_SET};
    bool m_trendFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
