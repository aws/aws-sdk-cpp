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
    AWS_BACKUPSEARCH_API S3ResultItem();
    AWS_BACKUPSEARCH_API S3ResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API S3ResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>These are items in the returned results that match recovery point Amazon
     * Resource Names (ARN) input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetBackupResourceArn() const{ return m_backupResourceArn; }
    inline bool BackupResourceArnHasBeenSet() const { return m_backupResourceArnHasBeenSet; }
    inline void SetBackupResourceArn(const Aws::String& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = value; }
    inline void SetBackupResourceArn(Aws::String&& value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn = std::move(value); }
    inline void SetBackupResourceArn(const char* value) { m_backupResourceArnHasBeenSet = true; m_backupResourceArn.assign(value); }
    inline S3ResultItem& WithBackupResourceArn(const Aws::String& value) { SetBackupResourceArn(value); return *this;}
    inline S3ResultItem& WithBackupResourceArn(Aws::String&& value) { SetBackupResourceArn(std::move(value)); return *this;}
    inline S3ResultItem& WithBackupResourceArn(const char* value) { SetBackupResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are items in the returned results that match source Amazon Resource
     * Names (ARN) input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }
    inline S3ResultItem& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}
    inline S3ResultItem& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}
    inline S3ResultItem& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline S3ResultItem& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline S3ResultItem& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline S3ResultItem& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is one or more items returned in the results of a search of Amazon S3
     * backup metadata that match the values input for object key.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }
    inline S3ResultItem& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}
    inline S3ResultItem& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}
    inline S3ResultItem& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are items in the returned results that match values for object size(s)
     * input during a search of Amazon S3 backup metadata.</p>
     */
    inline long long GetObjectSize() const{ return m_objectSize; }
    inline bool ObjectSizeHasBeenSet() const { return m_objectSizeHasBeenSet; }
    inline void SetObjectSize(long long value) { m_objectSizeHasBeenSet = true; m_objectSize = value; }
    inline S3ResultItem& WithObjectSize(long long value) { SetObjectSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * item creation time input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline S3ResultItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline S3ResultItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * ETags input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline S3ResultItem& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline S3ResultItem& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline S3ResultItem& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are one or more items in the returned results that match values for
     * version IDs input during a search of Amazon S3 backup metadata.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline S3ResultItem& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline S3ResultItem& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline S3ResultItem& WithVersionId(const char* value) { SetVersionId(value); return *this;}
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

    long long m_objectSize;
    bool m_objectSizeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
