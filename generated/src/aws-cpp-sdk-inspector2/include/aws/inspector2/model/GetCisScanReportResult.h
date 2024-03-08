/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisReportStatus.h>
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
namespace Inspector2
{
namespace Model
{
  class GetCisScanReportResult
  {
  public:
    AWS_INSPECTOR2_API GetCisScanReportResult();
    AWS_INSPECTOR2_API GetCisScanReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCisScanReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status.</p>
     */
    inline const CisReportStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const CisReportStatus& value) { m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(CisReportStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline GetCisScanReportResult& WithStatus(const CisReportStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline GetCisScanReportResult& WithStatus(CisReportStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline GetCisScanReportResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline GetCisScanReportResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p> The URL where the CIS scan report PDF can be downloaded. </p>
     */
    inline GetCisScanReportResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCisScanReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCisScanReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCisScanReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CisReportStatus m_status;

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
