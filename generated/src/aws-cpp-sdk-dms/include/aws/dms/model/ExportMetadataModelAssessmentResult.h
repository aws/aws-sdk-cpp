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
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult();
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ExportMetadataModelAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline const ExportMetadataModelAssessmentResultEntry& GetPdfReport() const{ return m_pdfReport; }

    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline void SetPdfReport(const ExportMetadataModelAssessmentResultEntry& value) { m_pdfReport = value; }

    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline void SetPdfReport(ExportMetadataModelAssessmentResultEntry&& value) { m_pdfReport = std::move(value); }

    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline ExportMetadataModelAssessmentResult& WithPdfReport(const ExportMetadataModelAssessmentResultEntry& value) { SetPdfReport(value); return *this;}

    /**
     * <p>The Amazon S3 details for an assessment exported in PDF format.</p>
     */
    inline ExportMetadataModelAssessmentResult& WithPdfReport(ExportMetadataModelAssessmentResultEntry&& value) { SetPdfReport(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline const ExportMetadataModelAssessmentResultEntry& GetCsvReport() const{ return m_csvReport; }

    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline void SetCsvReport(const ExportMetadataModelAssessmentResultEntry& value) { m_csvReport = value; }

    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline void SetCsvReport(ExportMetadataModelAssessmentResultEntry&& value) { m_csvReport = std::move(value); }

    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline ExportMetadataModelAssessmentResult& WithCsvReport(const ExportMetadataModelAssessmentResultEntry& value) { SetCsvReport(value); return *this;}

    /**
     * <p>The Amazon S3 details for an assessment exported in CSV format.</p>
     */
    inline ExportMetadataModelAssessmentResult& WithCsvReport(ExportMetadataModelAssessmentResultEntry&& value) { SetCsvReport(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportMetadataModelAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportMetadataModelAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportMetadataModelAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ExportMetadataModelAssessmentResultEntry m_pdfReport;

    ExportMetadataModelAssessmentResultEntry m_csvReport;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
