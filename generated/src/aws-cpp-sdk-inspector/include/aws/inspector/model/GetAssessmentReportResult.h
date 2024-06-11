﻿/**
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


    ///@{
    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline const ReportStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReportStatus& value) { m_status = value; }
    inline void SetStatus(ReportStatus&& value) { m_status = std::move(value); }
    inline GetAssessmentReportResult& WithStatus(const ReportStatus& value) { SetStatus(value); return *this;}
    inline GetAssessmentReportResult& WithStatus(ReportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline GetAssessmentReportResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline GetAssessmentReportResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline GetAssessmentReportResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAssessmentReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAssessmentReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAssessmentReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReportStatus m_status;

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
