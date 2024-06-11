﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class GetBackupPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API GetBackupPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackupPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }
    inline GetBackupPlanRequest& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}
    inline GetBackupPlanRequest& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}
    inline GetBackupPlanRequest& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline GetBackupPlanRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline GetBackupPlanRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline GetBackupPlanRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
