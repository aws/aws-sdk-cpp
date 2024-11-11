/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ReportingErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ResourceFilterCriteria.h>
#include <aws/inspector2/model/SbomReportFormat.h>
#include <aws/inspector2/model/Destination.h>
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
  class GetSbomExportResult
  {
  public:
    AWS_INSPECTOR2_API GetSbomExportResult();
    AWS_INSPECTOR2_API GetSbomExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetSbomExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An error code.</p>
     */
    inline const ReportingErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline void SetErrorCode(const ReportingErrorCode& value) { m_errorCode = value; }
    inline void SetErrorCode(ReportingErrorCode&& value) { m_errorCode = std::move(value); }
    inline GetSbomExportResult& WithErrorCode(const ReportingErrorCode& value) { SetErrorCode(value); return *this;}
    inline GetSbomExportResult& WithErrorCode(ReportingErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetSbomExportResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetSbomExportResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetSbomExportResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the resource filter criteria used for the software
     * bill of materials (SBOM) report.</p>
     */
    inline const ResourceFilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }
    inline void SetFilterCriteria(const ResourceFilterCriteria& value) { m_filterCriteria = value; }
    inline void SetFilterCriteria(ResourceFilterCriteria&& value) { m_filterCriteria = std::move(value); }
    inline GetSbomExportResult& WithFilterCriteria(const ResourceFilterCriteria& value) { SetFilterCriteria(value); return *this;}
    inline GetSbomExportResult& WithFilterCriteria(ResourceFilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the software bill of materials (SBOM) report.</p>
     */
    inline const SbomReportFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const SbomReportFormat& value) { m_format = value; }
    inline void SetFormat(SbomReportFormat&& value) { m_format = std::move(value); }
    inline GetSbomExportResult& WithFormat(const SbomReportFormat& value) { SetFormat(value); return *this;}
    inline GetSbomExportResult& WithFormat(SbomReportFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The report ID of the software bill of materials (SBOM) report.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline void SetReportId(const Aws::String& value) { m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportId.assign(value); }
    inline GetSbomExportResult& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline GetSbomExportResult& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline GetSbomExportResult& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the Amazon S3 bucket and KMS key used to export
     * findings</p>
     */
    inline const Destination& GetS3Destination() const{ return m_s3Destination; }
    inline void SetS3Destination(const Destination& value) { m_s3Destination = value; }
    inline void SetS3Destination(Destination&& value) { m_s3Destination = std::move(value); }
    inline GetSbomExportResult& WithS3Destination(const Destination& value) { SetS3Destination(value); return *this;}
    inline GetSbomExportResult& WithS3Destination(Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the software bill of materials (SBOM) report.</p>
     */
    inline const ExternalReportStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExternalReportStatus& value) { m_status = value; }
    inline void SetStatus(ExternalReportStatus&& value) { m_status = std::move(value); }
    inline GetSbomExportResult& WithStatus(const ExternalReportStatus& value) { SetStatus(value); return *this;}
    inline GetSbomExportResult& WithStatus(ExternalReportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSbomExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSbomExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSbomExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReportingErrorCode m_errorCode;

    Aws::String m_errorMessage;

    ResourceFilterCriteria m_filterCriteria;

    SbomReportFormat m_format;

    Aws::String m_reportId;

    Destination m_s3Destination;

    ExternalReportStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
