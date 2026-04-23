/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API ExportInfo
  {
  public:
    ExportInfo();
    ExportInfo(Aws::Utils::Json::JsonView jsonValue);
    ExportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportIdHasBeenSet = true; m_exportId = value; }

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportIdHasBeenSet = true; m_exportId = std::move(value); }

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline void SetExportId(const char* value) { m_exportIdHasBeenSet = true; m_exportId.assign(value); }

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline ExportInfo& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline ExportInfo& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier used to query an export.</p>
     */
    inline ExportInfo& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The status of the data export job.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>The status of the data export job.</p>
     */
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }

    /**
     * <p>The status of the data export job.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }

    /**
     * <p>The status of the data export job.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::move(value); }

    /**
     * <p>The status of the data export job.</p>
     */
    inline ExportInfo& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>The status of the data export job.</p>
     */
    inline ExportInfo& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>A status message provided for API callers.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline ExportInfo& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline ExportInfo& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A status message provided for API callers.</p>
     */
    inline ExportInfo& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline const Aws::String& GetConfigurationsDownloadUrl() const{ return m_configurationsDownloadUrl; }

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline bool ConfigurationsDownloadUrlHasBeenSet() const { return m_configurationsDownloadUrlHasBeenSet; }

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline void SetConfigurationsDownloadUrl(const Aws::String& value) { m_configurationsDownloadUrlHasBeenSet = true; m_configurationsDownloadUrl = value; }

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline void SetConfigurationsDownloadUrl(Aws::String&& value) { m_configurationsDownloadUrlHasBeenSet = true; m_configurationsDownloadUrl = std::move(value); }

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline void SetConfigurationsDownloadUrl(const char* value) { m_configurationsDownloadUrlHasBeenSet = true; m_configurationsDownloadUrl.assign(value); }

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline ExportInfo& WithConfigurationsDownloadUrl(const Aws::String& value) { SetConfigurationsDownloadUrl(value); return *this;}

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline ExportInfo& WithConfigurationsDownloadUrl(Aws::String&& value) { SetConfigurationsDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>A URL for an Amazon S3 bucket where you can review the exported data. The URL
     * is displayed only if the export succeeded.</p>
     */
    inline ExportInfo& WithConfigurationsDownloadUrl(const char* value) { SetConfigurationsDownloadUrl(value); return *this;}


    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetExportRequestTime() const{ return m_exportRequestTime; }

    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline bool ExportRequestTimeHasBeenSet() const { return m_exportRequestTimeHasBeenSet; }

    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline void SetExportRequestTime(const Aws::Utils::DateTime& value) { m_exportRequestTimeHasBeenSet = true; m_exportRequestTime = value; }

    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline void SetExportRequestTime(Aws::Utils::DateTime&& value) { m_exportRequestTimeHasBeenSet = true; m_exportRequestTime = std::move(value); }

    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline ExportInfo& WithExportRequestTime(const Aws::Utils::DateTime& value) { SetExportRequestTime(value); return *this;}

    /**
     * <p>The time that the data export was initiated.</p>
     */
    inline ExportInfo& WithExportRequestTime(Aws::Utils::DateTime&& value) { SetExportRequestTime(std::move(value)); return *this;}


    /**
     * <p>If true, the export of agent information exceeded the size limit for a single
     * export and the exported data is incomplete for the requested time range. To
     * address this, select a smaller time range for the export by using
     * <code>startDate</code> and <code>endDate</code>.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>If true, the export of agent information exceeded the size limit for a single
     * export and the exported data is incomplete for the requested time range. To
     * address this, select a smaller time range for the export by using
     * <code>startDate</code> and <code>endDate</code>.</p>
     */
    inline bool IsTruncatedHasBeenSet() const { return m_isTruncatedHasBeenSet; }

    /**
     * <p>If true, the export of agent information exceeded the size limit for a single
     * export and the exported data is incomplete for the requested time range. To
     * address this, select a smaller time range for the export by using
     * <code>startDate</code> and <code>endDate</code>.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * <p>If true, the export of agent information exceeded the size limit for a single
     * export and the exported data is incomplete for the requested time range. To
     * address this, select a smaller time range for the export by using
     * <code>startDate</code> and <code>endDate</code>.</p>
     */
    inline ExportInfo& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedStartTime() const{ return m_requestedStartTime; }

    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline bool RequestedStartTimeHasBeenSet() const { return m_requestedStartTimeHasBeenSet; }

    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline void SetRequestedStartTime(const Aws::Utils::DateTime& value) { m_requestedStartTimeHasBeenSet = true; m_requestedStartTime = value; }

    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline void SetRequestedStartTime(Aws::Utils::DateTime&& value) { m_requestedStartTimeHasBeenSet = true; m_requestedStartTime = std::move(value); }

    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline ExportInfo& WithRequestedStartTime(const Aws::Utils::DateTime& value) { SetRequestedStartTime(value); return *this;}

    /**
     * <p>The value of <code>startTime</code> parameter in the
     * <code>StartExportTask</code> request. If no <code>startTime</code> was
     * requested, this result does not appear in <code>ExportInfo</code>.</p>
     */
    inline ExportInfo& WithRequestedStartTime(Aws::Utils::DateTime&& value) { SetRequestedStartTime(std::move(value)); return *this;}


    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedEndTime() const{ return m_requestedEndTime; }

    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline bool RequestedEndTimeHasBeenSet() const { return m_requestedEndTimeHasBeenSet; }

    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline void SetRequestedEndTime(const Aws::Utils::DateTime& value) { m_requestedEndTimeHasBeenSet = true; m_requestedEndTime = value; }

    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline void SetRequestedEndTime(Aws::Utils::DateTime&& value) { m_requestedEndTimeHasBeenSet = true; m_requestedEndTime = std::move(value); }

    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline ExportInfo& WithRequestedEndTime(const Aws::Utils::DateTime& value) { SetRequestedEndTime(value); return *this;}

    /**
     * <p>The <code>endTime</code> used in the <code>StartExportTask</code> request. If
     * no <code>endTime</code> was requested, this result does not appear in
     * <code>ExportInfo</code>.</p>
     */
    inline ExportInfo& WithRequestedEndTime(Aws::Utils::DateTime&& value) { SetRequestedEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_configurationsDownloadUrl;
    bool m_configurationsDownloadUrlHasBeenSet;

    Aws::Utils::DateTime m_exportRequestTime;
    bool m_exportRequestTimeHasBeenSet;

    bool m_isTruncated;
    bool m_isTruncatedHasBeenSet;

    Aws::Utils::DateTime m_requestedStartTime;
    bool m_requestedStartTimeHasBeenSet;

    Aws::Utils::DateTime m_requestedEndTime;
    bool m_requestedEndTimeHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
