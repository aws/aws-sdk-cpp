/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * objects contain the BackupId, BackupState, ClusterId, and CreateTimestamp
   * parameters. Backups that were copied into a destination region additionally
   * contain the CopyTimestamp, SourceBackup, SourceCluster, and SourceRegion
   * paramters. A backup that is pending deletion will include the DeleteTimestamp
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Backup">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSMV2_API Backup
  {
  public:
    Backup();
    Backup(Aws::Utils::Json::JsonView jsonValue);
    Backup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline Backup& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
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
     * the new backup was copied. .</p>
     */
    inline const Aws::String& GetSourceCluster() const{ return m_sourceCluster; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline void SetSourceCluster(const Aws::String& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = value; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline void SetSourceCluster(Aws::String&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline void SetSourceCluster(const char* value) { m_sourceClusterHasBeenSet = true; m_sourceCluster.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline Backup& WithSourceCluster(const Aws::String& value) { SetSourceCluster(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
     */
    inline Backup& WithSourceCluster(Aws::String&& value) { SetSourceCluster(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied. .</p>
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


    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    
    inline Backup& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    
    inline Backup& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    
    inline Backup& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    
    inline Backup& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    BackupState m_backupState;
    bool m_backupStateHasBeenSet;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;

    Aws::Utils::DateTime m_copyTimestamp;
    bool m_copyTimestampHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::String m_sourceBackup;
    bool m_sourceBackupHasBeenSet;

    Aws::String m_sourceCluster;
    bool m_sourceClusterHasBeenSet;

    Aws::Utils::DateTime m_deleteTimestamp;
    bool m_deleteTimestampHasBeenSet;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
