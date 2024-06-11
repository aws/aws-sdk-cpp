/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ExportResourceSpecification.h>
#include <aws/lexv2-models/model/ImportExportFileFormat.h>
#include <aws/lexv2-models/model/ExportStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{
  class UpdateExportResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateExportResult();
    AWS_LEXMODELSV2_API UpdateExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier Amazon Lex assigned to the export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportId.assign(value); }
    inline UpdateExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline UpdateExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline UpdateExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline UpdateExportResult& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline UpdateExportResult& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format used for the files that define the resource. The
     * <code>TSV</code> format is required to export a custom vocabulary only;
     * otherwise use <code>LexJson</code> format.</p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormat = value; }
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormat = std::move(value); }
    inline UpdateExportResult& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}
    inline UpdateExportResult& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export archive is available for download.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }
    inline UpdateExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}
    inline UpdateExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline UpdateExportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline UpdateExportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline UpdateExportResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline UpdateExportResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;

    ExportResourceSpecification m_resourceSpecification;

    ImportExportFileFormat m_fileFormat;

    ExportStatus m_exportStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
