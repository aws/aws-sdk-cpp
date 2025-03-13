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
    AWS_INSPECTOR_API GetAssessmentReportResult() = default;
    AWS_INSPECTOR_API GetAssessmentReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetAssessmentReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the status of the request to generate an assessment report. </p>
     */
    inline ReportStatus GetStatus() const { return m_status; }
    inline void SetStatus(ReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAssessmentReportResult& WithStatus(ReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the URL where you can find the generated assessment report. This
     * parameter is only returned if the report is successfully generated.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetAssessmentReportResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssessmentReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportStatus m_status{ReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
