/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/BackupState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/Tag.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains information about a backup of an AWS CloudHSM cluster. All backup
   * objects contain the <code>BackupId</code>, <code>BackupState</code>,
   * <code>ClusterId</code>, and <code>CreateTimestamp</code> parameters. Backups
   * that were copied into a destination region additionally contain the
   * <code>CopyTimestamp</code>, <code>SourceBackup</code>,
   * <code>SourceCluster</code>, and <code>SourceRegion</code> parameters. A backup
   * that is pending deletion will include the <code>DeleteTimestamp</code>
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Backup">AWS
   * API Reference</a></p>
   */
  class Backup
  {
  public:
    AWS_CLOUDHSMV2_API Backup();
    AWS_CLOUDHSMV2_API Backup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>The state of the backup.</p>
     */
    inline const BackupState& GetBackupState() const{ return m_backupState; }

    /**
     * <p>The state of the backup.</p>
     */
    inline bool BackupStateHasBeenSet() const { return m_backupStateHasBeenSet; }

    /**
     * <p>The state of the backup.</p>
     */
    inline void SetBackupState(const BackupState& value) { m_backupStateHasBeenSet = true; m_backupState = value; }

    /**
     * <p>The state of the backup.</p>
     */
    inline void SetBackupState(BackupState&& value) { m_backupStateHasBeenSet = true; m_backupState = std::move(value); }

    /**
     * <p>The state of the backup.</p>
     */
    inline Backup& WithBackupState(const BackupState& value) { SetBackupState(value); return *this;}

    /**
     * <p>The state of the backup.</p>
     */
    inline Backup& WithBackupState(BackupState&& value) { SetBackupState(std::move(value)); return *this;}


    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline Backup& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline Backup& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline const Aws::Utils::DateTime& GetCopyTimestamp() const{ return m_copyTimestamp; }

    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline bool CopyTimestampHasBeenSet() const { return m_copyTimestampHasBeenSet; }

    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline void SetCopyTimestamp(const Aws::Utils::DateTime& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = value; }

    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline void SetCopyTimestamp(Aws::Utils::DateTime&& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = std::move(value); }

    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline Backup& WithCopyTimestamp(const Aws::Utils::DateTime& value) { SetCopyTimestamp(value); return *this;}

    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline Backup& WithCopyTimestamp(Aws::Utils::DateTime&& value) { SetCopyTimestamp(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline bool GetNeverExpires() const{ return m_neverExpires; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline bool NeverExpiresHasBeenSet() const { return m_neverExpiresHasBeenSet; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline void SetNeverExpires(bool value) { m_neverExpiresHasBeenSet = true; m_neverExpires = value; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline Backup& WithNeverExpires(bool value) { SetNeverExpires(value); return *this;}


    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceBackup() const{ return m_sourceBackup; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline bool SourceBackupHasBeenSet() const { return m_sourceBackupHasBeenSet; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(const Aws::String& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = value; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(Aws::String&& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = std::move(value); }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(const char* value) { m_sourceBackupHasBeenSet = true; m_sourceBackup.assign(value); }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceBackup(const Aws::String& value) { SetSourceBackup(value); return *this;}

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceBackup(Aws::String&& value) { SetSourceBackup(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceBackup(const char* value) { SetSourceBackup(value); return *this;}


    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline const Aws::String& GetSourceCluster() const{ return m_sourceCluster; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(const Aws::String& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = value; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(Aws::String&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(const char* value) { m_sourceClusterHasBeenSet = true; m_sourceCluster.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline Backup& WithSourceCluster(const Aws::String& value) { SetSourceCluster(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline Backup& WithSourceCluster(Aws::String&& value) { SetSourceCluster(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline Backup& WithSourceCluster(const char* value) { SetSourceCluster(value); return *this;}


    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTimestamp() const{ return m_deleteTimestamp; }

    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline bool DeleteTimestampHasBeenSet() const { return m_deleteTimestampHasBeenSet; }

    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline void SetDeleteTimestamp(const Aws::Utils::DateTime& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = value; }

    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline void SetDeleteTimestamp(Aws::Utils::DateTime&& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = std::move(value); }

    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline Backup& WithDeleteTimestamp(const Aws::Utils::DateTime& value) { SetDeleteTimestamp(value); return *this;}

    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline Backup& WithDeleteTimestamp(Aws::Utils::DateTime&& value) { SetDeleteTimestamp(std::move(value)); return *this;}


    /**
     * <p>The list of tags for the backup.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline Backup& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline Backup& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline Backup& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>The list of tags for the backup.</p>
     */
    inline Backup& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    BackupState m_backupState;
    bool m_backupStateHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_copyTimestamp;
    bool m_copyTimestampHasBeenSet = false;

    bool m_neverExpires;
    bool m_neverExpiresHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceBackup;
    bool m_sourceBackupHasBeenSet = false;

    Aws::String m_sourceCluster;
    bool m_sourceClusterHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTimestamp;
    bool m_deleteTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
