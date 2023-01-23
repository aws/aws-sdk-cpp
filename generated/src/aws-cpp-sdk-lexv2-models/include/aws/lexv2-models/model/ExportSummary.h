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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides summary information about an export in an export list.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ExportSummary">AWS
   * API Reference</a></p>
   */
  class ExportSummary
  {
  public:
    AWS_LEXMODELSV2_API ExportSummary();
    AWS_LEXMODELSV2_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline ExportSummary& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline ExportSummary& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline ExportSummary& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }

    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }

    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline void SetResourceSpecification(const ExportResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }

    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline void SetResourceSpecification(ExportResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }

    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline ExportSummary& WithResourceSpecification(const ExportResourceSpecification& value) { SetResourceSpecification(value); return *this;}

    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline ExportSummary& WithResourceSpecification(ExportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}


    /**
     * <p>The file format used in the export files.</p>
     */
    inline const ImportExportFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The file format used in the export files.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The file format used in the export files.</p>
     */
    inline void SetFileFormat(const ImportExportFileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The file format used in the export files.</p>
     */
    inline void SetFileFormat(ImportExportFileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The file format used in the export files.</p>
     */
    inline ExportSummary& WithFileFormat(const ImportExportFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The file format used in the export files.</p>
     */
    inline ExportSummary& WithFileFormat(ImportExportFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }

    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }

    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::move(value); }

    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline ExportSummary& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline ExportSummary& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline ExportSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time that the export was created.</p>
     */
    inline ExportSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline ExportSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline ExportSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ExportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    ImportExportFileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
