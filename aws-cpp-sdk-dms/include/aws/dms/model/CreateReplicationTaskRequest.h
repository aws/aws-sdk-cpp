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
  class AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    CreateReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline CreateReplicationTaskRequest& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>The migration type.</p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }

    /**
     * <p>The migration type.</p>
     */
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }

    /**
     * <p>The migration type.</p>
     */
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p>The migration type.</p>
     */
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }

    /**
     * <p>The migration type.</p>
     */
    inline CreateReplicationTaskRequest& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}

    /**
     * <p>The migration type.</p>
     */
    inline CreateReplicationTaskRequest& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(std::move(value)); return *this;}


    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline CreateReplicationTaskRequest& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline CreateReplicationTaskRequest& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline CreateReplicationTaskRequest& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}


    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}

    /**
     * <p>Settings for the task, such as target metadata settings. For a complete list
     * of task settings, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.html">Task
     * Settings for AWS Database Migration Service Tasks</a> in the <i>AWS Database
     * Migration User Guide.</i> </p>
     */
    inline CreateReplicationTaskRequest& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}


    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either CdcStartPosition or CdcStartTime to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p> The value can be
     * in date, checkpoint, or LSN/SCN format.</p> <p>Date Example:
     * --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint Example:
     * --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline CreateReplicationTaskRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}


    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be added to the replication instance.</p>
     */
    inline CreateReplicationTaskRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet;

    MigrationTypeValue m_migrationType;
    bool m_migrationTypeHasBeenSet;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet;

    Aws::String m_replicationTaskSettings;
    bool m_replicationTaskSettingsHasBeenSet;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
