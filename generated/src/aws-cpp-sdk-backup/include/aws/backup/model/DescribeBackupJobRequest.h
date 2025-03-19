/**
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
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeBackupJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeBackupJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackupJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies a request to Backup to back up a resource.</p>
     */
    inline const Aws::String& GetBackupJobId() const { return m_backupJobId; }
    inline bool BackupJobIdHasBeenSet() const { return m_backupJobIdHasBeenSet; }
    template<typename BackupJobIdT = Aws::String>
    void SetBackupJobId(BackupJobIdT&& value) { m_backupJobIdHasBeenSet = true; m_backupJobId = std::forward<BackupJobIdT>(value); }
    template<typename BackupJobIdT = Aws::String>
    DescribeBackupJobRequest& WithBackupJobId(BackupJobIdT&& value) { SetBackupJobId(std::forward<BackupJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupJobId;
    bool m_backupJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
