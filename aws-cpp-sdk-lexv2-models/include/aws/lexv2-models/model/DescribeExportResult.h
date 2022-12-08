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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeExportResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeExportResult();
    AWS_LEXMODELSV2_API DescribeExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline DescribeExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline DescribeExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the described export.</p>
     */
    inline DescribeExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The bot, bot ID, and optional locale ID of the exported bot or bot
     * locale.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>The bot, bot ID, and optional locale ID of the exported bot or bot
     * locale.</p>
     */
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecification = value; }

    /**
     * <p>The bot, bot ID, and optional locale ID of the exported bot or bot
     * locale.</p>
     */
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }

    /**
     * <p>The bot, bot ID, and optional locale ID of the exported bot or bot
     * locale.</p>
     */
    inline DescribeExportResult& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>The bot, bot ID, and optional locale ID of the exported bot or bot
     * locale.</p>
     */
    inline DescribeExportResult& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The file format used in the files that describe the resource. </p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The file format used in the files that describe the resource. </p>
     */
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormat = value; }

    /**
     * <p>The file format used in the files that describe the resource. </p>
     */
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormat = std::move(value); }

    /**
     * <p>The file format used in the files that describe the resource. </p>
     */
    inline DescribeExportResult& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The file format used in the files that describe the resource. </p>
     */
    inline DescribeExportResult& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>The status of the export. When the status is <code>Complete</code> the export
     * archive file is available for download.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the export. When the status is <code>Complete</code> the export
     * archive file is available for download.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatus = value; }

    /**
     * <p>The status of the export. When the status is <code>Complete</code> the export
     * archive file is available for download.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatus = std::move(value); }

    /**
     * <p>The status of the export. When the status is <code>Complete</code> the export
     * archive file is available for download.</p>
     */
    inline DescribeExportResult& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the export. When the status is <code>Complete</code> the export
     * archive file is available for download.</p>
     */
    inline DescribeExportResult& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline DescribeExportResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline DescribeExportResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline DescribeExportResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline DescribeExportResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>If the <code>exportStatus</code> is failed, contains one or more reasons why
     * the export could not be completed.</p>
     */
    inline DescribeExportResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }


    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline DescribeExportResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline DescribeExportResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>A pre-signed S3 URL that points to the bot or bot locale archive. The URL is
     * only available for 5 minutes after calling the <code>DescribeExport</code>
     * operation.</p>
     */
    inline DescribeExportResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}


    /**
     * <p>The date and time that the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline DescribeExportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline DescribeExportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The last date and time that the export was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The last date and time that the export was updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p>The last date and time that the export was updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The last date and time that the export was updated.</p>
     */
    inline DescribeExportResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The last date and time that the export was updated.</p>
     */
    inline DescribeExportResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_exportId;

    ExportResourceSpecification m_resourceSpecification;

    ImportExportFileFormat m_fileFormat;

    ExportStatus m_exportStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_downloadUrl;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
