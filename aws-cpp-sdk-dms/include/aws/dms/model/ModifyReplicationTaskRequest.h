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
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationTaskMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationTaskRequest : public DatabaseMigrationServiceRequest
  {
  public:
    ModifyReplicationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationTask"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


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
    inline ModifyReplicationTaskRequest& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}


    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }

    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }

    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }

    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline ModifyReplicationTaskRequest& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}

    /**
     * <p>The migration type.</p> <p>Valid values: full-load | cdc |
     * full-load-and-cdc</p>
     */
    inline ModifyReplicationTaskRequest& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(std::move(value)); return *this;}


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
    inline ModifyReplicationTaskRequest& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline ModifyReplicationTaskRequest& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}

    /**
     * <p>When using the AWS CLI or boto3, provide the path of the JSON file that
     * contains the table mappings. Precede the path with "file://". When working with
     * the DMS API, provide the JSON as the parameter value.</p> <p>For example,
     * --table-mappings file://mappingfile.json</p>
     */
    inline ModifyReplicationTaskRequest& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}


    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}

    /**
     * <p>JSON file that contains settings for the task, such as target metadata
     * settings.</p>
     */
    inline ModifyReplicationTaskRequest& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}


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
    inline ModifyReplicationTaskRequest& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either CdcStartTime or CdcStartPosition to specify when you want a CDC operation
     * to start. Specifying both values results in an error.</p> <p>Timestamp Example:
     * --cdc-start-time “2018-03-08T12:12:12”</p>
     */
    inline ModifyReplicationTaskRequest& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}


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
    inline ModifyReplicationTaskRequest& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

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
    inline ModifyReplicationTaskRequest& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

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
    inline ModifyReplicationTaskRequest& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


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
    inline ModifyReplicationTaskRequest& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline ModifyReplicationTaskRequest& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:3018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 3018-02-09T12:12:12 “</p>
     */
    inline ModifyReplicationTaskRequest& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}

  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet;

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet;

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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
