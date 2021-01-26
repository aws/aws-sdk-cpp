/**
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
  class AWS_CODEBUILD_API GetReportGroupTrendRequest : public CodeBuildRequest
  {
  public:
    GetReportGroupTrendRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReportGroupTrend"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetReportGroupArn() const{ return m_reportGroupArn; }

    
    inline bool ReportGroupArnHasBeenSet() const { return m_reportGroupArnHasBeenSet; }

    
    inline void SetReportGroupArn(const Aws::String& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = value; }

    
    inline void SetReportGroupArn(Aws::String&& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = std::move(value); }

    
    inline void SetReportGroupArn(const char* value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn.assign(value); }

    
    inline GetReportGroupTrendRequest& WithReportGroupArn(const Aws::String& value) { SetReportGroupArn(value); return *this;}

    
    inline GetReportGroupTrendRequest& WithReportGroupArn(Aws::String&& value) { SetReportGroupArn(std::move(value)); return *this;}

    
    inline GetReportGroupTrendRequest& WithReportGroupArn(const char* value) { SetReportGroupArn(value); return *this;}


    
    inline int GetNumOfReports() const{ return m_numOfReports; }

    
    inline bool NumOfReportsHasBeenSet() const { return m_numOfReportsHasBeenSet; }

    
    inline void SetNumOfReports(int value) { m_numOfReportsHasBeenSet = true; m_numOfReports = value; }

    
    inline GetReportGroupTrendRequest& WithNumOfReports(int value) { SetNumOfReports(value); return *this;}


    
    inline const ReportGroupTrendFieldType& GetTrendField() const{ return m_trendField; }

    
    inline bool TrendFieldHasBeenSet() const { return m_trendFieldHasBeenSet; }

    
    inline void SetTrendField(const ReportGroupTrendFieldType& value) { m_trendFieldHasBeenSet = true; m_trendField = value; }

    
    inline void SetTrendField(ReportGroupTrendFieldType&& value) { m_trendFieldHasBeenSet = true; m_trendField = std::move(value); }

    
    inline GetReportGroupTrendRequest& WithTrendField(const ReportGroupTrendFieldType& value) { SetTrendField(value); return *this;}

    
    inline GetReportGroupTrendRequest& WithTrendField(ReportGroupTrendFieldType&& value) { SetTrendField(std::move(value)); return *this;}

  private:

    Aws::String m_reportGroupArn;
    bool m_reportGroupArnHasBeenSet;

    int m_numOfReports;
    bool m_numOfReportsHasBeenSet;

    ReportGroupTrendFieldType m_trendField;
    bool m_trendFieldHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
