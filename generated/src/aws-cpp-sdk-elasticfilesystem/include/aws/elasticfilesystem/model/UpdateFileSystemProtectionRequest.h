/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticfilesystem/model/ReplicationOverwriteProtection.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class UpdateFileSystemProtectionRequest : public EFSRequest
  {
  public:
    AWS_EFS_API UpdateFileSystemProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystemProtection"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the file system to update. </p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline UpdateFileSystemProtectionRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline UpdateFileSystemProtectionRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the file system to update. </p>
     */
    inline UpdateFileSystemProtectionRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline const ReplicationOverwriteProtection& GetReplicationOverwriteProtection() const{ return m_replicationOverwriteProtection; }

    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline bool ReplicationOverwriteProtectionHasBeenSet() const { return m_replicationOverwriteProtectionHasBeenSet; }

    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline void SetReplicationOverwriteProtection(const ReplicationOverwriteProtection& value) { m_replicationOverwriteProtectionHasBeenSet = true; m_replicationOverwriteProtection = value; }

    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline void SetReplicationOverwriteProtection(ReplicationOverwriteProtection&& value) { m_replicationOverwriteProtectionHasBeenSet = true; m_replicationOverwriteProtection = std::move(value); }

    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline UpdateFileSystemProtectionRequest& WithReplicationOverwriteProtection(const ReplicationOverwriteProtection& value) { SetReplicationOverwriteProtection(value); return *this;}

    /**
     * <p>The status of the file system's replication overwrite protection.</p> <ul>
     * <li> <p> <code>ENABLED</code> – The file system cannot be used as the
     * destination file system in a replication configuration. The file system is
     * writeable. Replication overwrite protection is <code>ENABLED</code> by default.
     * </p> </li> <li> <p> <code>DISABLED</code> – The file system can be used as the
     * destination file system in a replication configuration. The file system is
     * read-only and can only be modified by EFS replication.</p> </li> <li> <p>
     * <code>REPLICATING</code> – The file system is being used as the destination file
     * system in a replication configuration. The file system is read-only and is only
     * modified only by EFS replication.</p> </li> </ul> <p>If the replication
     * configuration is deleted, the file system's replication overwrite protection is
     * re-enabled, the file system becomes writeable.</p>
     */
    inline UpdateFileSystemProtectionRequest& WithReplicationOverwriteProtection(ReplicationOverwriteProtection&& value) { SetReplicationOverwriteProtection(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    ReplicationOverwriteProtection m_replicationOverwriteProtection;
    bool m_replicationOverwriteProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
