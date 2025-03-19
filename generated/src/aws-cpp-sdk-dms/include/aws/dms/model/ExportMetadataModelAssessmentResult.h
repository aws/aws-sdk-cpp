/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ExportMetadataModelAssessmentResultEntry.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class ExportMetadataModelAssessmentResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline const ExportMetadataModelAssessmentResultEntry& GetPdfReport() const { return m_pdfReport; }
    template<typename PdfReportT = ExportMetadataModelAssessmentResultEntry>
    void SetPdfReport(PdfReportT&& value) { m_pdfReportHasBeenSet = true; m_pdfReport = std::forward<PdfReportT>(value); }
    template<typename PdfReportT = ExportMetadataModelAssessmentResultEntry>
    ExportMetadataModelAssessmentResult& WithPdfReport(PdfReportT&& value) { SetPdfReport(std::forward<PdfReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline const ExportMetadataModelAssessmentResultEntry& GetCsvReport() const { return m_csvReport; }
    template<typename CsvReportT = ExportMetadataModelAssessmentResultEntry>
    void SetCsvReport(CsvReportT&& value) { m_csvReportHasBeenSet = true; m_csvReport = std::forward<CsvReportT>(value); }
    template<typename CsvReportT = ExportMetadataModelAssessmentResultEntry>
    ExportMetadataModelAssessmentResult& WithCsvReport(CsvReportT&& value) { SetCsvReport(std::forward<CsvReportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportMetadataModelAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExportMetadataModelAssessmentResultEntry m_pdfReport;
    bool m_pdfReportHasBeenSet = false;

    ExportMetadataModelAssessmentResultEntry m_csvReport;
    bool m_csvReportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
