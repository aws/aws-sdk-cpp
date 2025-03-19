/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/model/SearchJobState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/ResourceType.h>
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
   * <p>This contains the information about recovery points returned in results of a
   * search job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/SearchJobBackupsResult">AWS
   * API Reference</a></p>
   */
  class SearchJobBackupsResult
  {
  public:
    AWS_BACKUPSEARCH_API SearchJobBackupsResult() = default;
    AWS_BACKUPSEARCH_API SearchJobBackupsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchJobBackupsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the status of the search job backup result.</p>
     */
    inline SearchJobState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SearchJobState value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchJobBackupsResult& WithStatus(SearchJobState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the status message included with the results.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SearchJobBackupsResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the resource type of the search.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline SearchJobBackupsResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the backup
     * resources.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const { return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    template<typename BackupResourceArnT = Aws::String>
    void SetBackupResourceArn(BackupResourceArnT&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::forward<BackupResourceArnT>(value); }
    template<typename BackupResourceArnT = Aws::String>
    SearchJobBackupsResult& WithBackupResourceArn(BackupResourceArnT&& value) { SetBackupResourceArn(std::forward<BackupResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the source
     * resources.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const { return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    template<typename SourceResourceArnT = Aws::String>
    void SetSourceResourceArn(SourceResourceArnT&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::forward<SourceResourceArnT>(value); }
    template<typename SourceResourceArnT = Aws::String>
    SearchJobBackupsResult& WithSourceResourceArn(SourceResourceArnT&& value) { SetSourceResourceArn(std::forward<SourceResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the backup index.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCreationTime() const { return m_indexCreationTime; }
    inline bool IndexCreationTimeHasBeenSet() const { return m_indexCreationTimeHasBeenSet; }
    template<typename IndexCreationTimeT = Aws::Utils::DateTime>
    void SetIndexCreationTime(IndexCreationTimeT&& value) { m_indexCreationTimeHasBeenSet = true; m_indexCreationTime = std::forward<IndexCreationTimeT>(value); }
    template<typename IndexCreationTimeT = Aws::Utils::DateTime>
    SearchJobBackupsResult& WithIndexCreationTime(IndexCreationTimeT&& value) { SetIndexCreationTime(std::forward<IndexCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the backup (recovery point).</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationTime() const { return m_backupCreationTime; }
    inline bool BackupCreationTimeHasBeenSet() const { return m_backupCreationTimeHasBeenSet; }
    template<typename BackupCreationTimeT = Aws::Utils::DateTime>
    void SetBackupCreationTime(BackupCreationTimeT&& value) { m_backupCreationTimeHasBeenSet = true; m_backupCreationTime = std::forward<BackupCreationTimeT>(value); }
    template<typename BackupCreationTimeT = Aws::Utils::DateTime>
    SearchJobBackupsResult& WithBackupCreationTime(BackupCreationTimeT&& value) { SetBackupCreationTime(std::forward<BackupCreationTimeT>(value)); return *this;}
    ///@}
  private:

    SearchJobState m_status{SearchJobState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_backupResourceArn;
    bool m_backupResourceArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_indexCreationTime{};
    bool m_indexCreationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_backupCreationTime{};
    bool m_backupCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
