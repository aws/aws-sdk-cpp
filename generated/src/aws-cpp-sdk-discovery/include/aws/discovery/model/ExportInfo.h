/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ExportStatus.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>Information regarding the export status of discovered data. The value is an
   * array of objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ExportInfo">AWS
   * API Reference</a></p>
   */
  class ExportInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportInfo() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API ExportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    ExportInfo& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data export job.</p>
     */
    inline ExportStatus GetExportStatus() const { return m_exportStatus; }
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
    inline void SetExportStatus(ExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline ExportInfo& WithExportStatus(ExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message provided for API callers.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ExportInfo& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline const Aws::String& GetConfigurationsDownloadUrl() const { return m_configurationsDownloadUrl; }
    inline bool ConfigurationsDownloadUrlHasBeenSet() const { return m_configurationsDownloadUrlHasBeenSet; }
    template<typename ConfigurationsDownloadUrlT = Aws::String>
    void SetConfigurationsDownloadUrl(ConfigurationsDownloadUrlT&& value) { m_configurationsDownloadUrlHasBeenSet = true; m_configurationsDownloadUrl = std::forward<ConfigurationsDownloadUrlT>(value); }
    template<typename ConfigurationsDownloadUrlT = Aws::String>
    ExportInfo& WithConfigurationsDownloadUrl(ConfigurationsDownloadUrlT&& value) { SetConfigurationsDownloadUrl(std::forward<ConfigurationsDownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetExportRequestTime() const { return m_exportRequestTime; }
    inline bool ExportRequestTimeHasBeenSet() const { return m_exportRequestTimeHasBeenSet; }
    template<typename ExportRequestTimeT = Aws::Utils::DateTime>
    void SetExportRequestTime(ExportRequestTimeT&& value) { m_exportRequestTimeHasBeenSet = true; m_exportRequestTime = std::forward<ExportRequestTimeT>(value); }
    template<typename ExportRequestTimeT = Aws::Utils::DateTime>
    ExportInfo& WithExportRequestTime(ExportRequestTimeT&& value) { SetExportRequestTime(std::forward<ExportRequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, the export of agent information exceeded the size limit for a single
     * export and the exported data is incomplete for the requested time range. To
     * address this, select a smaller time range for the export by using
     * <code>startDate</code> and <code>endDate</code>.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ExportInfo& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedStartTime() const { return m_requestedStartTime; }
    inline bool RequestedStartTimeHasBeenSet() const { return m_requestedStartTimeHasBeenSet; }
    template<typename RequestedStartTimeT = Aws::Utils::DateTime>
    void SetRequestedStartTime(RequestedStartTimeT&& value) { m_requestedStartTimeHasBeenSet = true; m_requestedStartTime = std::forward<RequestedStartTimeT>(value); }
    template<typename RequestedStartTimeT = Aws::Utils::DateTime>
    ExportInfo& WithRequestedStartTime(RequestedStartTimeT&& value) { SetRequestedStartTime(std::forward<RequestedStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedEndTime() const { return m_requestedEndTime; }
    inline bool RequestedEndTimeHasBeenSet() const { return m_requestedEndTimeHasBeenSet; }
    template<typename RequestedEndTimeT = Aws::Utils::DateTime>
    void SetRequestedEndTime(RequestedEndTimeT&& value) { m_requestedEndTimeHasBeenSet = true; m_requestedEndTime = std::forward<RequestedEndTimeT>(value); }
    template<typename RequestedEndTimeT = Aws::Utils::DateTime>
    ExportInfo& WithRequestedEndTime(RequestedEndTimeT&& value) { SetRequestedEndTime(std::forward<RequestedEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    ExportStatus m_exportStatus{ExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_configurationsDownloadUrl;
    bool m_configurationsDownloadUrlHasBeenSet = false;

    Aws::Utils::DateTime m_exportRequestTime{};
    bool m_exportRequestTimeHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::Utils::DateTime m_requestedStartTime{};
    bool m_requestedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_requestedEndTime{};
    bool m_requestedEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
