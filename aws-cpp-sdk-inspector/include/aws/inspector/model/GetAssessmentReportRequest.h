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
  class AWS_INSPECTOR_API GetAssessmentReportRequest : public InspectorRequest
  {
  public:
    GetAssessmentReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAssessmentReport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline GetAssessmentReportRequest& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline GetAssessmentReportRequest& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the assessment run for which you want to generate a
     * report.</p>
     */
    inline GetAssessmentReportRequest& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}


    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline const ReportFileFormat& GetReportFileFormat() const{ return m_reportFileFormat; }

    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline bool ReportFileFormatHasBeenSet() const { return m_reportFileFormatHasBeenSet; }

    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline void SetReportFileFormat(const ReportFileFormat& value) { m_reportFileFormatHasBeenSet = true; m_reportFileFormat = value; }

    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline void SetReportFileFormat(ReportFileFormat&& value) { m_reportFileFormatHasBeenSet = true; m_reportFileFormat = std::move(value); }

    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline GetAssessmentReportRequest& WithReportFileFormat(const ReportFileFormat& value) { SetReportFileFormat(value); return *this;}

    /**
     * <p>Specifies the file format (html or pdf) of the assessment report that you
     * want to generate.</p>
     */
    inline GetAssessmentReportRequest& WithReportFileFormat(ReportFileFormat&& value) { SetReportFileFormat(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline const ReportType& GetReportType() const{ return m_reportType; }

    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }

    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline void SetReportType(const ReportType& value) { m_reportTypeHasBeenSet = true; m_reportType = value; }

    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline void SetReportType(ReportType&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::move(value); }

    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline GetAssessmentReportRequest& WithReportType(const ReportType& value) { SetReportType(value); return *this;}

    /**
     * <p>Specifies the type of the assessment report that you want to generate. There
     * are two types of assessment reports: a finding report and a full report. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_reports.html">Assessment
     * Reports</a>. </p>
     */
    inline GetAssessmentReportRequest& WithReportType(ReportType&& value) { SetReportType(std::move(value)); return *this;}

  private:

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet;

    ReportFileFormat m_reportFileFormat;
    bool m_reportFileFormatHasBeenSet;

    ReportType m_reportType;
    bool m_reportTypeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
