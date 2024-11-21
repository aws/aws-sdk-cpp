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


    ///@{
    /**
     * <p>Describes the status of the replication configuration. For more information
     * about replication status, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#restoring-backup-efsmonitoring-replication-status.html">Viewing
     * replication details</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline const ReplicationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Destination& WithStatus(const ReplicationStatus& value) { SetStatus(value); return *this;}
    inline Destination& WithStatus(ReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline Destination& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline Destination& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline Destination& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Destination& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Destination& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Destination& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReplicatedTimestamp() const{ return m_lastReplicatedTimestamp; }
    inline bool LastReplicatedTimestampHasBeenSet() const { return m_lastReplicatedTimestampHasBeenSet; }
    inline void SetLastReplicatedTimestamp(const Aws::Utils::DateTime& value) { m_lastReplicatedTimestampHasBeenSet = true; m_lastReplicatedTimestamp = value; }
    inline void SetLastReplicatedTimestamp(Aws::Utils::DateTime&& value) { m_lastReplicatedTimestampHasBeenSet = true; m_lastReplicatedTimestamp = std::move(value); }
    inline Destination& WithLastReplicatedTimestamp(const Aws::Utils::DateTime& value) { SetLastReplicatedTimestamp(value); return *this;}
    inline Destination& WithLastReplicatedTimestamp(Aws::Utils::DateTime&& value) { SetLastReplicatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account in which the destination file system
     * resides.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Destination& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Destination& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Destination& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message that provides details about the <code>PAUSED</code> or
     * <code>ERRROR</code> state of the replication destination configuration. For more
     * information about replication status messages, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#restoring-backup-efsmonitoring-replication-status.html">Viewing
     * replication details</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline Destination& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline Destination& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline Destination& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the IAM role in the source account that allows
     * Amazon EFS to perform replication on its behalf. This is optional for
     * same-account replication and required for cross-account replication.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Destination& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Destination& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Destination& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    ReplicationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Utils::DateTime m_lastReplicatedTimestamp;
    bool m_lastReplicatedTimestampHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
