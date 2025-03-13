/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ExportJobStatus.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>This is the summary of an export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ExportJobSummary">AWS
   * API Reference</a></p>
   */
  class ExportJobSummary
  {
  public:
    AWS_BACKUPSEARCH_API ExportJobSummary() = default;
    AWS_BACKUPSEARCH_API ExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the unique string that identifies a specific export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const { return m_exportJobIdentifier; }
    inline bool ExportJobIdentifierHasBeenSet() const { return m_exportJobIdentifierHasBeenSet; }
    template<typename ExportJobIdentifierT = Aws::String>
    void SetExportJobIdentifier(ExportJobIdentifierT&& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = std::forward<ExportJobIdentifierT>(value); }
    template<typename ExportJobIdentifierT = Aws::String>
    ExportJobSummary& WithExportJobIdentifier(ExportJobIdentifierT&& value) { SetExportJobIdentifier(std::forward<ExportJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique ARN (Amazon Resource Name) that belongs to the new export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const { return m_exportJobArn; }
    inline bool ExportJobArnHasBeenSet() const { return m_exportJobArnHasBeenSet; }
    template<typename ExportJobArnT = Aws::String>
    void SetExportJobArn(ExportJobArnT&& value) { m_exportJobArnHasBeenSet = true; m_exportJobArn = std::forward<ExportJobArnT>(value); }
    template<typename ExportJobArnT = Aws::String>
    ExportJobSummary& WithExportJobArn(ExportJobArnT&& value) { SetExportJobArn(std::forward<ExportJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job is one of the following:</p> <p>
     * <code>CREATED</code>; <code>RUNNING</code>; <code>FAILED</code>; or
     * <code>COMPLETED</code>.</p>
     */
    inline ExportJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ExportJobSummary& WithStatus(ExportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a timestamp of the time the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ExportJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a timestamp of the time the export job compeleted.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    ExportJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message is a string that is returned for an export job.</p> <p>A
     * status message is included for any status other than <code>COMPLETED</code>
     * without issues.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ExportJobSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const { return m_searchJobArn; }
    inline bool SearchJobArnHasBeenSet() const { return m_searchJobArnHasBeenSet; }
    template<typename SearchJobArnT = Aws::String>
    void SetSearchJobArn(SearchJobArnT&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::forward<SearchJobArnT>(value); }
    template<typename SearchJobArnT = Aws::String>
    ExportJobSummary& WithSearchJobArn(SearchJobArnT&& value) { SetSearchJobArn(std::forward<SearchJobArnT>(value)); return *this;}
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

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
