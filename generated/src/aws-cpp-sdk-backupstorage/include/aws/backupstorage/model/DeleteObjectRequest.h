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
  class DeleteObjectRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API DeleteObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteObject"; }

    AWS_BACKUPSTORAGE_API Aws::String SerializePayload() const override;


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
    inline DeleteObjectRequest& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline DeleteObjectRequest& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * Backup job Id for the in-progress backup.
     */
    inline DeleteObjectRequest& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * The name of the Object.
     */
    inline const Aws::String& GetObjectName() const{ return m_objectName; }

    /**
     * The name of the Object.
     */
    inline bool ObjectNameHasBeenSet() const { return m_objectNameHasBeenSet; }

    /**
     * The name of the Object.
     */
    inline void SetObjectName(const Aws::String& value) { m_objectNameHasBeenSet = true; m_objectName = value; }

    /**
     * The name of the Object.
     */
    inline void SetObjectName(Aws::String&& value) { m_objectNameHasBeenSet = true; m_objectName = std::move(value); }

    /**
     * The name of the Object.
     */
    inline void SetObjectName(const char* value) { m_objectNameHasBeenSet = true; m_objectName.assign(value); }

    /**
     * The name of the Object.
     */
    inline DeleteObjectRequest& WithObjectName(const Aws::String& value) { SetObjectName(value); return *this;}

    /**
     * The name of the Object.
     */
    inline DeleteObjectRequest& WithObjectName(Aws::String&& value) { SetObjectName(std::move(value)); return *this;}

    /**
     * The name of the Object.
     */
    inline DeleteObjectRequest& WithObjectName(const char* value) { SetObjectName(value); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_objectName;
    bool m_objectNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
