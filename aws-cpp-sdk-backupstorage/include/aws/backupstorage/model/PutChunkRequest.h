/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/backupstorage/model/DataChecksumAlgorithm.h>
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
  class PutChunkRequest : public StreamingBackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API PutChunkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutChunk"; }

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
    inline PutChunkRequest& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline PutChunkRequest& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline PutChunkRequest& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * Upload Id for the in-progress upload.
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * Upload Id for the in-progress upload.
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * Upload Id for the in-progress upload.
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * Upload Id for the in-progress upload.
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * Upload Id for the in-progress upload.
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * Upload Id for the in-progress upload.
     */
    inline PutChunkRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * Upload Id for the in-progress upload.
     */
    inline PutChunkRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * Upload Id for the in-progress upload.
     */
    inline PutChunkRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * Describes this chunk's position relative to the other chunks
     */
    inline long long GetChunkIndex() const{ return m_chunkIndex; }

    /**
     * Describes this chunk's position relative to the other chunks
     */
    inline bool ChunkIndexHasBeenSet() const { return m_chunkIndexHasBeenSet; }

    /**
     * Describes this chunk's position relative to the other chunks
     */
    inline void SetChunkIndex(long long value) { m_chunkIndexHasBeenSet = true; m_chunkIndex = value; }

    /**
     * Describes this chunk's position relative to the other chunks
     */
    inline PutChunkRequest& WithChunkIndex(long long value) { SetChunkIndex(value); return *this;}


    /**
     * Data length
     */
    inline long long GetLength() const{ return m_length; }

    /**
     * Data length
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * Data length
     */
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * Data length
     */
    inline PutChunkRequest& WithLength(long long value) { SetLength(value); return *this;}


    /**
     * Data checksum
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * Data checksum
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * Data checksum
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * Data checksum
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * Data checksum
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * Data checksum
     */
    inline PutChunkRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * Data checksum
     */
    inline PutChunkRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * Data checksum
     */
    inline PutChunkRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const DataChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline PutChunkRequest& WithChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline PutChunkRequest& WithChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    long long m_chunkIndex;
    bool m_chunkIndexHasBeenSet = false;


    long long m_length;
    bool m_lengthHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    DataChecksumAlgorithm m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
