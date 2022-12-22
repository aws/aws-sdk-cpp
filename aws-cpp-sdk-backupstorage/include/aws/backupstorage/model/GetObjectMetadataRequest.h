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
  class GetObjectMetadataRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API GetObjectMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetObjectMetadata"; }

    AWS_BACKUPSTORAGE_API Aws::String SerializePayload() const override;


    /**
     * Backup job id for the in-progress backup.
     */
    inline const Aws::String& GetStorageJobId() const{ return m_storageJobId; }

    /**
     * Backup job id for the in-progress backup.
     */
    inline bool StorageJobIdHasBeenSet() const { return m_storageJobIdHasBeenSet; }

    /**
     * Backup job id for the in-progress backup.
     */
    inline void SetStorageJobId(const Aws::String& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = value; }

    /**
     * Backup job id for the in-progress backup.
     */
    inline void SetStorageJobId(Aws::String&& value) { m_storageJobIdHasBeenSet = true; m_storageJobId = std::move(value); }

    /**
     * Backup job id for the in-progress backup.
     */
    inline void SetStorageJobId(const char* value) { m_storageJobIdHasBeenSet = true; m_storageJobId.assign(value); }

    /**
     * Backup job id for the in-progress backup.
     */
    inline GetObjectMetadataRequest& WithStorageJobId(const Aws::String& value) { SetStorageJobId(value); return *this;}

    /**
     * Backup job id for the in-progress backup.
     */
    inline GetObjectMetadataRequest& WithStorageJobId(Aws::String&& value) { SetStorageJobId(std::move(value)); return *this;}

    /**
     * Backup job id for the in-progress backup.
     */
    inline GetObjectMetadataRequest& WithStorageJobId(const char* value) { SetStorageJobId(value); return *this;}


    /**
     * Object token.
     */
    inline const Aws::String& GetObjectToken() const{ return m_objectToken; }

    /**
     * Object token.
     */
    inline bool ObjectTokenHasBeenSet() const { return m_objectTokenHasBeenSet; }

    /**
     * Object token.
     */
    inline void SetObjectToken(const Aws::String& value) { m_objectTokenHasBeenSet = true; m_objectToken = value; }

    /**
     * Object token.
     */
    inline void SetObjectToken(Aws::String&& value) { m_objectTokenHasBeenSet = true; m_objectToken = std::move(value); }

    /**
     * Object token.
     */
    inline void SetObjectToken(const char* value) { m_objectTokenHasBeenSet = true; m_objectToken.assign(value); }

    /**
     * Object token.
     */
    inline GetObjectMetadataRequest& WithObjectToken(const Aws::String& value) { SetObjectToken(value); return *this;}

    /**
     * Object token.
     */
    inline GetObjectMetadataRequest& WithObjectToken(Aws::String&& value) { SetObjectToken(std::move(value)); return *this;}

    /**
     * Object token.
     */
    inline GetObjectMetadataRequest& WithObjectToken(const char* value) { SetObjectToken(value); return *this;}

  private:

    Aws::String m_storageJobId;
    bool m_storageJobIdHasBeenSet = false;

    Aws::String m_objectToken;
    bool m_objectTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
