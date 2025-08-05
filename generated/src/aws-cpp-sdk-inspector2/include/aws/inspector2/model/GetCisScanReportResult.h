/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisReportStatus.h>
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
namespace Inspector2
{
namespace Model
{
  class GetCisScanReportResult
  {
  public:
    AWS_INSPECTOR2_API GetCisScanReportResult() = default;
    AWS_INSPECTOR2_API GetCisScanReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCisScanReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The URL where a PDF or CSV of the CIS scan report can be downloaded. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetCisScanReportResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline CisReportStatus GetStatus() const { return m_status; }
    inline void SetStatus(CisReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetCisScanReportResult& WithStatus(CisReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCisScanReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    CisReportStatus m_status{CisReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
