/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dms/model/ReplicationTaskStats.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes a replication task created by the
   * <code>CreateReplicationTask</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTask">AWS
   * API Reference</a></p>
   */
  class ReplicationTask
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>The user-assigned replication task identifier or name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1-255 alphanumeric characters or
     * hyphens.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     */
    inline ReplicationTask& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}


    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that uniquely identifies the endpoint.</p>
     */
    inline ReplicationTask& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}


    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline ReplicationTask& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>The type of migration.</p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }

    /**
     * <p>The type of migration.</p>
     */
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }

    /**
     * <p>The type of migration.</p>
     */
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p>The type of migration.</p>
     */
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }

    /**
     * <p>The type of migration.</p>
     */
    inline ReplicationTask& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}

    /**
     * <p>The type of migration.</p>
     */
    inline ReplicationTask& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(std::move(value)); return *this;}


    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p>Table mappings specified in the task.</p>
     */
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }

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
    inline ReplicationTask& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}

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
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p>The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }

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
    inline ReplicationTask& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}

    /**
     * <p>The settings for the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}


    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline ReplicationTask& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline ReplicationTask& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the replication task. This response parameter can return one of
     * the following values:</p> <ul> <li> <p> <code>"moving"</code> – The task is
     * being moved in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"creating"</code> – The task is being created in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_CreateReplicationTask.html">
     * <code>CreateReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"deleting"</code> – The task is being deleted in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed"</code> – The task failed to successfully complete the database
     * migration in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"failed-move"</code> – The task failed to move in response to running the
     * <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"modifying"</code> – The task definition is being modified in response to
     * running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_ModifyReplicationTask.html">
     * <code>ModifyReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"ready"</code> – The task is in a <code>ready</code> state where it can
     * respond to other task operations, such as <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> or <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_DeleteReplicationTask.html">
     * <code>DeleteReplicationTask</code> </a>. </p> </li> <li> <p>
     * <code>"running"</code> – The task is performing a database migration in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"starting"</code> – The task is preparing to perform a database migration
     * in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html">
     * <code>StartReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopped"</code> – The task has stopped in response to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"stopping"</code> – The task is preparing to stop in response to running
     * the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StopReplicationTask.html">
     * <code>StopReplicationTask</code> </a> operation.</p> </li> <li> <p>
     * <code>"testing"</code> – The database migration specified for this task is being
     * tested in response to running either the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> or the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation.</p>  <p> <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> is an improved premigration
     * task assessment operation. The <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessment.html">
     * <code>StartReplicationTaskAssessment</code> </a> operation assesses data type
     * compatibility only between the source and target database of a given migration
     * task. In contrast, <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTaskAssessmentRun.html">
     * <code>StartReplicationTaskAssessmentRun</code> </a> enables you to specify a
     * variety of premigration task assessments in addition to data type compatibility.
     * These assessments include ones for the validity of primary key definitions and
     * likely issues with database migration performance, among others.</p> 
     * </li> </ul>
     */
    inline ReplicationTask& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The last error (failure) message generated for the replication task.</p>
     */
    inline ReplicationTask& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}


    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStopReason() const{ return m_stopReason; }

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline bool StopReasonHasBeenSet() const { return m_stopReasonHasBeenSet; }

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline void SetStopReason(const Aws::String& value) { m_stopReasonHasBeenSet = true; m_stopReason = value; }

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline void SetStopReason(Aws::String&& value) { m_stopReasonHasBeenSet = true; m_stopReason = std::move(value); }

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline void SetStopReason(const char* value) { m_stopReasonHasBeenSet = true; m_stopReason.assign(value); }

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline ReplicationTask& WithStopReason(const Aws::String& value) { SetStopReason(value); return *this;}

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline ReplicationTask& WithStopReason(Aws::String&& value) { SetStopReason(std::move(value)); return *this;}

    /**
     * <p>The reason the replication task was stopped. This response parameter can
     * return one of the following values:</p> <ul> <li> <p> <code>"Stop Reason
     * NORMAL"</code> </p> </li> <li> <p> <code>"Stop Reason RECOVERABLE_ERROR"</code>
     * </p> </li> <li> <p> <code>"Stop Reason FATAL_ERROR"</code> </p> </li> <li> <p>
     * <code>"Stop Reason FULL_LOAD_ONLY_FINISHED"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AFTER_FULL_LOAD"</code> – Full load completed, with
     * cached changes not applied</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_CACHED_EVENTS"</code> – Full load completed, with cached changes
     * applied</p> </li> <li> <p> <code>"Stop Reason
     * EXPRESS_LICENSE_LIMITS_REACHED"</code> </p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AFTER_DDL_APPLY"</code> – User-defined stop task after DDL applied</p>
     * </li> <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_MEMORY"</code> </p> </li>
     * <li> <p> <code>"Stop Reason STOPPED_DUE_TO_LOW_DISK"</code> </p> </li> <li> <p>
     * <code>"Stop Reason STOPPED_AT_SERVER_TIME"</code> – User-defined server time for
     * stopping task</p> </li> <li> <p> <code>"Stop Reason
     * STOPPED_AT_COMMIT_TIME"</code> – User-defined commit time for stopping task</p>
     * </li> <li> <p> <code>"Stop Reason RECONFIGURATION_RESTART"</code> </p> </li>
     * <li> <p> <code>"Stop Reason RECYCLE_TASK"</code> </p> </li> </ul>
     */
    inline ReplicationTask& WithStopReason(const char* value) { SetStopReason(value); return *this;}


    /**
     * <p>The date the replication task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskCreationDate() const{ return m_replicationTaskCreationDate; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline bool ReplicationTaskCreationDateHasBeenSet() const { return m_replicationTaskCreationDateHasBeenSet; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline void SetReplicationTaskCreationDate(const Aws::Utils::DateTime& value) { m_replicationTaskCreationDateHasBeenSet = true; m_replicationTaskCreationDate = value; }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline void SetReplicationTaskCreationDate(Aws::Utils::DateTime&& value) { m_replicationTaskCreationDateHasBeenSet = true; m_replicationTaskCreationDate = std::move(value); }

    /**
     * <p>The date the replication task was created.</p>
     */
    inline ReplicationTask& WithReplicationTaskCreationDate(const Aws::Utils::DateTime& value) { SetReplicationTaskCreationDate(value); return *this;}

    /**
     * <p>The date the replication task was created.</p>
     */
    inline ReplicationTask& WithReplicationTaskCreationDate(Aws::Utils::DateTime&& value) { SetReplicationTaskCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskStartDate() const{ return m_replicationTaskStartDate; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline bool ReplicationTaskStartDateHasBeenSet() const { return m_replicationTaskStartDateHasBeenSet; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline void SetReplicationTaskStartDate(const Aws::Utils::DateTime& value) { m_replicationTaskStartDateHasBeenSet = true; m_replicationTaskStartDate = value; }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline void SetReplicationTaskStartDate(Aws::Utils::DateTime&& value) { m_replicationTaskStartDateHasBeenSet = true; m_replicationTaskStartDate = std::move(value); }

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline ReplicationTask& WithReplicationTaskStartDate(const Aws::Utils::DateTime& value) { SetReplicationTaskStartDate(value); return *this;}

    /**
     * <p>The date the replication task is scheduled to start.</p>
     */
    inline ReplicationTask& WithReplicationTaskStartDate(Aws::Utils::DateTime&& value) { SetReplicationTaskStartDate(std::move(value)); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline ReplicationTask& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline ReplicationTask& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to start. Use
     * either <code>CdcStartPosition</code> or <code>CdcStartTime</code> to specify
     * when you want the CDC operation to start. Specifying both values results in an
     * error.</p> <p>The value can be in date, checkpoint, or LSN/SCN format.</p>
     * <p>Date Example: --cdc-start-position “2018-03-08T12:12:12”</p> <p>Checkpoint
     * Example: --cdc-start-position
     * "checkpoint:V1#27#mysql-bin-changelog.157832:1975:-1:2002:677883278264080:mysql-bin-changelog.157832:1876#0#0#*#0#93"</p>
     * <p>LSN Example: --cdc-start-position “mysql-bin-changelog.000024:373”</p>
     */
    inline ReplicationTask& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline ReplicationTask& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline ReplicationTask& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p> <p>Server time example:
     * --cdc-stop-position “server_time:2018-02-09T12:12:12”</p> <p>Commit time
     * example: --cdc-stop-position “commit_time: 2018-02-09T12:12:12 “</p>
     */
    inline ReplicationTask& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}


    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline const Aws::String& GetRecoveryCheckpoint() const{ return m_recoveryCheckpoint; }

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline bool RecoveryCheckpointHasBeenSet() const { return m_recoveryCheckpointHasBeenSet; }

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline void SetRecoveryCheckpoint(const Aws::String& value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint = value; }

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline void SetRecoveryCheckpoint(Aws::String&& value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint = std::move(value); }

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline void SetRecoveryCheckpoint(const char* value) { m_recoveryCheckpointHasBeenSet = true; m_recoveryCheckpoint.assign(value); }

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline ReplicationTask& WithRecoveryCheckpoint(const Aws::String& value) { SetRecoveryCheckpoint(value); return *this;}

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline ReplicationTask& WithRecoveryCheckpoint(Aws::String&& value) { SetRecoveryCheckpoint(std::move(value)); return *this;}

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline ReplicationTask& WithRecoveryCheckpoint(const char* value) { SetRecoveryCheckpoint(value); return *this;}


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
    inline ReplicationTask& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task.</p>
     */
    inline ReplicationTask& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

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
    inline bool ReplicationTaskStatsHasBeenSet() const { return m_replicationTaskStatsHasBeenSet; }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline void SetReplicationTaskStats(const ReplicationTaskStats& value) { m_replicationTaskStatsHasBeenSet = true; m_replicationTaskStats = value; }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline void SetReplicationTaskStats(ReplicationTaskStats&& value) { m_replicationTaskStatsHasBeenSet = true; m_replicationTaskStats = std::move(value); }

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline ReplicationTask& WithReplicationTaskStats(const ReplicationTaskStats& value) { SetReplicationTaskStats(value); return *this;}

    /**
     * <p>The statistics for the task, including elapsed time, tables loaded, and table
     * errors.</p>
     */
    inline ReplicationTask& WithReplicationTaskStats(ReplicationTaskStats&& value) { SetReplicationTaskStats(std::move(value)); return *this;}


    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline const Aws::String& GetTaskData() const{ return m_taskData; }

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline void SetTaskData(const Aws::String& value) { m_taskDataHasBeenSet = true; m_taskData = value; }

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline void SetTaskData(Aws::String&& value) { m_taskDataHasBeenSet = true; m_taskData = std::move(value); }

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline void SetTaskData(const char* value) { m_taskDataHasBeenSet = true; m_taskData.assign(value); }

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline ReplicationTask& WithTaskData(const Aws::String& value) { SetTaskData(value); return *this;}

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline ReplicationTask& WithTaskData(Aws::String&& value) { SetTaskData(std::move(value)); return *this;}

    /**
     * <p>Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">Specifying
     * Supplemental Data for Task Settings</a> in the <i>Database Migration Service
     * User Guide.</i> </p>
     */
    inline ReplicationTask& WithTaskData(const char* value) { SetTaskData(value); return *this;}


    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline const Aws::String& GetTargetReplicationInstanceArn() const{ return m_targetReplicationInstanceArn; }

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline bool TargetReplicationInstanceArnHasBeenSet() const { return m_targetReplicationInstanceArnHasBeenSet; }

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline void SetTargetReplicationInstanceArn(const Aws::String& value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn = value; }

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline void SetTargetReplicationInstanceArn(Aws::String&& value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn = std::move(value); }

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline void SetTargetReplicationInstanceArn(const char* value) { m_targetReplicationInstanceArnHasBeenSet = true; m_targetReplicationInstanceArn.assign(value); }

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline ReplicationTask& WithTargetReplicationInstanceArn(const Aws::String& value) { SetTargetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline ReplicationTask& WithTargetReplicationInstanceArn(Aws::String&& value) { SetTargetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the replication instance to which this task is moved in response
     * to running the <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_MoveReplicationTask.html">
     * <code>MoveReplicationTask</code> </a> operation. Otherwise, this response
     * parameter isn't a member of the <code>ReplicationTask</code> object.</p>
     */
    inline ReplicationTask& WithTargetReplicationInstanceArn(const char* value) { SetTargetReplicationInstanceArn(value); return *this;}

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

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskCreationDate;
    bool m_replicationTaskCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskStartDate;
    bool m_replicationTaskStartDateHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_recoveryCheckpoint;
    bool m_recoveryCheckpointHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    ReplicationTaskStats m_replicationTaskStats;
    bool m_replicationTaskStatsHasBeenSet = false;

    Aws::String m_taskData;
    bool m_taskDataHasBeenSet = false;

    Aws::String m_targetReplicationInstanceArn;
    bool m_targetReplicationInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
