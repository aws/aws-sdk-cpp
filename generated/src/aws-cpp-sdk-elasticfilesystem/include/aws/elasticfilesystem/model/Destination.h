/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ReplicationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the destination file system in the replication
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_EFS_API Destination();
    AWS_EFS_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EFS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline const ReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline void SetStatus(const ReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline void SetStatus(ReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline Destination& WithStatus(const ReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the status of the destination Amazon EFS file system. If the status
     * is <code>ERROR</code>, the destination file system in the replication
     * configuration is in a failed state and is unrecoverable. To access the file
     * system data, restore a backup of the failed file system to a new file
     * system.</p>
     */
    inline Destination& WithStatus(ReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline Destination& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline Destination& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline Destination& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline Destination& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline Destination& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline Destination& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReplicatedTimestamp() const{ return m_lastReplicatedTimestamp; }

    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline bool LastReplicatedTimestampHasBeenSet() const { return m_lastReplicatedTimestampHasBeenSet; }

    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline void SetLastReplicatedTimestamp(const Aws::Utils::DateTime& value) { m_lastReplicatedTimestampHasBeenSet = true; m_lastReplicatedTimestamp = value; }

    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline void SetLastReplicatedTimestamp(Aws::Utils::DateTime&& value) { m_lastReplicatedTimestampHasBeenSet = true; m_lastReplicatedTimestamp = std::move(value); }

    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline Destination& WithLastReplicatedTimestamp(const Aws::Utils::DateTime& value) { SetLastReplicatedTimestamp(value); return *this;}

    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline Destination& WithLastReplicatedTimestamp(Aws::Utils::DateTime&& value) { SetLastReplicatedTimestamp(std::move(value)); return *this;}

  private:

    ReplicationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Utils::DateTime m_lastReplicatedTimestamp;
    bool m_lastReplicatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
