/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/SummaryChecksumAlgorithm.h>
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
  class NotifyObjectCompleteRequest : public StreamingBackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API NotifyObjectCompleteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyObjectComplete"; }

    AWS_BACKUPSTORAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_BACKUPSTORAGE_API bool SignBody() const override { return false; }


    /**
     * Backup job Id for the in-progress backup
     */
    inline const Aws::String& GetBackupJobId() const{ return m_backupJobId; }

    /**
     * Backup job Id for the in-progress backup
     */
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }

    /**
     * Backup job Id for the in-progress backup
     */
    inline void SetBackupJobId(const Aws::String& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = value; }

    /**
     * Backup job Id for the in-progress backup
     */
    inline void SetBackupJobId(Aws::String&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::move(value); }

    /**
     * Backup job Id for the in-progress backup
     */
    inline void SetBackupJobId(const char* value) { m_backupJobIdHasBeenSet = true; m_backupJobId.assign(value); }

    /**
     * Backup job Id for the in-progress backup
     */
    inline NotifyObjectCompleteRequest& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * Backup job Id for the in-progress backup
     */
    inline NotifyObjectCompleteRequest& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * Backup job Id for the in-progress backup
     */
    inline NotifyObjectCompleteRequest& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * Upload Id for the in-progress upload
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * Upload Id for the in-progress upload
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * Upload Id for the in-progress upload
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * Upload Id for the in-progress upload
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * Upload Id for the in-progress upload
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * Upload Id for the in-progress upload
     */
    inline NotifyObjectCompleteRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * Upload Id for the in-progress upload
     */
    inline NotifyObjectCompleteRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * Upload Id for the in-progress upload
     */
    inline NotifyObjectCompleteRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * Object checksum
     */
    inline const Aws::String& GetObjectChecksum() const{ return m_objectChecksum; }

    /**
     * Object checksum
     */
    inline bool ObjectChecksumHasBeenSet() const { return m_objectChecksumHasBeenSet; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const Aws::String& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = value; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(Aws::String&& value) { m_objectChecksumHasBeenSet = true; m_objectChecksum = std::move(value); }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const char* value) { m_objectChecksumHasBeenSet = true; m_objectChecksum.assign(value); }

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteRequest& WithObjectChecksum(const Aws::String& value) { SetObjectChecksum(value); return *this;}

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteRequest& WithObjectChecksum(Aws::String&& value) { SetObjectChecksum(std::move(value)); return *this;}

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteRequest& WithObjectChecksum(const char* value) { SetObjectChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const SummaryChecksumAlgorithm& GetObjectChecksumAlgorithm() const{ return m_objectChecksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline bool ObjectChecksumAlgorithmHasBeenSet() const { return m_objectChecksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { m_objectChecksumAlgorithmHasBeenSet = true; m_objectChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline NotifyObjectCompleteRequest& WithObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { SetObjectChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline NotifyObjectCompleteRequest& WithObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { SetObjectChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline const Aws::String& GetMetadataString() const{ return m_metadataString; }

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline bool MetadataStringHasBeenSet() const { return m_metadataStringHasBeenSet; }

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline void SetMetadataString(const Aws::String& value) { m_metadataStringHasBeenSet = true; m_metadataString = value; }

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline void SetMetadataString(Aws::String&& value) { m_metadataStringHasBeenSet = true; m_metadataString = std::move(value); }

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline void SetMetadataString(const char* value) { m_metadataStringHasBeenSet = true; m_metadataString.assign(value); }

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline NotifyObjectCompleteRequest& WithMetadataString(const Aws::String& value) { SetMetadataString(value); return *this;}

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline NotifyObjectCompleteRequest& WithMetadataString(Aws::String&& value) { SetMetadataString(std::move(value)); return *this;}

    /**
     * Optional metadata associated with an Object. Maximum string length is 256 bytes.
     */
    inline NotifyObjectCompleteRequest& WithMetadataString(const char* value) { SetMetadataString(value); return *this;}


    /**
     * The size of MetadataBlob.
     */
    inline long long GetMetadataBlobLength() const{ return m_metadataBlobLength; }

    /**
     * The size of MetadataBlob.
     */
    inline bool MetadataBlobLengthHasBeenSet() const { return m_metadataBlobLengthHasBeenSet; }

    /**
     * The size of MetadataBlob.
     */
    inline void SetMetadataBlobLength(long long value) { m_metadataBlobLengthHasBeenSet = true; m_metadataBlobLength = value; }

    /**
     * The size of MetadataBlob.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobLength(long long value) { SetMetadataBlobLength(value); return *this;}


    /**
     * Checksum of MetadataBlob.
     */
    inline const Aws::String& GetMetadataBlobChecksum() const{ return m_metadataBlobChecksum; }

    /**
     * Checksum of MetadataBlob.
     */
    inline bool MetadataBlobChecksumHasBeenSet() const { return m_metadataBlobChecksumHasBeenSet; }

    /**
     * Checksum of MetadataBlob.
     */
    inline void SetMetadataBlobChecksum(const Aws::String& value) { m_metadataBlobChecksumHasBeenSet = true; m_metadataBlobChecksum = value; }

    /**
     * Checksum of MetadataBlob.
     */
    inline void SetMetadataBlobChecksum(Aws::String&& value) { m_metadataBlobChecksumHasBeenSet = true; m_metadataBlobChecksum = std::move(value); }

    /**
     * Checksum of MetadataBlob.
     */
    inline void SetMetadataBlobChecksum(const char* value) { m_metadataBlobChecksumHasBeenSet = true; m_metadataBlobChecksum.assign(value); }

    /**
     * Checksum of MetadataBlob.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobChecksum(const Aws::String& value) { SetMetadataBlobChecksum(value); return *this;}

    /**
     * Checksum of MetadataBlob.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobChecksum(Aws::String&& value) { SetMetadataBlobChecksum(std::move(value)); return *this;}

    /**
     * Checksum of MetadataBlob.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobChecksum(const char* value) { SetMetadataBlobChecksum(value); return *this;}


    /**
     * Checksum algorithm.
     */
    inline const DataChecksumAlgorithm& GetMetadataBlobChecksumAlgorithm() const{ return m_metadataBlobChecksumAlgorithm; }

    /**
     * Checksum algorithm.
     */
    inline bool MetadataBlobChecksumAlgorithmHasBeenSet() const { return m_metadataBlobChecksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm.
     */
    inline void SetMetadataBlobChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_metadataBlobChecksumAlgorithmHasBeenSet = true; m_metadataBlobChecksumAlgorithm = value; }

    /**
     * Checksum algorithm.
     */
    inline void SetMetadataBlobChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_metadataBlobChecksumAlgorithmHasBeenSet = true; m_metadataBlobChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetMetadataBlobChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm.
     */
    inline NotifyObjectCompleteRequest& WithMetadataBlobChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetMetadataBlobChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    Aws::String m_objectChecksum;
    bool m_objectChecksumHasBeenSet = false;

    SummaryChecksumAlgorithm m_objectChecksumAlgorithm;
    bool m_objectChecksumAlgorithmHasBeenSet = false;

    Aws::String m_metadataString;
    bool m_metadataStringHasBeenSet = false;


    long long m_metadataBlobLength;
    bool m_metadataBlobLengthHasBeenSet = false;

    Aws::String m_metadataBlobChecksum;
    bool m_metadataBlobChecksumHasBeenSet = false;

    DataChecksumAlgorithm m_metadataBlobChecksumAlgorithm;
    bool m_metadataBlobChecksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
