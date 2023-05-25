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
  class StartObjectRequest : public BackupStorageRequest
  {
  public:
    AWS_BACKUPSTORAGE_API StartObjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartObject"; }

    AWS_BACKUPSTORAGE_API Aws::String SerializePayload() const override;


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
    inline StartObjectRequest& WithBackupJobId(const Aws::String& value) { SetBackupJobId(value); return *this;}

    /**
     * Backup job Id for the in-progress backup
     */
    inline StartObjectRequest& WithBackupJobId(Aws::String&& value) { SetBackupJobId(std::move(value)); return *this;}

    /**
     * Backup job Id for the in-progress backup
     */
    inline StartObjectRequest& WithBackupJobId(const char* value) { SetBackupJobId(value); return *this;}


    /**
     * Name for the object.
     */
    inline const Aws::String& GetObjectName() const{ return m_objectName; }

    /**
     * Name for the object.
     */
    inline bool ObjectNameHasBeenSet() const { return m_objectNameHasBeenSet; }

    /**
     * Name for the object.
     */
    inline void SetObjectName(const Aws::String& value) { m_objectNameHasBeenSet = true; m_objectName = value; }

    /**
     * Name for the object.
     */
    inline void SetObjectName(Aws::String&& value) { m_objectNameHasBeenSet = true; m_objectName = std::move(value); }

    /**
     * Name for the object.
     */
    inline void SetObjectName(const char* value) { m_objectNameHasBeenSet = true; m_objectName.assign(value); }

    /**
     * Name for the object.
     */
    inline StartObjectRequest& WithObjectName(const Aws::String& value) { SetObjectName(value); return *this;}

    /**
     * Name for the object.
     */
    inline StartObjectRequest& WithObjectName(Aws::String&& value) { SetObjectName(std::move(value)); return *this;}

    /**
     * Name for the object.
     */
    inline StartObjectRequest& WithObjectName(const char* value) { SetObjectName(value); return *this;}


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
    inline StartObjectRequest& WithThrowOnDuplicate(bool value) { SetThrowOnDuplicate(value); return *this;}

  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;

    Aws::String m_objectName;
    bool m_objectNameHasBeenSet = false;

    bool m_throwOnDuplicate;
    bool m_throwOnDuplicateHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
