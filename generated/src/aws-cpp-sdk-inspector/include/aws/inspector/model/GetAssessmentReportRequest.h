﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/ReportFileFormat.h>
#include <aws/inspector/model/ReportType.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class GetAssessmentReportRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API GetAssessmentReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssessmentReport"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }
    inline GetAssessmentReportRequest& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}
    inline GetAssessmentReportRequest& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}
    inline GetAssessmentReportRequest& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline const ReportFileFormat& GetReportFileFormat() const{ return m_reportFileFormat; }
    inline bool ReportFileFormatHasBeenSet() const { return m_reportFileFormatHasBeenSet; }
    inline void SetReportFileFormat(const ReportFileFormat& value) { m_reportFileFormatHasBeenSet = true; m_reportFileFormat = value; }
    inline void SetReportFileFormat(ReportFileFormat&& value) { m_reportFileFormatHasBeenSet = true; m_reportFileFormat = std::move(value); }
    inline GetAssessmentReportRequest& WithReportFileFormat(const ReportFileFormat& value) { SetReportFileFormat(value); return *this;}
    inline GetAssessmentReportRequest& WithReportFileFormat(ReportFileFormat&& value) { SetReportFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline const ReportType& GetReportType() const{ return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    inline void SetReportType(const ReportType& value) { m_reportTypeHasBeenSet = true; m_reportType = value; }
    inline void SetReportType(ReportType&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::move(value); }
    inline GetAssessmentReportRequest& WithReportType(const ReportType& value) { SetReportType(value); return *this;}
    inline GetAssessmentReportRequest& WithReportType(ReportType&& value) { SetReportType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;

    ReportFileFormat m_reportFileFormat;
    bool m_reportFileFormatHasBeenSet = false;

    ReportType m_reportType;
    bool m_reportTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
