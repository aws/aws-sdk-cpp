﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
  class CancelSbomExportResult
  {
  public:
    AWS_INSPECTOR2_API CancelSbomExportResult();
    AWS_INSPECTOR2_API CancelSbomExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API CancelSbomExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The report ID of the canceled SBOM export.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline CancelSbomExportResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline CancelSbomExportResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline CancelSbomExportResult& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelSbomExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelSbomExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelSbomExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
