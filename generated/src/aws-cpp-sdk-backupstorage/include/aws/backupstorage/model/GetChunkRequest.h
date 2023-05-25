/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/backupstorage/BackupStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupStorage
{
namespace Model
{

  /**
   */
  class GetChunkRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API GetChunkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChunk"; }

    AWS_BACKUPSTORAGE_API Aws::String SerializePayload() const override;


    /**
     * Storage job id
     */
    inline const Aws::String& GetStorageJobId() const{ return m_storageJobId; }

    /**
     * Storage job id
     */
    inline bool StorageJobIdHasBeenSet() const { return m_storageJobIdHasBeenSet; }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(const Aws::String& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = value; }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(Aws::String&& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = std::move(value); }

    /**
     * Storage job id
     */
    inline void SetStorageJobId(const char* value) { m_storageJobIdHasBeenSet = true; m_storageJobId.assign(value); }

    /**
     * Storage job id
     */
    inline GetChunkRequest& WithStorageJobId(const Aws::String& value) { SetStorageJobId(value); return *this;}

    /**
     * Storage job id
     */
    inline GetChunkRequest& WithStorageJobId(Aws::String&& value) { SetStorageJobId(std::move(value)); return *this;}

    /**
     * Storage job id
     */
    inline GetChunkRequest& WithStorageJobId(const char* value) { SetStorageJobId(value); return *this;}


    /**
     * Chunk token
     */
    inline const Aws::String& GetChunkToken() const{ return m_chunkToken; }

    /**
     * Chunk token
     */
    inline bool ChunkTokenHasBeenSet() const { return m_chunkTokenHasBeenSet; }

    /**
     * Chunk token
     */
    inline void SetChunkToken(const Aws::String& value) { m_chunkTokenHasBeenSet = true; m_chunkToken = value; }

    /**
     * Chunk token
     */
    inline void SetChunkToken(Aws::String&& value) { m_chunkTokenHasBeenSet = true; m_chunkToken = std::move(value); }

    /**
     * Chunk token
     */
    inline void SetChunkToken(const char* value) { m_chunkTokenHasBeenSet = true; m_chunkToken.assign(value); }

    /**
     * Chunk token
     */
    inline GetChunkRequest& WithChunkToken(const Aws::String& value) { SetChunkToken(value); return *this;}

    /**
     * Chunk token
     */
    inline GetChunkRequest& WithChunkToken(Aws::String&& value) { SetChunkToken(std::move(value)); return *this;}

    /**
     * Chunk token
     */
    inline GetChunkRequest& WithChunkToken(const char* value) { SetChunkToken(value); return *this;}

  private:

    Aws::String m_storageJobId;
    bool m_storageJobIdHasBeenSet = false;

    Aws::String m_chunkToken;
    bool m_chunkTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
