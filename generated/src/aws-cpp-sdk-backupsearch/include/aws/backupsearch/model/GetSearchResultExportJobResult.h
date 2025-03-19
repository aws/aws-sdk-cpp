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
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult() = default;
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API GetSearchResultExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>This is the unique string that identifies the specified export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const { return m_exportJobIdentifier; }
    template<typename ExportJobIdentifierT = Aws::String>
    void SetExportJobIdentifier(ExportJobIdentifierT&& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = std::forward<ExportJobIdentifierT>(value); }
    template<typename ExportJobIdentifierT = Aws::String>
    GetSearchResultExportJobResult& WithExportJobIdentifier(ExportJobIdentifierT&& value) { SetExportJobIdentifier(std::forward<ExportJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) that uniquely identifies the export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const { return m_exportJobArn; }
    template<typename ExportJobArnT = Aws::String>
    void SetExportJobArn(ExportJobArnT&& value) { m_exportJobArnHasBeenSet = true; m_exportJobArn = std::forward<ExportJobArnT>(value); }
    template<typename ExportJobArnT = Aws::String>
    GetSearchResultExportJobResult& WithExportJobArn(ExportJobArnT&& value) { SetExportJobArn(std::forward<ExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the current status of the export job.</p>
     */
    inline ExportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSearchResultExportJobResult& WithStatus(ExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that an export job was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetSearchResultExportJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that an export job completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    GetSearchResultExportJobResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message is a string that is returned for search job with a status of
     * <code>FAILED</code>, along with steps to remedy and retry the operation.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSearchResultExportJobResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export specification consists of the destination S3 bucket to which the
     * search results were exported, along with the destination prefix.</p>
     */
    inline const ExportSpecification& GetExportSpecification() const { return m_exportSpecification; }
    template<typename ExportSpecificationT = ExportSpecification>
    void SetExportSpecification(ExportSpecificationT&& value) { m_exportSpecificationHasBeenSet = true; m_exportSpecification = std::forward<ExportSpecificationT>(value); }
    template<typename ExportSpecificationT = ExportSpecification>
    GetSearchResultExportJobResult& WithExportSpecification(ExportSpecificationT&& value) { SetExportSpecification(std::forward<ExportSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const { return m_searchJobArn; }
    template<typename SearchJobArnT = Aws::String>
    void SetSearchJobArn(SearchJobArnT&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::forward<SearchJobArnT>(value); }
    template<typename SearchJobArnT = Aws::String>
    GetSearchResultExportJobResult& WithSearchJobArn(SearchJobArnT&& value) { SetSearchJobArn(std::forward<SearchJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSearchResultExportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportJobIdentifier;
    bool m_exportJobIdentifierHasBeenSet = false;

    Aws::String m_exportJobArn;
    bool m_exportJobArnHasBeenSet = false;

    ExportJobStatus m_status{ExportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ExportSpecification m_exportSpecification;
    bool m_exportSpecificationHasBeenSet = false;

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
