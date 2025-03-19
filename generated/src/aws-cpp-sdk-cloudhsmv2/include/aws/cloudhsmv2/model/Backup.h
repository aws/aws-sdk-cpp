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
#include <aws/cloudhsmv2/model/ClusterMode.h>
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
   * <p>Contains information about a backup of an CloudHSM cluster. All backup
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
    AWS_CLOUDHSMV2_API Backup() = default;
    AWS_CLOUDHSMV2_API Backup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const { return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    template<typename BackupIdT = Aws::String>
    void SetBackupId(BackupIdT&& value) { m_backupIdHasBeenSet = true; m_backupId = std::forward<BackupIdT>(value); }
    template<typename BackupIdT = Aws::String>
    Backup& WithBackupId(BackupIdT&& value) { SetBackupId(std::forward<BackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const { return m_backupArn; }
    inline bool BackupArnHasBeenSet() const { return m_backupArnHasBeenSet; }
    template<typename BackupArnT = Aws::String>
    void SetBackupArn(BackupArnT&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::forward<BackupArnT>(value); }
    template<typename BackupArnT = Aws::String>
    Backup& WithBackupArn(BackupArnT&& value) { SetBackupArn(std::forward<BackupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the backup.</p>
     */
    inline BackupState GetBackupState() const { return m_backupState; }
    inline bool BackupStateHasBeenSet() const { return m_backupStateHasBeenSet; }
    inline void SetBackupState(BackupState value) { m_backupStateHasBeenSet = true; m_backupState = value; }
    inline Backup& WithBackupState(BackupState value) { SetBackupState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    Backup& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    Backup& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the backup was copied from a source backup.</p>
     */
    inline const Aws::Utils::DateTime& GetCopyTimestamp() const { return m_copyTimestamp; }
    inline bool CopyTimestampHasBeenSet() const { return m_copyTimestampHasBeenSet; }
    template<typename CopyTimestampT = Aws::Utils::DateTime>
    void SetCopyTimestamp(CopyTimestampT&& value) { m_copyTimestampHasBeenSet = true; m_copyTimestamp = std::forward<CopyTimestampT>(value); }
    template<typename CopyTimestampT = Aws::Utils::DateTime>
    Backup& WithCopyTimestamp(CopyTimestampT&& value) { SetCopyTimestamp(std::forward<CopyTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline bool GetNeverExpires() const { return m_neverExpires; }
    inline bool NeverExpiresHasBeenSet() const { return m_neverExpiresHasBeenSet; }
    inline void SetNeverExpires(bool value) { m_neverExpiresHasBeenSet = true; m_neverExpires = value; }
    inline Backup& WithNeverExpires(bool value) { SetNeverExpires(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    Backup& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceBackup() const { return m_sourceBackup; }
    inline bool SourceBackupHasBeenSet() const { return m_sourceBackupHasBeenSet; }
    template<typename SourceBackupT = Aws::String>
    void SetSourceBackup(SourceBackupT&& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = std::forward<SourceBackupT>(value); }
    template<typename SourceBackupT = Aws::String>
    Backup& WithSourceBackup(SourceBackupT&& value) { SetSourceBackup(std::forward<SourceBackupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline const Aws::String& GetSourceCluster() const { return m_sourceCluster; }
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }
    template<typename SourceClusterT = Aws::String>
    void SetSourceCluster(SourceClusterT&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::forward<SourceClusterT>(value); }
    template<typename SourceClusterT = Aws::String>
    Backup& WithSourceCluster(SourceClusterT&& value) { SetSourceCluster(std::forward<SourceClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the backup will be permanently deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteTimestamp() const { return m_deleteTimestamp; }
    inline bool DeleteTimestampHasBeenSet() const { return m_deleteTimestampHasBeenSet; }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    void SetDeleteTimestamp(DeleteTimestampT&& value) { m_deleteTimestampHasBeenSet = true; m_deleteTimestamp = std::forward<DeleteTimestampT>(value); }
    template<typename DeleteTimestampT = Aws::Utils::DateTime>
    Backup& WithDeleteTimestamp(DeleteTimestampT&& value) { SetDeleteTimestamp(std::forward<DeleteTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the backup.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    Backup& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    Backup& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HSM type used to create the backup.</p>
     */
    inline const Aws::String& GetHsmType() const { return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    template<typename HsmTypeT = Aws::String>
    void SetHsmType(HsmTypeT&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::forward<HsmTypeT>(value); }
    template<typename HsmTypeT = Aws::String>
    Backup& WithHsmType(HsmTypeT&& value) { SetHsmType(std::forward<HsmTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the cluster that was backed up.</p>
     */
    inline ClusterMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline Backup& WithMode(ClusterMode value) { SetMode(value); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet = false;

    BackupState m_backupState{BackupState::NOT_SET};
    bool m_backupStateHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_copyTimestamp{};
    bool m_copyTimestampHasBeenSet = false;

    bool m_neverExpires{false};
    bool m_neverExpiresHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceBackup;
    bool m_sourceBackupHasBeenSet = false;

    Aws::String m_sourceCluster;
    bool m_sourceClusterHasBeenSet = false;

    Aws::Utils::DateTime m_deleteTimestamp{};
    bool m_deleteTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    ClusterMode m_mode{ClusterMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
