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
   * <p>These are the items returned in the results of a search of Amazon S3 backup
   * metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/S3ResultItem">AWS
   * API Reference</a></p>
   */
  class S3ResultItem
  {
  public:
    AWS_BACKUPSEARCH_API S3ResultItem() = default;
    AWS_BACKUPSEARCH_API S3ResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are items in the returned results that match recovery point Amazon
     * Resource Names (ARN) input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const { return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    template<typename BackupResourceArnT = Aws::String>
    void SetBackupResourceArn(BackupResourceArnT&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::forward<BackupResourceArnT>(value); }
    template<typename BackupResourceArnT = Aws::String>
    S3ResultItem& WithBackupResourceArn(BackupResourceArnT&& value) { SetBackupResourceArn(std::forward<BackupResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are items in the returned results that match source Amazon Resource
     * Names (ARN) input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const { return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    template<typename SourceResourceArnT = Aws::String>
    void SetSourceResourceArn(SourceResourceArnT&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::forward<SourceResourceArnT>(value); }
    template<typename SourceResourceArnT = Aws::String>
    S3ResultItem& WithSourceResourceArn(SourceResourceArnT&& value) { SetSourceResourceArn(std::forward<SourceResourceArnT>(value)); return *this;}
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
    S3ResultItem& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is one or more items returned in the results of a search of Amazon S3
     * backup metadata that match the values input for object key.</p>
     */
    inline const Aws::String& GetObjectKey() const { return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    template<typename ObjectKeyT = Aws::String>
    void SetObjectKey(ObjectKeyT&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::forward<ObjectKeyT>(value); }
    template<typename ObjectKeyT = Aws::String>
    S3ResultItem& WithObjectKey(ObjectKeyT&& value) { SetObjectKey(std::forward<ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are items in the returned results that match values for object size(s)
     * input during a search of Amazon S3 backup metadata.</p>
     */
    inline long long GetObjectSize() const { return m_objectSize; }
    inline bool ObjectSizeHasBeenSet() const { return m_objectSizeHasBeenSet; }
    inline void SetObjectSize(long long value) { m_objectSizeHasBeenSet = true; m_objectSize = value; }
    inline S3ResultItem& WithObjectSize(long long value) { SetObjectSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * item creation time input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    S3ResultItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * ETags input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    S3ResultItem& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * version IDs input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    S3ResultItem& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupResourceArn;
    bool m_backupResourceArnHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;

    long long m_objectSize{0};
    bool m_objectSizeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
