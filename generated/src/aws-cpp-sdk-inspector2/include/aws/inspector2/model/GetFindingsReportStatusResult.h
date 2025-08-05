/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ExternalReportStatus.h>
#include <aws/inspector2/model/ReportingErrorCode.h>
#include <aws/inspector2/model/Destination.h>
#include <aws/inspector2/model/FilterCriteria.h>
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
    AWS_INSPECTOR2_API GetFindingsReportStatusResult() = default;
    AWS_INSPECTOR2_API GetFindingsReportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetFindingsReportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the report.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetFindingsReportStatusResult& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the report.</p>
     */
    inline ExternalReportStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExternalReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFindingsReportStatusResult& WithStatus(ExternalReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the report.</p>
     */
    inline ReportingErrorCode GetErrorCode() const { return m_errorCode; }
    inline void SetErrorCode(ReportingErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline GetFindingsReportStatusResult& WithErrorCode(ReportingErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message of the report.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetFindingsReportStatusResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination of the report.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    GetFindingsReportStatusResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter criteria associated with the report.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    GetFindingsReportStatusResult& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsReportStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    ExternalReportStatus m_status{ExternalReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ReportingErrorCode m_errorCode{ReportingErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
