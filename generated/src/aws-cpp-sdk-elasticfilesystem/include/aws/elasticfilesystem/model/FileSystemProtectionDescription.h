/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ReplicationOverwriteProtection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{

  /**
   * <p>Describes the protection on a file system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/FileSystemProtectionDescription">AWS
   * API Reference</a></p>
   */
  class FileSystemProtectionDescription
  {
  public:
    AWS_EFS_API FileSystemProtectionDescription();
    AWS_EFS_API FileSystemProtectionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API FileSystemProtectionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline FileSystemProtectionDescription& WithReplicationOverwriteProtection(const ReplicationOverwriteProtection& value) { SetReplicationOverwriteProtection(value); return *this;}

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
    inline FileSystemProtectionDescription& WithReplicationOverwriteProtection(ReplicationOverwriteProtection&& value) { SetReplicationOverwriteProtection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline FileSystemProtectionDescription& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline FileSystemProtectionDescription& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline FileSystemProtectionDescription& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationOverwriteProtection m_replicationOverwriteProtection;
    bool m_replicationOverwriteProtectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
