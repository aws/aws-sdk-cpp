/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>These are the items returned in the results of a search of Amazon EBS backup
   * metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/EBSResultItem">AWS
   * API Reference</a></p>
   */
  class EBSResultItem
  {
  public:
    AWS_BACKUPSEARCH_API EBSResultItem() = default;
    AWS_BACKUPSEARCH_API EBSResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API EBSResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are one or more items in the results that match values for the Amazon
     * Resource Name (ARN) of recovery points returned in a search of Amazon EBS backup
     * metadata.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const { return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    template<typename BackupResourceArnT = Aws::String>
    void SetBackupResourceArn(BackupResourceArnT&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::forward<BackupResourceArnT>(value); }
    template<typename BackupResourceArnT = Aws::String>
    EBSResultItem& WithBackupResourceArn(BackupResourceArnT&& value) { SetBackupResourceArn(std::forward<BackupResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for the Amazon
     * Resource Name (ARN) of source resources returned in a search of Amazon EBS
     * backup metadata.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const { return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    template<typename SourceResourceArnT = Aws::String>
    void SetSourceResourceArn(SourceResourceArnT&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::forward<SourceResourceArnT>(value); }
    template<typename SourceResourceArnT = Aws::String>
    EBSResultItem& WithSourceResourceArn(SourceResourceArnT&& value) { SetSourceResourceArn(std::forward<SourceResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    EBSResultItem& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file systems
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::String& GetFileSystemIdentifier() const { return m_fileSystemIdentifier; }
    inline bool FileSystemIdentifierHasBeenSet() const { return m_fileSystemIdentifierHasBeenSet; }
    template<typename FileSystemIdentifierT = Aws::String>
    void SetFileSystemIdentifier(FileSystemIdentifierT&& value) { m_fileSystemIdentifierHasBeenSet = true; m_fileSystemIdentifier = std::forward<FileSystemIdentifierT>(value); }
    template<typename FileSystemIdentifierT = Aws::String>
    EBSResultItem& WithFileSystemIdentifier(FileSystemIdentifierT&& value) { SetFileSystemIdentifier(std::forward<FileSystemIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file paths
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    EBSResultItem& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for file sizes
     * returned in a search of Amazon EBS backup metadata.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline EBSResultItem& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for creation
     * times returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    EBSResultItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the results that match values for Last
     * Modified Time returned in a search of Amazon EBS backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    EBSResultItem& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupResourceArn;
    bool m_backupResourceArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_fileSystemIdentifier;
    bool m_fileSystemIdentifierHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
