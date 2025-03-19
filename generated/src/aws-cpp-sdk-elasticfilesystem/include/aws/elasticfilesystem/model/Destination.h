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
    AWS_EFS_API Destination() = default;
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
    inline ReplicationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Destination& WithStatus(ReplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    Destination& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the destination file system is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Destination& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the most recent sync was successfully completed on the
     * destination file system. Any changes to data on the source file system that
     * occurred before this time have been successfully replicated to the destination
     * file system. Any changes that occurred after this time might not be fully
     * replicated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastReplicatedTimestamp() const { return m_lastReplicatedTimestamp; }
    inline bool LastReplicatedTimestampHasBeenSet() const { return m_lastReplicatedTimestampHasBeenSet; }
    template<typename LastReplicatedTimestampT = Aws::Utils::DateTime>
    void SetLastReplicatedTimestamp(LastReplicatedTimestampT&& value) { m_lastReplicatedTimestampHasBeenSet = true; m_lastReplicatedTimestamp = std::forward<LastReplicatedTimestampT>(value); }
    template<typename LastReplicatedTimestampT = Aws::Utils::DateTime>
    Destination& WithLastReplicatedTimestamp(LastReplicatedTimestampT&& value) { SetLastReplicatedTimestamp(std::forward<LastReplicatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services account in which the destination file system
     * resides.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Destination& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message that provides details about the <code>PAUSED</code> or
     * <code>ERRROR</code> state of the replication destination configuration. For more
     * information about replication status messages, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#restoring-backup-efsmonitoring-replication-status.html">Viewing
     * replication details</a> in the <i>Amazon EFS User Guide</i>. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Destination& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the IAM role in the source account that allows
     * Amazon EFS to perform replication on its behalf. This is optional for
     * same-account replication and required for cross-account replication.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Destination& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    ReplicationStatus m_status{ReplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Utils::DateTime m_lastReplicatedTimestamp{};
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
