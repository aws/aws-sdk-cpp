/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationTaskMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationTask"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An identifier for the replication task.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1-255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the source
     * endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies the target
     * endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The migration type. Valid values: <code>full-load</code> | <code>cdc</code> |
     * <code>full-load-and-cdc</code> </p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }
    inline CreateReplicationTaskRequest& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}
    inline CreateReplicationTaskRequest& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table mappings for the task, in JSON format. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TableMapping.html">Using
     * Table Mapping to Specify Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }
    inline CreateReplicationTaskRequest& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}
    inline CreateReplicationTaskRequest& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overall settings for the task, in JSON format. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Specifying
     * Task Settings for Database Migration Service Tasks</a> in the <i>Database
     * Migration Service User Guide.</i> </p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }
    inline CreateReplicationTaskRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}
    inline CreateReplicationTaskRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p> 
     * <p>When you use this task setting with a source PostgreSQL database, a logical
     * replication slot should already be created and associated with the source
     * endpoint. You can verify this by setting the <code>slotName</code> extra
     * connection attribute to the name of this logical replication slot. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Source.PostgreSQL.html#CHAP_Source.PostgreSQL.ConnectionAttrib">Extra
     * Connection Attributes When Using PostgreSQL as a Source for DMS</a>.</p> 
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }
    inline CreateReplicationTaskRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}
    inline CreateReplicationTaskRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time:2018-02-09T12:12:12“</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }
    inline CreateReplicationTaskRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}
    inline CreateReplicationTaskRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the replication task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateReplicationTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateReplicationTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateReplicationTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline const Aws::String& GetTaskData() const{ return m_taskData; }
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }
    inline void SetTaskData(const Aws::String& value) { m_taskDataHasBeenSet = true; m_taskData = value; }
    inline void SetTaskData(Aws::String&& value) { m_taskDataHasBeenSet = true; m_taskData = std::move(value); }
    inline void SetTaskData(const char* value) { m_taskDataHasBeenSet = true; m_taskData.assign(value); }
    inline CreateReplicationTaskRequest& WithTaskData(const Aws::String& value) { SetTaskData(value); return *this;}
    inline CreateReplicationTaskRequest& WithTaskData(Aws::String&& value) { SetTaskData(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithTaskData(const char* value) { SetTaskData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline CreateReplicationTaskRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline CreateReplicationTaskRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline CreateReplicationTaskRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    MigrationTypeValue m_migrationType;
    bool m_migrationTypeHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::String m_replicationTaskSettings;
    bool m_replicationTaskSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_taskData;
    bool m_taskDataHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
