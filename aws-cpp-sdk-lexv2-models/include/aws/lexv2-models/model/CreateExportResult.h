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


    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline CreateExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline CreateExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>An identifier for a specific request to create an export.</p>
     */
    inline CreateExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecification = value; }

    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }

    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline CreateExportResult& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>A description of the type of resource that was exported, either a bot or a
     * bot locale.</p>
     */
    inline CreateExportResult& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormat = value; }

    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormat = std::move(value); }

    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline CreateExportResult& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The file format used for the bot or bot locale definition files.</p>
     */
    inline CreateExportResult& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline CreateExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the export. When the status is <code>Completed</code>, you can
     * use the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
     * operation to get the pre-signed S3 URL link to your exported bot or bot
     * locale.</p>
     */
    inline CreateExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline CreateExportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the request to export a bot was created.</p>
     */
    inline CreateExportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_exportId;

    ExportResourceSpecification m_resourceSpecification;

    ImportExportFileFormat m_fileFormat;

    ExportStatus m_exportStatus;

    Aws::Utils::DateTime m_creationDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
