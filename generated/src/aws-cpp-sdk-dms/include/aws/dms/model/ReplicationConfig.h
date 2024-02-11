/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <aws/dms/model/ComputeConfig.h>
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
   * <p>This object provides configuration information about a serverless
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationConfig">AWS
   * API Reference</a></p>
   */
  class ReplicationConfig
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ReplicationConfig& WithReplicationConfigIdentifier(const Aws::String& value) { SetReplicationConfigIdentifier(value); return *this;}

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline ReplicationConfig& WithReplicationConfigIdentifier(Aws::String&& value) { SetReplicationConfigIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline ReplicationConfig& WithReplicationConfigIdentifier(const char* value) { SetReplicationConfigIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline ReplicationConfig& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline ReplicationConfig& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline ReplicationConfig& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline ReplicationConfig& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}


    /**
     * <p>The type of the replication.</p>
     */
    inline const MigrationTypeValue& GetReplicationType() const{ return m_replicationType; }

    /**
     * <p>The type of the replication.</p>
     */
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }

    /**
     * <p>The type of the replication.</p>
     */
    inline void SetReplicationType(const MigrationTypeValue& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }

    /**
     * <p>The type of the replication.</p>
     */
    inline void SetReplicationType(MigrationTypeValue&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }

    /**
     * <p>The type of the replication.</p>
     */
    inline ReplicationConfig& WithReplicationType(const MigrationTypeValue& value) { SetReplicationType(value); return *this;}

    /**
     * <p>The type of the replication.</p>
     */
    inline ReplicationConfig& WithReplicationType(MigrationTypeValue&& value) { SetReplicationType(std::move(value)); return *this;}


    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline const ComputeConfig& GetComputeConfig() const{ return m_computeConfig; }

    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }

    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline void SetComputeConfig(const ComputeConfig& value) { m_computeConfigHasBeenSet = true; m_computeConfig = value; }

    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline void SetComputeConfig(ComputeConfig&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::move(value); }

    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithComputeConfig(const ComputeConfig& value) { SetComputeConfig(value); return *this;}

    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithComputeConfig(ComputeConfig&& value) { SetComputeConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline const Aws::String& GetReplicationSettings() const{ return m_replicationSettings; }

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline bool ReplicationSettingsHasBeenSet() const { return m_replicationSettingsHasBeenSet; }

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline void SetReplicationSettings(const Aws::String& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = value; }

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline void SetReplicationSettings(Aws::String&& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = std::move(value); }

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline void SetReplicationSettings(const char* value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings.assign(value); }

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithReplicationSettings(const Aws::String& value) { SetReplicationSettings(value); return *this;}

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithReplicationSettings(Aws::String&& value) { SetReplicationSettings(std::move(value)); return *this;}

    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithReplicationSettings(const char* value) { SetReplicationSettings(value); return *this;}


    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline const Aws::String& GetSupplementalSettings() const{ return m_supplementalSettings; }

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline bool SupplementalSettingsHasBeenSet() const { return m_supplementalSettingsHasBeenSet; }

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline void SetSupplementalSettings(const Aws::String& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = value; }

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline void SetSupplementalSettings(Aws::String&& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = std::move(value); }

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline void SetSupplementalSettings(const char* value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings.assign(value); }

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithSupplementalSettings(const Aws::String& value) { SetSupplementalSettings(value); return *this;}

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithSupplementalSettings(Aws::String&& value) { SetSupplementalSettings(std::move(value)); return *this;}

    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline ReplicationConfig& WithSupplementalSettings(const char* value) { SetSupplementalSettings(value); return *this;}


    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline ReplicationConfig& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline ReplicationConfig& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}

    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline ReplicationConfig& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}


    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationConfigCreateTime() const{ return m_replicationConfigCreateTime; }

    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline bool ReplicationConfigCreateTimeHasBeenSet() const { return m_replicationConfigCreateTimeHasBeenSet; }

    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline void SetReplicationConfigCreateTime(const Aws::Utils::DateTime& value) { m_replicationConfigCreateTimeHasBeenSet = true; m_replicationConfigCreateTime = value; }

    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline void SetReplicationConfigCreateTime(Aws::Utils::DateTime&& value) { m_replicationConfigCreateTimeHasBeenSet = true; m_replicationConfigCreateTime = std::move(value); }

    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline ReplicationConfig& WithReplicationConfigCreateTime(const Aws::Utils::DateTime& value) { SetReplicationConfigCreateTime(value); return *this;}

    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline ReplicationConfig& WithReplicationConfigCreateTime(Aws::Utils::DateTime&& value) { SetReplicationConfigCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationConfigUpdateTime() const{ return m_replicationConfigUpdateTime; }

    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline bool ReplicationConfigUpdateTimeHasBeenSet() const { return m_replicationConfigUpdateTimeHasBeenSet; }

    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline void SetReplicationConfigUpdateTime(const Aws::Utils::DateTime& value) { m_replicationConfigUpdateTimeHasBeenSet = true; m_replicationConfigUpdateTime = value; }

    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline void SetReplicationConfigUpdateTime(Aws::Utils::DateTime&& value) { m_replicationConfigUpdateTimeHasBeenSet = true; m_replicationConfigUpdateTime = std::move(value); }

    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline ReplicationConfig& WithReplicationConfigUpdateTime(const Aws::Utils::DateTime& value) { SetReplicationConfigUpdateTime(value); return *this;}

    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline ReplicationConfig& WithReplicationConfigUpdateTime(Aws::Utils::DateTime&& value) { SetReplicationConfigUpdateTime(std::move(value)); return *this;}

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

    ComputeConfig m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    Aws::String m_replicationSettings;
    bool m_replicationSettingsHasBeenSet = false;

    Aws::String m_supplementalSettings;
    bool m_supplementalSettingsHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::Utils::DateTime m_replicationConfigCreateTime;
    bool m_replicationConfigCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationConfigUpdateTime;
    bool m_replicationConfigUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
