/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/BackupPolicy.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class PutBackupPolicyRequest : public EFSRequest
  {
  public:
    AWS_EFS_API PutBackupPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBackupPolicy"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies which EFS file system to update the backup policy for.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    PutBackupPolicyRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backup policy included in the <code>PutBackupPolicy</code> request.</p>
     */
    inline const BackupPolicy& GetBackupPolicy() const { return m_backupPolicy; }
    inline bool BackupPolicyHasBeenSet() const { return m_backupPolicyHasBeenSet; }
    template<typename BackupPolicyT = BackupPolicy>
    void SetBackupPolicy(BackupPolicyT&& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = std::forward<BackupPolicyT>(value); }
    template<typename BackupPolicyT = BackupPolicy>
    PutBackupPolicyRequest& WithBackupPolicy(BackupPolicyT&& value) { SetBackupPolicy(std::forward<BackupPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    BackupPolicy m_backupPolicy;
    bool m_backupPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
