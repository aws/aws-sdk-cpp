/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/ReplicationTaskStats.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask
  {
  public:
    ReplicationTask();
    ReplicationTask(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicationTask& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The replication task identifier.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The type of migration.</p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }

    /**
     * <p>The type of migration.</p>
     */
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p>The type of migration.</p>
     */
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p>The type of migration.</p>
     */
    inline ReplicationTask& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}

    /**
     * <p>The type of migration.</p>
     */
    inline ReplicationTask& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(value); return *this;}

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline ReplicationTask& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline ReplicationTask& WithTableMappings(Aws::String&& value) { SetTableMappings(value); return *this;}

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline ReplicationTask& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}

    /**
     * <p>The settings for the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p>The settings for the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p>The settings for the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p>The status of the replication task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the replication task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the replication task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the replication task.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the replication task.</p>
     */
    inline ReplicationTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the replication task.</p>
     */
    inline ReplicationTask& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the replication task.</p>
     */
    inline ReplicationTask& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The last error (failure) message generated for the replication instance.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The date the replication task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskCreationDate() const{ return m_replicationTaskCreationDate; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline void SetReplicationTaskCreationDate(const Aws::Utils::DateTime& value) { m_replicationTaskCreationDateHasBeenSet = true; m_replicationTaskCreationDate = value; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline void SetReplicationTaskCreationDate(Aws::Utils::DateTime&& value) { m_replicationTaskCreationDateHasBeenSet = true; m_replicationTaskCreationDate = value; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline ReplicationTask& WithReplicationTaskCreationDate(const Aws::Utils::DateTime& value) { SetReplicationTaskCreationDate(value); return *this;}

    /**
     * <p>The date the replication task was created.</p>
     */
    inline ReplicationTask& WithReplicationTaskCreationDate(Aws::Utils::DateTime&& value) { SetReplicationTaskCreationDate(value); return *this;}

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskStartDate() const{ return m_replicationTaskStartDate; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline void SetReplicationTaskStartDate(const Aws::Utils::DateTime& value) { m_replicationTaskStartDateHasBeenSet = true; m_replicationTaskStartDate = value; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline void SetReplicationTaskStartDate(Aws::Utils::DateTime&& value) { m_replicationTaskStartDateHasBeenSet = true; m_replicationTaskStartDate = value; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline ReplicationTask& WithReplicationTaskStartDate(const Aws::Utils::DateTime& value) { SetReplicationTaskStartDate(value); return *this;}

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline ReplicationTask& WithReplicationTaskStartDate(Aws::Utils::DateTime&& value) { SetReplicationTaskStartDate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline const ReplicationTaskStats& GetReplicationTaskStats() const{ return m_replicationTaskStats; }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline void SetReplicationTaskStats(const ReplicationTaskStats& value) { m_replicationTaskStatsHasBeenSet = true; m_replicationTaskStats = value; }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline void SetReplicationTaskStats(ReplicationTaskStats&& value) { m_replicationTaskStatsHasBeenSet = true; m_replicationTaskStats = value; }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline ReplicationTask& WithReplicationTaskStats(const ReplicationTaskStats& value) { SetReplicationTaskStats(value); return *this;}

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline ReplicationTask& WithReplicationTaskStats(ReplicationTaskStats&& value) { SetReplicationTaskStats(value); return *this;}

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
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet;
    Aws::Utils::DateTime m_replicationTaskCreationDate;
    bool m_replicationTaskCreationDateHasBeenSet;
    Aws::Utils::DateTime m_replicationTaskStartDate;
    bool m_replicationTaskStartDateHasBeenSet;
    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet;
    ReplicationTaskStats m_replicationTaskStats;
    bool m_replicationTaskStatsHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
