/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/backupstorage/model/SummaryChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BackupStorage
{
namespace Model
{

  /**
   */
  class PutObjectRequest : public StreamingBackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API PutObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutObject"; }

    AWS_BACKUPSTORAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_BACKUPSTORAGE_API bool SignBody() const override { return false; }


    /**
     * Backup job Id for the in-progress backup.
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }

    /**
     * Backup job Id for the in-progress backup.
     */
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }

    /**
     * Backup job Id for the in-progress backup.
     */
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = value; }

    /**
     * Backup job Id for the in-progress backup.
     */
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::move(value); }

    /**
     * Backup job Id for the in-progress backup.
     */
    inline void SetBackupJobId(const char* value) { m_backupJobIdHasBeenSet = true; m_backupJobId.assign(value); }

    /**
     * Backup job Id for the in-progress backup.
     */
    inline PutObjectRequest& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline PutObjectRequest& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline PutObjectRequest& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * The name of the Object to be uploaded.
     */
    inline const Aws::String& GetObjectName() const{ return m_objectName; }

    /**
     * The name of the Object to be uploaded.
     */
    inline bool ObjectNameHasBeenSet() const { return m_objectNameHasBeenSet; }

    /**
     * The name of the Object to be uploaded.
     */
    inline void SetObjectName(const Aws::String& value) { m_objectNameHasBeenSet = true; m_objectName = value; }

    /**
     * The name of the Object to be uploaded.
     */
    inline void SetObjectName(Aws::String&& value) { m_objectNameHasBeenSet = true; m_objectName = std::move(value); }

    /**
     * The name of the Object to be uploaded.
     */
    inline void SetObjectName(const char* value) { m_objectNameHasBeenSet = true; m_objectName.assign(value); }

    /**
     * The name of the Object to be uploaded.
     */
    inline PutObjectRequest& WithObjectName(const Aws::String& value) { SetObjectName(value); return *this;}

    /**
     * The name of the Object to be uploaded.
     */
    inline PutObjectRequest& WithObjectName(Aws::String&& value) { SetObjectName(std::move(value)); return *this;}

    /**
     * The name of the Object to be uploaded.
     */
    inline PutObjectRequest& WithObjectName(const char* value) { SetObjectName(value); return *this;}


    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline const Aws::String& GetMetadataString() const{ return m_metadataString; }

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline bool MetadataStringHasBeenSet() const { return m_metadataStringHasBeenSet; }

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline void SetMetadataString(const Aws::String& value) { m_metadataStringHasBeenSet = true; m_metadataString = value; }

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline void SetMetadataString(Aws::String&& value) { m_metadataStringHasBeenSet = true; m_metadataString = std::move(value); }

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline void SetMetadataString(const char* value) { m_metadataStringHasBeenSet = true; m_metadataString.assign(value); }

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline PutObjectRequest& WithMetadataString(const Aws::String& value) { SetMetadataString(value); return *this;}

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline PutObjectRequest& WithMetadataString(Aws::String&& value) { SetMetadataString(std::move(value)); return *this;}

    /**
     * Store user defined metadata like backup checksum, disk ids, restore metadata
     * etc.
     */
    inline PutObjectRequest& WithMetadataString(const char* value) { SetMetadataString(value); return *this;}


    /**
     * Length of the inline chunk data.
     */
    inline long long GetInlineChunkLength() const{ return m_inlineChunkLength; }

    /**
     * Length of the inline chunk data.
     */
    inline bool InlineChunkLengthHasBeenSet() const { return m_inlineChunkLengthHasBeenSet; }

    /**
     * Length of the inline chunk data.
     */
    inline void SetInlineChunkLength(long long value) { m_inlineChunkLengthHasBeenSet = true; m_inlineChunkLength = value; }

    /**
     * Length of the inline chunk data.
     */
    inline PutObjectRequest& WithInlineChunkLength(long long value) { SetInlineChunkLength(value); return *this;}


    /**
     * Inline chunk checksum
     */
    inline const Aws::String& GetInlineChunkChecksum() const{ return m_inlineChunkChecksum; }

    /**
     * Inline chunk checksum
     */
    inline bool InlineChunkChecksumHasBeenSet() const { return m_inlineChunkChecksumHasBeenSet; }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(const Aws::String& value) { m_inlineChunkChecksumHasBeenSet = true; m_inlineChunkChecksum = value; }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(Aws::String&& value) { m_inlineChunkChecksumHasBeenSet = true; m_inlineChunkChecksum = std::move(value); }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(const char* value) { m_inlineChunkChecksumHasBeenSet = true; m_inlineChunkChecksum.assign(value); }

    /**
     * Inline chunk checksum
     */
    inline PutObjectRequest& WithInlineChunkChecksum(const Aws::String& value) { SetInlineChunkChecksum(value); return *this;}

    /**
     * Inline chunk checksum
     */
    inline PutObjectRequest& WithInlineChunkChecksum(Aws::String&& value) { SetInlineChunkChecksum(std::move(value)); return *this;}

    /**
     * Inline chunk checksum
     */
    inline PutObjectRequest& WithInlineChunkChecksum(const char* value) { SetInlineChunkChecksum(value); return *this;}


    /**
     * Inline chunk checksum algorithm
     */
    inline const Aws::String& GetInlineChunkChecksumAlgorithm() const{ return m_inlineChunkChecksumAlgorithm; }

    /**
     * Inline chunk checksum algorithm
     */
    inline bool InlineChunkChecksumAlgorithmHasBeenSet() const { return m_inlineChunkChecksumAlgorithmHasBeenSet; }

    /**
     * Inline chunk checksum algorithm
     */
    inline void SetInlineChunkChecksumAlgorithm(const Aws::String& value) { m_inlineChunkChecksumAlgorithmHasBeenSet = true; m_inlineChunkChecksumAlgorithm = value; }

    /**
     * Inline chunk checksum algorithm
     */
    inline void SetInlineChunkChecksumAlgorithm(Aws::String&& value) { m_inlineChunkChecksumAlgorithmHasBeenSet = true; m_inlineChunkChecksumAlgorithm = std::move(value); }

    /**
     * Inline chunk checksum algorithm
     */
    inline void SetInlineChunkChecksumAlgorithm(const char* value) { m_inlineChunkChecksumAlgorithmHasBeenSet = true; m_inlineChunkChecksumAlgorithm.assign(value); }

    /**
     * Inline chunk checksum algorithm
     */
    inline PutObjectRequest& WithInlineChunkChecksumAlgorithm(const Aws::String& value) { SetInlineChunkChecksumAlgorithm(value); return *this;}

    /**
     * Inline chunk checksum algorithm
     */
    inline PutObjectRequest& WithInlineChunkChecksumAlgorithm(Aws::String&& value) { SetInlineChunkChecksumAlgorithm(std::move(value)); return *this;}

    /**
     * Inline chunk checksum algorithm
     */
    inline PutObjectRequest& WithInlineChunkChecksumAlgorithm(const char* value) { SetInlineChunkChecksumAlgorithm(value); return *this;}


    /**
     * object checksum
     */
    inline const Aws::String& GetObjectChecksum() const{ return m_objectChecksum; }

    /**
     * object checksum
     */
    inline bool ObjectChecksumHasBeenSet() const { return m_objectChecksumHasBeenSet; }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(const Aws::String& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = value; }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(Aws::String&& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = std::move(value); }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(const char* value) { m_objectChecksumHasBeenSet = true; m_objectChecksum.assign(value); }

    /**
     * object checksum
     */
    inline PutObjectRequest& WithObjectChecksum(const Aws::String& value) { SetObjectChecksum(value); return *this;}

    /**
     * object checksum
     */
    inline PutObjectRequest& WithObjectChecksum(Aws::String&& value) { SetObjectChecksum(std::move(value)); return *this;}

    /**
     * object checksum
     */
    inline PutObjectRequest& WithObjectChecksum(const char* value) { SetObjectChecksum(value); return *this;}


    /**
     * object checksum algorithm
     */
    inline const SummaryChecksumAlgorithm& GetObjectChecksumAlgorithm() const{ return m_objectChecksumAlgorithm; }

    /**
     * object checksum algorithm
     */
    inline bool ObjectChecksumAlgorithmHasBeenSet() const { return m_objectChecksumAlgorithmHasBeenSet; }

    /**
     * object checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = value; }

    /**
     * object checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = std::move(value); }

    /**
     * object checksum algorithm
     */
    inline PutObjectRequest& WithObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { SetObjectChecksumAlgorithm(value); return *this;}

    /**
     * object checksum algorithm
     */
    inline PutObjectRequest& WithObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { SetObjectChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * Throw an exception if Object name is already exist.
     */
    inline bool GetThrowOnDuplicate() const{ return m_throwOnDuplicate; }

    /**
     * Throw an exception if Object name is already exist.
     */
    inline bool ThrowOnDuplicateHasBeenSet() const { return m_throwOnDuplicateHasBeenSet; }

    /**
     * Throw an exception if Object name is already exist.
     */
    inline void SetThrowOnDuplicate(bool value) { m_throwOnDuplicateHasBeenSet = true; m_throwOnDuplicate = value; }

    /**
     * Throw an exception if Object name is already exist.
     */
    inline PutObjectRequest& WithThrowOnDuplicate(bool value) { SetThrowOnDuplicate(value); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_objectName;
    bool m_objectNameHasBeenSet = false;

    Aws::String m_metadataString;
    bool m_metadataStringHasBeenSet = false;


    long long m_inlineChunkLength;
    bool m_inlineChunkLengthHasBeenSet = false;

    Aws::String m_inlineChunkChecksum;
    bool m_inlineChunkChecksumHasBeenSet = false;

    Aws::String m_inlineChunkChecksumAlgorithm;
    bool m_inlineChunkChecksumAlgorithmHasBeenSet = false;

    Aws::String m_objectChecksum;
    bool m_objectChecksumHasBeenSet = false;

    SummaryChecksumAlgorithm m_objectChecksumAlgorithm;
    bool m_objectChecksumAlgorithmHasBeenSet = false;

    bool m_throwOnDuplicate;
    bool m_throwOnDuplicateHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
