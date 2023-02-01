/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/ReportStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{
  class GetAssessmentReportResult
  {
  public:
    AWS_INSPECTOR_API GetAssessmentReportResult();
    AWS_INSPECTOR_API GetAssessmentReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetAssessmentReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline const ReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline void SetStatus(const ReportStatus& value) { m_status = value; }

    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline void SetStatus(ReportStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline GetAssessmentReportResult& WithStatus(const ReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline GetAssessmentReportResult& WithStatus(ReportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline GetAssessmentReportResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline GetAssessmentReportResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline GetAssessmentReportResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    ReportStatus m_status;

    Aws::String m_url;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
