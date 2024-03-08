/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/dms/model/ProvisionData.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationStats.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes a serverless replication created by the
   * <code>CreateReplication</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Replication">AWS API
   * Reference</a></p>
   */
  class Replication
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Replication();
    AWS_DATABASEMIGRATIONSERVICE_API Replication(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Replication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigIdentifier() const{ return m_replicationConfigIdentifier; }

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline void SetReplicationConfigIdentifier(const Aws::String& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = value; }

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline void SetReplicationConfigIdentifier(Aws::String&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::move(value); }

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline void SetReplicationConfigIdentifier(const char* value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier.assign(value); }

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline Replication& WithReplicationConfigIdentifier(const Aws::String& value) { SetReplicationConfigIdentifier(value); return *this;}

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline Replication& WithReplicationConfigIdentifier(Aws::String&& value) { SetReplicationConfigIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline Replication& WithReplicationConfigIdentifier(const char* value) { SetReplicationConfigIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline Replication& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline Replication& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name for the <code>ReplicationConfig</code> associated
     * with the replication.</p>
     */
    inline Replication& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline Replication& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline Replication& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data source.</p>
     */
    inline Replication& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline Replication& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline Replication& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name for an existing <code>Endpoint</code> the serverless
     * replication uses for its data target.</p>
     */
    inline Replication& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}


    /**
     * <p>The type of the serverless replication.</p>
     */
    inline const MigrationTypeValue& GetReplicationType() const{ return m_replicationType; }

    /**
     * <p>The type of the serverless replication.</p>
     */
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }

    /**
     * <p>The type of the serverless replication.</p>
     */
    inline void SetReplicationType(const MigrationTypeValue& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }

    /**
     * <p>The type of the serverless replication.</p>
     */
    inline void SetReplicationType(MigrationTypeValue&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }

    /**
     * <p>The type of the serverless replication.</p>
     */
    inline Replication& WithReplicationType(const MigrationTypeValue& value) { SetReplicationType(value); return *this;}

    /**
     * <p>The type of the serverless replication.</p>
     */
    inline Replication& WithReplicationType(MigrationTypeValue&& value) { SetReplicationType(std::move(value)); return *this;}


    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline Replication& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline Replication& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the serverless replication.</p>
     */
    inline Replication& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline const ProvisionData& GetProvisionData() const{ return m_provisionData; }

    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline bool ProvisionDataHasBeenSet() const { return m_provisionDataHasBeenSet; }

    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline void SetProvisionData(const ProvisionData& value) { m_provisionDataHasBeenSet = true; m_provisionData = value; }

    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline void SetProvisionData(ProvisionData&& value) { m_provisionDataHasBeenSet = true; m_provisionData = std::move(value); }

    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline Replication& WithProvisionData(const ProvisionData& value) { SetProvisionData(value); return *this;}

    /**
     * <p>Information about provisioning resources for an DMS serverless
     * replication.</p>
     */
    inline Replication& WithProvisionData(ProvisionData&& value) { SetProvisionData(std::move(value)); return *this;}


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
    inline Replication& WithStopReason(const Aws::String& value) { SetStopReason(value); return *this;}

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
    inline Replication& WithStopReason(Aws::String&& value) { SetStopReason(std::move(value)); return *this;}

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
    inline Replication& WithStopReason(const char* value) { SetStopReason(value); return *this;}


    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureMessages() const{ return m_failureMessages; }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline bool FailureMessagesHasBeenSet() const { return m_failureMessagesHasBeenSet; }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline void SetFailureMessages(const Aws::Vector<Aws::String>& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = value; }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline void SetFailureMessages(Aws::Vector<Aws::String>&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages = std::move(value); }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline Replication& WithFailureMessages(const Aws::Vector<Aws::String>& value) { SetFailureMessages(value); return *this;}

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline Replication& WithFailureMessages(Aws::Vector<Aws::String>&& value) { SetFailureMessages(std::move(value)); return *this;}

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline Replication& AddFailureMessages(const Aws::String& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(value); return *this; }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline Replication& AddFailureMessages(Aws::String&& value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(std::move(value)); return *this; }

    /**
     * <p>Error and other information about why a serverless replication failed.</p>
     */
    inline Replication& AddFailureMessages(const char* value) { m_failureMessagesHasBeenSet = true; m_failureMessages.push_back(value); return *this; }


    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline const ReplicationStats& GetReplicationStats() const{ return m_replicationStats; }

    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline bool ReplicationStatsHasBeenSet() const { return m_replicationStatsHasBeenSet; }

    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline void SetReplicationStats(const ReplicationStats& value) { m_replicationStatsHasBeenSet = true; m_replicationStats = value; }

    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline void SetReplicationStats(ReplicationStats&& value) { m_replicationStatsHasBeenSet = true; m_replicationStats = std::move(value); }

    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline Replication& WithReplicationStats(const ReplicationStats& value) { SetReplicationStats(value); return *this;}

    /**
     * <p>This object provides a collection of statistics about a serverless
     * replication.</p>
     */
    inline Replication& WithReplicationStats(ReplicationStats&& value) { SetReplicationStats(std::move(value)); return *this;}


    /**
     * <p>The replication type.</p>
     */
    inline const Aws::String& GetStartReplicationType() const{ return m_startReplicationType; }

    /**
     * <p>The replication type.</p>
     */
    inline bool StartReplicationTypeHasBeenSet() const { return m_startReplicationTypeHasBeenSet; }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(const Aws::String& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = value; }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(Aws::String&& value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType = std::move(value); }

    /**
     * <p>The replication type.</p>
     */
    inline void SetStartReplicationType(const char* value) { m_startReplicationTypeHasBeenSet = true; m_startReplicationType.assign(value); }

    /**
     * <p>The replication type.</p>
     */
    inline Replication& WithStartReplicationType(const Aws::String& value) { SetStartReplicationType(value); return *this;}

    /**
     * <p>The replication type.</p>
     */
    inline Replication& WithStartReplicationType(Aws::String&& value) { SetStartReplicationType(std::move(value)); return *this;}

    /**
     * <p>The replication type.</p>
     */
    inline Replication& WithStartReplicationType(const char* value) { SetStartReplicationType(value); return *this;}


    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::Utils::DateTime& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartTime(const Aws::Utils::DateTime& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartTime(Aws::Utils::DateTime&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline Replication& WithCdcStartTime(const Aws::Utils::DateTime& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline Replication& WithCdcStartTime(Aws::Utils::DateTime&& value) { SetCdcStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline Replication& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline Replication& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates the start time for a change data capture (CDC) operation. Use
     * either <code>CdcStartTime</code> or <code>CdcStartPosition</code> to specify
     * when you want a CDC operation to start. Specifying both values results in an
     * error.</p>
     */
    inline Replication& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline Replication& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline Replication& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p>Indicates when you want a change data capture (CDC) operation to stop. The
     * value can be either server time or commit time.</p>
     */
    inline Replication& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}


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
    inline Replication& WithRecoveryCheckpoint(const Aws::String& value) { SetRecoveryCheckpoint(value); return *this;}

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline Replication& WithRecoveryCheckpoint(Aws::String&& value) { SetRecoveryCheckpoint(std::move(value)); return *this;}

    /**
     * <p>Indicates the last checkpoint that occurred during a change data capture
     * (CDC) operation. You can provide this value to the <code>CdcStartPosition</code>
     * parameter to start a CDC operation that begins at that checkpoint.</p>
     */
    inline Replication& WithRecoveryCheckpoint(const char* value) { SetRecoveryCheckpoint(value); return *this;}


    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationCreateTime() const{ return m_replicationCreateTime; }

    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline bool ReplicationCreateTimeHasBeenSet() const { return m_replicationCreateTimeHasBeenSet; }

    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline void SetReplicationCreateTime(const Aws::Utils::DateTime& value) { m_replicationCreateTimeHasBeenSet = true; m_replicationCreateTime = value; }

    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline void SetReplicationCreateTime(Aws::Utils::DateTime&& value) { m_replicationCreateTimeHasBeenSet = true; m_replicationCreateTime = std::move(value); }

    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline Replication& WithReplicationCreateTime(const Aws::Utils::DateTime& value) { SetReplicationCreateTime(value); return *this;}

    /**
     * <p>The time the serverless replication was created.</p>
     */
    inline Replication& WithReplicationCreateTime(Aws::Utils::DateTime&& value) { SetReplicationCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationUpdateTime() const{ return m_replicationUpdateTime; }

    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline bool ReplicationUpdateTimeHasBeenSet() const { return m_replicationUpdateTimeHasBeenSet; }

    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline void SetReplicationUpdateTime(const Aws::Utils::DateTime& value) { m_replicationUpdateTimeHasBeenSet = true; m_replicationUpdateTime = value; }

    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline void SetReplicationUpdateTime(Aws::Utils::DateTime&& value) { m_replicationUpdateTimeHasBeenSet = true; m_replicationUpdateTime = std::move(value); }

    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline Replication& WithReplicationUpdateTime(const Aws::Utils::DateTime& value) { SetReplicationUpdateTime(value); return *this;}

    /**
     * <p>The time the serverless replication was updated.</p>
     */
    inline Replication& WithReplicationUpdateTime(Aws::Utils::DateTime&& value) { SetReplicationUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationLastStopTime() const{ return m_replicationLastStopTime; }

    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline bool ReplicationLastStopTimeHasBeenSet() const { return m_replicationLastStopTimeHasBeenSet; }

    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline void SetReplicationLastStopTime(const Aws::Utils::DateTime& value) { m_replicationLastStopTimeHasBeenSet = true; m_replicationLastStopTime = value; }

    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline void SetReplicationLastStopTime(Aws::Utils::DateTime&& value) { m_replicationLastStopTimeHasBeenSet = true; m_replicationLastStopTime = std::move(value); }

    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline Replication& WithReplicationLastStopTime(const Aws::Utils::DateTime& value) { SetReplicationLastStopTime(value); return *this;}

    /**
     * <p>The timestamp when replication was last stopped.</p>
     */
    inline Replication& WithReplicationLastStopTime(Aws::Utils::DateTime&& value) { SetReplicationLastStopTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationDeprovisionTime() const{ return m_replicationDeprovisionTime; }

    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline bool ReplicationDeprovisionTimeHasBeenSet() const { return m_replicationDeprovisionTimeHasBeenSet; }

    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline void SetReplicationDeprovisionTime(const Aws::Utils::DateTime& value) { m_replicationDeprovisionTimeHasBeenSet = true; m_replicationDeprovisionTime = value; }

    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline void SetReplicationDeprovisionTime(Aws::Utils::DateTime&& value) { m_replicationDeprovisionTimeHasBeenSet = true; m_replicationDeprovisionTime = std::move(value); }

    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline Replication& WithReplicationDeprovisionTime(const Aws::Utils::DateTime& value) { SetReplicationDeprovisionTime(value); return *this;}

    /**
     * <p>The timestamp when DMS will deprovision the replication.</p>
     */
    inline Replication& WithReplicationDeprovisionTime(Aws::Utils::DateTime&& value) { SetReplicationDeprovisionTime(std::move(value)); return *this;}

  private:

    Aws::String m_replicationConfigIdentifier;
    bool m_replicationConfigIdentifierHasBeenSet = false;

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    MigrationTypeValue m_replicationType;
    bool m_replicationTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ProvisionData m_provisionData;
    bool m_provisionDataHasBeenSet = false;

    Aws::String m_stopReason;
    bool m_stopReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureMessages;
    bool m_failureMessagesHasBeenSet = false;

    ReplicationStats m_replicationStats;
    bool m_replicationStatsHasBeenSet = false;

    Aws::String m_startReplicationType;
    bool m_startReplicationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_recoveryCheckpoint;
    bool m_recoveryCheckpointHasBeenSet = false;

    Aws::Utils::DateTime m_replicationCreateTime;
    bool m_replicationCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationUpdateTime;
    bool m_replicationUpdateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationLastStopTime;
    bool m_replicationLastStopTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationDeprovisionTime;
    bool m_replicationDeprovisionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
