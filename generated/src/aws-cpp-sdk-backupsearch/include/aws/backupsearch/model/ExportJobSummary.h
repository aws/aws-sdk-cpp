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
    AWS_BACKUPSEARCH_API ExportJobSummary();
    AWS_BACKUPSEARCH_API ExportJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API ExportJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the unique string that identifies a specific export job.</p>
     */
    inline const Aws::String& GetExportJobIdentifier() const{ return m_exportJobIdentifier; }
    inline bool ExportJobIdentifierHasBeenSet() const { return m_exportJobIdentifierHasBeenSet; }
    inline void SetExportJobIdentifier(const Aws::String& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = value; }
    inline void SetExportJobIdentifier(Aws::String&& value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier = std::move(value); }
    inline void SetExportJobIdentifier(const char* value) { m_exportJobIdentifierHasBeenSet = true; m_exportJobIdentifier.assign(value); }
    inline ExportJobSummary& WithExportJobIdentifier(const Aws::String& value) { SetExportJobIdentifier(value); return *this;}
    inline ExportJobSummary& WithExportJobIdentifier(Aws::String&& value) { SetExportJobIdentifier(std::move(value)); return *this;}
    inline ExportJobSummary& WithExportJobIdentifier(const char* value) { SetExportJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique ARN (Amazon Resource Name) that belongs to the new export
     * job.</p>
     */
    inline const Aws::String& GetExportJobArn() const{ return m_exportJobArn; }
    inline bool ExportJobArnHasBeenSet() const { return m_exportJobArnHasBeenSet; }
    inline void SetExportJobArn(const Aws::String& value) { m_exportJobArnHasBeenSet = true; m_exportJobArn = value; }
    inline void SetExportJobArn(Aws::String&& value) { m_exportJobArnHasBeenSet = true; m_exportJobArn = std::move(value); }
    inline void SetExportJobArn(const char* value) { m_exportJobArnHasBeenSet = true; m_exportJobArn.assign(value); }
    inline ExportJobSummary& WithExportJobArn(const Aws::String& value) { SetExportJobArn(value); return *this;}
    inline ExportJobSummary& WithExportJobArn(Aws::String&& value) { SetExportJobArn(std::move(value)); return *this;}
    inline ExportJobSummary& WithExportJobArn(const char* value) { SetExportJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the export job is one of the following:</p> <p>
     * <code>CREATED</code>; <code>RUNNING</code>; <code>FAILED</code>; or
     * <code>COMPLETED</code>.</p>
     */
    inline const ExportJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExportJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExportJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ExportJobSummary& WithStatus(const ExportJobStatus& value) { SetStatus(value); return *this;}
    inline ExportJobSummary& WithStatus(ExportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a timestamp of the time the export job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ExportJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ExportJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a timestamp of the time the export job compeleted.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline ExportJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline ExportJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message is a string that is returned for an export job.</p> <p>A
     * status message is included for any status other than <code>COMPLETED</code>
     * without issues.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ExportJobSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ExportJobSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ExportJobSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const{ return m_searchJobArn; }
    inline bool SearchJobArnHasBeenSet() const { return m_searchJobArnHasBeenSet; }
    inline void SetSearchJobArn(const Aws::String& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = value; }
    inline void SetSearchJobArn(Aws::String&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::move(value); }
    inline void SetSearchJobArn(const char* value) { m_searchJobArnHasBeenSet = true; m_searchJobArn.assign(value); }
    inline ExportJobSummary& WithSearchJobArn(const Aws::String& value) { SetSearchJobArn(value); return *this;}
    inline ExportJobSummary& WithSearchJobArn(Aws::String&& value) { SetSearchJobArn(std::move(value)); return *this;}
    inline ExportJobSummary& WithSearchJobArn(const char* value) { SetSearchJobArn(value); return *this;}
    ///@}
  private:

    Aws::String m_exportJobIdentifier;
    bool m_exportJobIdentifierHasBeenSet = false;

    Aws::String m_exportJobArn;
    bool m_exportJobArnHasBeenSet = false;

    ExportJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
