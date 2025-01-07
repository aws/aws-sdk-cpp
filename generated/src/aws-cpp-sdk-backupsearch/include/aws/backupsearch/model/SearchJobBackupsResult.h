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
    AWS_BACKUPSEARCH_API SearchJobBackupsResult();
    AWS_BACKUPSEARCH_API SearchJobBackupsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchJobBackupsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the status of the search job backup result.</p>
     */
    inline const SearchJobState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SearchJobState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SearchJobState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SearchJobBackupsResult& WithStatus(const SearchJobState& value) { SetStatus(value); return *this;}
    inline SearchJobBackupsResult& WithStatus(SearchJobState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the status message included with the results.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline SearchJobBackupsResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline SearchJobBackupsResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline SearchJobBackupsResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the resource type of the search.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline SearchJobBackupsResult& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline SearchJobBackupsResult& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the backup
     * resources.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const{ return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    inline void SetBackupResourceArn(const Aws::String& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = value; }
    inline void SetBackupResourceArn(Aws::String&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::move(value); }
    inline void SetBackupResourceArn(const char* value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn.assign(value); }
    inline SearchJobBackupsResult& WithBackupResourceArn(const Aws::String& value) { SetBackupResourceArn(value); return *this;}
    inline SearchJobBackupsResult& WithBackupResourceArn(Aws::String&& value) { SetBackupResourceArn(std::move(value)); return *this;}
    inline SearchJobBackupsResult& WithBackupResourceArn(const char* value) { SetBackupResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the source
     * resources.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }
    inline SearchJobBackupsResult& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}
    inline SearchJobBackupsResult& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}
    inline SearchJobBackupsResult& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the backup index.</p>
     */
    inline const Aws::Utils::DateTime& GetIndexCreationTime() const{ return m_indexCreationTime; }
    inline bool IndexCreationTimeHasBeenSet() const { return m_indexCreationTimeHasBeenSet; }
    inline void SetIndexCreationTime(const Aws::Utils::DateTime& value) { m_indexCreationTimeHasBeenSet = true; m_indexCreationTime = value; }
    inline void SetIndexCreationTime(Aws::Utils::DateTime&& value) { m_indexCreationTimeHasBeenSet = true; m_indexCreationTime = std::move(value); }
    inline SearchJobBackupsResult& WithIndexCreationTime(const Aws::Utils::DateTime& value) { SetIndexCreationTime(value); return *this;}
    inline SearchJobBackupsResult& WithIndexCreationTime(Aws::Utils::DateTime&& value) { SetIndexCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the backup (recovery point).</p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationTime() const{ return m_backupCreationTime; }
    inline bool BackupCreationTimeHasBeenSet() const { return m_backupCreationTimeHasBeenSet; }
    inline void SetBackupCreationTime(const Aws::Utils::DateTime& value) { m_backupCreationTimeHasBeenSet = true; m_backupCreationTime = value; }
    inline void SetBackupCreationTime(Aws::Utils::DateTime&& value) { m_backupCreationTimeHasBeenSet = true; m_backupCreationTime = std::move(value); }
    inline SearchJobBackupsResult& WithBackupCreationTime(const Aws::Utils::DateTime& value) { SetBackupCreationTime(value); return *this;}
    inline SearchJobBackupsResult& WithBackupCreationTime(Aws::Utils::DateTime&& value) { SetBackupCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    SearchJobState m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_backupResourceArn;
    bool m_backupResourceArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_indexCreationTime;
    bool m_indexCreationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_backupCreationTime;
    bool m_backupCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
