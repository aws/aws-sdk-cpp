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
    AWS_LEXMODELSV2_API ExportSummary() = default;
    AWS_LEXMODELSV2_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the export.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    ExportSummary& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the bot or bot locale that was exported.</p>
     */
    inline const ExportResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    template<typename ResourceSpecificationT = ExportResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ExportResourceSpecification>
    ExportSummary& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file format used in the export files.</p>
     */
    inline ImportExportFileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(ImportExportFileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline ExportSummary& WithFileFormat(ImportExportFileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export. When the status is <code>Completed</code> the
     * export is ready to download.</p>
     */
    inline ExportStatus GetExportStatus() const { return m_exportStatus; }
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
    inline void SetExportStatus(ExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline ExportSummary& WithExportStatus(ExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the export was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    ExportSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the export was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    ExportSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ExportResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    ImportExportFileFormat m_fileFormat{ImportExportFileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    ExportStatus m_exportStatus{ExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
