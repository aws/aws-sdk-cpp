/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveFilters.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/ExportDestinationConfiguration.h>
#include <aws/mailmanager/model/ExportStatus.h>
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
namespace MailManager
{
namespace Model
{
  /**
   * <p>The response containing details of the specified archive export
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/GetArchiveExportResponse">AWS
   * API Reference</a></p>
   */
  class GetArchiveExportResult
  {
  public:
    AWS_MAILMANAGER_API GetArchiveExportResult() = default;
    AWS_MAILMANAGER_API GetArchiveExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the archive the email export was performed from.</p>
     */
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    GetArchiveExportResult& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria used to filter emails included in the export.</p>
     */
    inline const ArchiveFilters& GetFilters() const { return m_filters; }
    template<typename FiltersT = ArchiveFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ArchiveFilters>
    GetArchiveExportResult& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the timestamp range the exported emails cover.</p>
     */
    inline const Aws::Utils::DateTime& GetFromTimestamp() const { return m_fromTimestamp; }
    template<typename FromTimestampT = Aws::Utils::DateTime>
    void SetFromTimestamp(FromTimestampT&& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = std::forward<FromTimestampT>(value); }
    template<typename FromTimestampT = Aws::Utils::DateTime>
    GetArchiveExportResult& WithFromTimestamp(FromTimestampT&& value) { SetFromTimestamp(std::forward<FromTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the date range the exported emails cover.</p>
     */
    inline const Aws::Utils::DateTime& GetToTimestamp() const { return m_toTimestamp; }
    template<typename ToTimestampT = Aws::Utils::DateTime>
    void SetToTimestamp(ToTimestampT&& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = std::forward<ToTimestampT>(value); }
    template<typename ToTimestampT = Aws::Utils::DateTime>
    GetArchiveExportResult& WithToTimestamp(ToTimestampT&& value) { SetToTimestamp(std::forward<ToTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of email items included in the export.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetArchiveExportResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the exported emails are being delivered.</p>
     */
    inline const ExportDestinationConfiguration& GetExportDestinationConfiguration() const { return m_exportDestinationConfiguration; }
    template<typename ExportDestinationConfigurationT = ExportDestinationConfiguration>
    void SetExportDestinationConfiguration(ExportDestinationConfigurationT&& value) { m_exportDestinationConfigurationHasBeenSet = true; m_exportDestinationConfiguration = std::forward<ExportDestinationConfigurationT>(value); }
    template<typename ExportDestinationConfigurationT = ExportDestinationConfiguration>
    GetArchiveExportResult& WithExportDestinationConfiguration(ExportDestinationConfigurationT&& value) { SetExportDestinationConfiguration(std::forward<ExportDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export job.</p>
     */
    inline const ExportStatus& GetStatus() const { return m_status; }
    template<typename StatusT = ExportStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ExportStatus>
    GetArchiveExportResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchiveExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    ArchiveFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Utils::DateTime m_fromTimestamp{};
    bool m_fromTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_toTimestamp{};
    bool m_toTimestampHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ExportDestinationConfiguration m_exportDestinationConfiguration;
    bool m_exportDestinationConfigurationHasBeenSet = false;

    ExportStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
