/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ExportDestinationConfiguration.h>
#include <aws/mailmanager/model/ArchiveFilters.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_MAILMANAGER_API GetArchiveExportResult();
    AWS_MAILMANAGER_API GetArchiveExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetArchiveExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the archive the email export was performed from.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveId.assign(value); }
    inline GetArchiveExportResult& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline GetArchiveExportResult& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline GetArchiveExportResult& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the exported emails are being delivered.</p>
     */
    inline const ExportDestinationConfiguration& GetExportDestinationConfiguration() const{ return m_exportDestinationConfiguration; }
    inline void SetExportDestinationConfiguration(const ExportDestinationConfiguration& value) { m_exportDestinationConfiguration = value; }
    inline void SetExportDestinationConfiguration(ExportDestinationConfiguration&& value) { m_exportDestinationConfiguration = std::move(value); }
    inline GetArchiveExportResult& WithExportDestinationConfiguration(const ExportDestinationConfiguration& value) { SetExportDestinationConfiguration(value); return *this;}
    inline GetArchiveExportResult& WithExportDestinationConfiguration(ExportDestinationConfiguration&& value) { SetExportDestinationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria used to filter emails included in the export.</p>
     */
    inline const ArchiveFilters& GetFilters() const{ return m_filters; }
    inline void SetFilters(const ArchiveFilters& value) { m_filters = value; }
    inline void SetFilters(ArchiveFilters&& value) { m_filters = std::move(value); }
    inline GetArchiveExportResult& WithFilters(const ArchiveFilters& value) { SetFilters(value); return *this;}
    inline GetArchiveExportResult& WithFilters(ArchiveFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the timestamp range the exported emails cover.</p>
     */
    inline const Aws::Utils::DateTime& GetFromTimestamp() const{ return m_fromTimestamp; }
    inline void SetFromTimestamp(const Aws::Utils::DateTime& value) { m_fromTimestamp = value; }
    inline void SetFromTimestamp(Aws::Utils::DateTime&& value) { m_fromTimestamp = std::move(value); }
    inline GetArchiveExportResult& WithFromTimestamp(const Aws::Utils::DateTime& value) { SetFromTimestamp(value); return *this;}
    inline GetArchiveExportResult& WithFromTimestamp(Aws::Utils::DateTime&& value) { SetFromTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of email items included in the export.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResults = value; }
    inline GetArchiveExportResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the export job.</p>
     */
    inline const ExportStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExportStatus& value) { m_status = value; }
    inline void SetStatus(ExportStatus&& value) { m_status = std::move(value); }
    inline GetArchiveExportResult& WithStatus(const ExportStatus& value) { SetStatus(value); return *this;}
    inline GetArchiveExportResult& WithStatus(ExportStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the date range the exported emails cover.</p>
     */
    inline const Aws::Utils::DateTime& GetToTimestamp() const{ return m_toTimestamp; }
    inline void SetToTimestamp(const Aws::Utils::DateTime& value) { m_toTimestamp = value; }
    inline void SetToTimestamp(Aws::Utils::DateTime&& value) { m_toTimestamp = std::move(value); }
    inline GetArchiveExportResult& WithToTimestamp(const Aws::Utils::DateTime& value) { SetToTimestamp(value); return *this;}
    inline GetArchiveExportResult& WithToTimestamp(Aws::Utils::DateTime&& value) { SetToTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetArchiveExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetArchiveExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetArchiveExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;

    ExportDestinationConfiguration m_exportDestinationConfiguration;

    ArchiveFilters m_filters;

    Aws::Utils::DateTime m_fromTimestamp;

    int m_maxResults;

    ExportStatus m_status;

    Aws::Utils::DateTime m_toTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
