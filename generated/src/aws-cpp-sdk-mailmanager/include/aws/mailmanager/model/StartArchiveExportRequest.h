/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ExportDestinationConfiguration.h>
#include <aws/mailmanager/model/ArchiveFilters.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to initiate an export of emails from an archive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveExportRequest">AWS
   * API Reference</a></p>
   */
  class StartArchiveExportRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API StartArchiveExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartArchiveExport"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the archive to export emails from.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline StartArchiveExportRequest& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline StartArchiveExportRequest& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline StartArchiveExportRequest& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on where to deliver the exported email data.</p>
     */
    inline const ExportDestinationConfiguration& GetExportDestinationConfiguration() const{ return m_exportDestinationConfiguration; }
    inline bool ExportDestinationConfigurationHasBeenSet() const { return m_exportDestinationConfigurationHasBeenSet; }
    inline void SetExportDestinationConfiguration(const ExportDestinationConfiguration& value) { m_exportDestinationConfigurationHasBeenSet = true; m_exportDestinationConfiguration = value; }
    inline void SetExportDestinationConfiguration(ExportDestinationConfiguration&& value) { m_exportDestinationConfigurationHasBeenSet = true; m_exportDestinationConfiguration = std::move(value); }
    inline StartArchiveExportRequest& WithExportDestinationConfiguration(const ExportDestinationConfiguration& value) { SetExportDestinationConfiguration(value); return *this;}
    inline StartArchiveExportRequest& WithExportDestinationConfiguration(ExportDestinationConfiguration&& value) { SetExportDestinationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Criteria to filter which emails are included in the export.</p>
     */
    inline const ArchiveFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ArchiveFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ArchiveFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline StartArchiveExportRequest& WithFilters(const ArchiveFilters& value) { SetFilters(value); return *this;}
    inline StartArchiveExportRequest& WithFilters(ArchiveFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the timestamp range to include emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetFromTimestamp() const{ return m_fromTimestamp; }
    inline bool FromTimestampHasBeenSet() const { return m_fromTimestampHasBeenSet; }
    inline void SetFromTimestamp(const Aws::Utils::DateTime& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = value; }
    inline void SetFromTimestamp(Aws::Utils::DateTime&& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = std::move(value); }
    inline StartArchiveExportRequest& WithFromTimestamp(const Aws::Utils::DateTime& value) { SetFromTimestamp(value); return *this;}
    inline StartArchiveExportRequest& WithFromTimestamp(Aws::Utils::DateTime&& value) { SetFromTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to include message metadata as JSON files in the export.</p>
     */
    inline bool GetIncludeMetadata() const{ return m_includeMetadata; }
    inline bool IncludeMetadataHasBeenSet() const { return m_includeMetadataHasBeenSet; }
    inline void SetIncludeMetadata(bool value) { m_includeMetadataHasBeenSet = true; m_includeMetadata = value; }
    inline StartArchiveExportRequest& WithIncludeMetadata(bool value) { SetIncludeMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of email items to include in the export.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline StartArchiveExportRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the timestamp range to include emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetToTimestamp() const{ return m_toTimestamp; }
    inline bool ToTimestampHasBeenSet() const { return m_toTimestampHasBeenSet; }
    inline void SetToTimestamp(const Aws::Utils::DateTime& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = value; }
    inline void SetToTimestamp(Aws::Utils::DateTime&& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = std::move(value); }
    inline StartArchiveExportRequest& WithToTimestamp(const Aws::Utils::DateTime& value) { SetToTimestamp(value); return *this;}
    inline StartArchiveExportRequest& WithToTimestamp(Aws::Utils::DateTime&& value) { SetToTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    ExportDestinationConfiguration m_exportDestinationConfiguration;
    bool m_exportDestinationConfigurationHasBeenSet = false;

    ArchiveFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Utils::DateTime m_fromTimestamp;
    bool m_fromTimestampHasBeenSet = false;

    bool m_includeMetadata;
    bool m_includeMetadataHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_toTimestamp;
    bool m_toTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
