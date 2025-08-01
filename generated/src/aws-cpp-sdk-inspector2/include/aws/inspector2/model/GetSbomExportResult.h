/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SbomReportFormat.h>
#include <aws/inspector2/model/ExternalReportStatus.h>
#include <aws/inspector2/model/ReportingErrorCode.h>
#include <aws/inspector2/model/Destination.h>
#include <aws/inspector2/model/ResourceFilterCriteria.h>
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
  class GetSbomExportResult
  {
  public:
    AWS_INSPECTOR2_API GetSbomExportResult() = default;
    AWS_INSPECTOR2_API GetSbomExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetSbomExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The report ID of the software bill of materials (SBOM) report.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetSbomExportResult& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the software bill of materials (SBOM) report.</p>
     */
    inline SbomReportFormat GetFormat() const { return m_format; }
    inline void SetFormat(SbomReportFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetSbomExportResult& WithFormat(SbomReportFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the software bill of materials (SBOM) report.</p>
     */
    inline ExternalReportStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExternalReportStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSbomExportResult& WithStatus(ExternalReportStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code.</p>
     */
    inline ReportingErrorCode GetErrorCode() const { return m_errorCode; }
    inline void SetErrorCode(ReportingErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline GetSbomExportResult& WithErrorCode(ReportingErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetSbomExportResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the Amazon S3 bucket and KMS key used to export
     * findings</p>
     */
    inline const Destination& GetS3Destination() const { return m_s3Destination; }
    template<typename S3DestinationT = Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = Destination>
    GetSbomExportResult& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the resource filter criteria used for the software
     * bill of materials (SBOM) report.</p>
     */
    inline const ResourceFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    template<typename FilterCriteriaT = ResourceFilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = ResourceFilterCriteria>
    GetSbomExportResult& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSbomExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    SbomReportFormat m_format{SbomReportFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    ExternalReportStatus m_status{ExternalReportStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ReportingErrorCode m_errorCode{ReportingErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;

    ResourceFilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
