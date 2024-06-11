﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Destination.h>
#include <aws/inspector2/model/ReportingErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FilterCriteria.h>
#include <aws/inspector2/model/ExternalReportStatus.h>
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
  class GetFindingsReportStatusResult
  {
  public:
    AWS_INSPECTOR2_API GetFindingsReportStatusResult();
    AWS_INSPECTOR2_API GetFindingsReportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetFindingsReportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The destination of the report.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Destination& value) { m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destination = std::move(value); }
    inline GetFindingsReportStatusResult& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline GetFindingsReportStatusResult& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the report.</p>
     */
    inline const ReportingErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline void SetErrorCode(const ReportingErrorCode& value) { m_errorCode = value; }
    inline void SetErrorCode(ReportingErrorCode&& value) { m_errorCode = std::move(value); }
    inline GetFindingsReportStatusResult& WithErrorCode(const ReportingErrorCode& value) { SetErrorCode(value); return *this;}
    inline GetFindingsReportStatusResult& WithErrorCode(ReportingErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message of the report.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetFindingsReportStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetFindingsReportStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetFindingsReportStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter criteria associated with the report.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteria = value; }
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteria = std::move(value); }
    inline GetFindingsReportStatusResult& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}
    inline GetFindingsReportStatusResult& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline GetFindingsReportStatusResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline GetFindingsReportStatusResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline GetFindingsReportStatusResult& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the report.</p>
     */
    inline const ExternalReportStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExternalReportStatus& value) { m_status = value; }
    inline void SetStatus(ExternalReportStatus&& value) { m_status = std::move(value); }
    inline GetFindingsReportStatusResult& WithStatus(const ExternalReportStatus& value) { SetStatus(value); return *this;}
    inline GetFindingsReportStatusResult& WithStatus(ExternalReportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingsReportStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingsReportStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingsReportStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Destination m_destination;

    ReportingErrorCode m_errorCode;

    Aws::String m_errorMessage;

    FilterCriteria m_filterCriteria;

    Aws::String m_reportId;

    ExternalReportStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
