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
  class CreateExportResult
  {
  public:
    AWS_LEXMODELSV2_API CreateExportResult();
    AWS_LEXMODELSV2_API CreateExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportId.assign(value); }
    inline CreateExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline CreateExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline CreateExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline CreateExportResult& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline CreateExportResult& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormat = value; }
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormat = std::move(value); }
    inline CreateExportResult& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}
    inline CreateExportResult& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }
    inline CreateExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}
    inline CreateExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline CreateExportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline CreateExportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;

    ExportResourceSpecification m_resourceSpecification;

    ImportExportFileFormat m_fileFormat;

    ExportStatus m_exportStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
