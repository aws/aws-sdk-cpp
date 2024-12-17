/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ExportJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backupsearch/model/ExportSpecification.h>
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
namespace BackupSearch
{
namespace Model
{
  class GetSearchResultExportJobResult
  {
  public:
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult();
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is the unique string that identifies the specified export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const{ return m_exportJobIdentifier; }
    inline void SetExportJobIdentifier(const Aws::String& value) { m_exportJobIdentifier = value; }
    inline void SetExportJobIdentifier(Aws::String&& value) { m_exportJobIdentifier = std::move(value); }
    inline void SetExportJobIdentifier(const char* value) { m_exportJobIdentifier.assign(value); }
    inline GetSearchResultExportJobResult& WithExportJobIdentifier(const Aws::String& value) { SetExportJobIdentifier(value); return *this;}
    inline GetSearchResultExportJobResult& WithExportJobIdentifier(Aws::String&& value) { SetExportJobIdentifier(std::move(value)); return *this;}
    inline GetSearchResultExportJobResult& WithExportJobIdentifier(const char* value) { SetExportJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) that uniquely identifies the export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const{ return m_exportJobArn; }
    inline void SetExportJobArn(const Aws::String& value) { m_exportJobArn = value; }
    inline void SetExportJobArn(Aws::String&& value) { m_exportJobArn = std::move(value); }
    inline void SetExportJobArn(const char* value) { m_exportJobArn.assign(value); }
    inline GetSearchResultExportJobResult& WithExportJobArn(const Aws::String& value) { SetExportJobArn(value); return *this;}
    inline GetSearchResultExportJobResult& WithExportJobArn(Aws::String&& value) { SetExportJobArn(std::move(value)); return *this;}
    inline GetSearchResultExportJobResult& WithExportJobArn(const char* value) { SetExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status of the export job.</p>
     */
    inline const ExportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ExportJobStatus& value) { m_status = value; }
    inline void SetStatus(ExportJobStatus&& value) { m_status = std::move(value); }
    inline GetSearchResultExportJobResult& WithStatus(const ExportJobStatus& value) { SetStatus(value); return *this;}
    inline GetSearchResultExportJobResult& WithStatus(ExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that an export job was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetSearchResultExportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetSearchResultExportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that an export job completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetSearchResultExportJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetSearchResultExportJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message is a string that is returned for search job with a status of
     * <code>FAILED</code>, along with steps to remedy and retry the operation.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetSearchResultExportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetSearchResultExportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetSearchResultExportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export specification consists of the destination S3 bucket to which the
     * search results were exported, along with the destination prefix.</p>
     */
    inline const ExportSpecification& GetExportSpecification() const{ return m_exportSpecification; }
    inline void SetExportSpecification(const ExportSpecification& value) { m_exportSpecification = value; }
    inline void SetExportSpecification(ExportSpecification&& value) { m_exportSpecification = std::move(value); }
    inline GetSearchResultExportJobResult& WithExportSpecification(const ExportSpecification& value) { SetExportSpecification(value); return *this;}
    inline GetSearchResultExportJobResult& WithExportSpecification(ExportSpecification&& value) { SetExportSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const{ return m_searchJobArn; }
    inline void SetSearchJobArn(const Aws::String& value) { m_searchJobArn = value; }
    inline void SetSearchJobArn(Aws::String&& value) { m_searchJobArn = std::move(value); }
    inline void SetSearchJobArn(const char* value) { m_searchJobArn.assign(value); }
    inline GetSearchResultExportJobResult& WithSearchJobArn(const Aws::String& value) { SetSearchJobArn(value); return *this;}
    inline GetSearchResultExportJobResult& WithSearchJobArn(Aws::String&& value) { SetSearchJobArn(std::move(value)); return *this;}
    inline GetSearchResultExportJobResult& WithSearchJobArn(const char* value) { SetSearchJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSearchResultExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSearchResultExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSearchResultExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportJobIdentifier;

    Aws::String m_exportJobArn;

    ExportJobStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::String m_statusMessage;

    ExportSpecification m_exportSpecification;

    Aws::String m_searchJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
