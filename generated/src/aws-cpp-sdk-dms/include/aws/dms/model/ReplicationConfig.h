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
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the <code>ReplicationConfig</code> associated with the
     * replication.</p>
     */
    inline const Aws::String& GetReplicationConfigIdentifier() const { return m_replicationConfigIdentifier; }
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    void SetReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::forward<ReplicationConfigIdentifierT>(value); }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    ReplicationConfig& WithReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { SetReplicationConfigIdentifier(std::forward<ReplicationConfigIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this DMS Serverless replication
     * configuration.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    ReplicationConfig& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    template<typename SourceEndpointArnT = Aws::String>
    void SetSourceEndpointArn(SourceEndpointArnT&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value); }
    template<typename SourceEndpointArnT = Aws::String>
    ReplicationConfig& WithSourceEndpointArn(SourceEndpointArnT&& value) { SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const { return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    template<typename TargetEndpointArnT = Aws::String>
    void SetTargetEndpointArn(TargetEndpointArnT&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::forward<TargetEndpointArnT>(value); }
    template<typename TargetEndpointArnT = Aws::String>
    ReplicationConfig& WithTargetEndpointArn(TargetEndpointArnT&& value) { SetTargetEndpointArn(std::forward<TargetEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the replication.</p>
     */
    inline MigrationTypeValue GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(MigrationTypeValue value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline ReplicationConfig& WithReplicationType(MigrationTypeValue value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for provisioning an DMS serverless replication.</p>
     */
    inline const ComputeConfig& GetComputeConfig() const { return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    template<typename ComputeConfigT = ComputeConfig>
    void SetComputeConfig(ComputeConfigT&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::forward<ComputeConfigT>(value); }
    template<typename ComputeConfigT = ComputeConfig>
    ReplicationConfig& WithComputeConfig(ComputeConfigT&& value) { SetComputeConfig(std::forward<ComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for an DMS serverless replication.</p>
     */
    inline const Aws::String& GetReplicationSettings() const { return m_replicationSettings; }
    inline bool ReplicationSettingsHasBeenSet() const { return m_replicationSettingsHasBeenSet; }
    template<typename ReplicationSettingsT = Aws::String>
    void SetReplicationSettings(ReplicationSettingsT&& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = std::forward<ReplicationSettingsT>(value); }
    template<typename ReplicationSettingsT = Aws::String>
    ReplicationConfig& WithReplicationSettings(ReplicationSettingsT&& value) { SetReplicationSettings(std::forward<ReplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional parameters for an DMS serverless replication.</p>
     */
    inline const Aws::String& GetSupplementalSettings() const { return m_supplementalSettings; }
    inline bool SupplementalSettingsHasBeenSet() const { return m_supplementalSettingsHasBeenSet; }
    template<typename SupplementalSettingsT = Aws::String>
    void SetSupplementalSettings(SupplementalSettingsT&& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = std::forward<SupplementalSettingsT>(value); }
    template<typename SupplementalSettingsT = Aws::String>
    ReplicationConfig& WithSupplementalSettings(SupplementalSettingsT&& value) { SetSupplementalSettings(std::forward<SupplementalSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Table mappings specified in the replication.</p>
     */
    inline const Aws::String& GetTableMappings() const { return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    template<typename TableMappingsT = Aws::String>
    void SetTableMappings(TableMappingsT&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::forward<TableMappingsT>(value); }
    template<typename TableMappingsT = Aws::String>
    ReplicationConfig& WithTableMappings(TableMappingsT&& value) { SetTableMappings(std::forward<TableMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication config was created.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationConfigCreateTime() const { return m_replicationConfigCreateTime; }
    inline bool ReplicationConfigCreateTimeHasBeenSet() const { return m_replicationConfigCreateTimeHasBeenSet; }
    template<typename ReplicationConfigCreateTimeT = Aws::Utils::DateTime>
    void SetReplicationConfigCreateTime(ReplicationConfigCreateTimeT&& value) { m_replicationConfigCreateTimeHasBeenSet = true; m_replicationConfigCreateTime = std::forward<ReplicationConfigCreateTimeT>(value); }
    template<typename ReplicationConfigCreateTimeT = Aws::Utils::DateTime>
    ReplicationConfig& WithReplicationConfigCreateTime(ReplicationConfigCreateTimeT&& value) { SetReplicationConfigCreateTime(std::forward<ReplicationConfigCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the serverless replication config was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationConfigUpdateTime() const { return m_replicationConfigUpdateTime; }
    inline bool ReplicationConfigUpdateTimeHasBeenSet() const { return m_replicationConfigUpdateTimeHasBeenSet; }
    template<typename ReplicationConfigUpdateTimeT = Aws::Utils::DateTime>
    void SetReplicationConfigUpdateTime(ReplicationConfigUpdateTimeT&& value) { m_replicationConfigUpdateTimeHasBeenSet = true; m_replicationConfigUpdateTime = std::forward<ReplicationConfigUpdateTimeT>(value); }
    template<typename ReplicationConfigUpdateTimeT = Aws::Utils::DateTime>
    ReplicationConfig& WithReplicationConfigUpdateTime(ReplicationConfigUpdateTimeT&& value) { SetReplicationConfigUpdateTime(std::forward<ReplicationConfigUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigIdentifier;
    bool m_replicationConfigIdentifierHasBeenSet = false;

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    MigrationTypeValue m_replicationType{MigrationTypeValue::NOT_SET};
    bool m_replicationTypeHasBeenSet = false;

    ComputeConfig m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    Aws::String m_replicationSettings;
    bool m_replicationSettingsHasBeenSet = false;

    Aws::String m_supplementalSettings;
    bool m_supplementalSettingsHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::Utils::DateTime m_replicationConfigCreateTime{};
    bool m_replicationConfigCreateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_replicationConfigUpdateTime{};
    bool m_replicationConfigUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
