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
  class AWS_INSPECTOR_API GetAssessmentReportResult
  {
  public:
    GetAssessmentReportResult();
    GetAssessmentReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssessmentReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
