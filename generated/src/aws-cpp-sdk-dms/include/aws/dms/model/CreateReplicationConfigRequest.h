/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/ComputeConfig.h>
#include <aws/dms/model/MigrationTypeValue.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationConfigMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationConfigRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationConfig"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier that you want to use to create a
     * <code>ReplicationConfigArn</code> that is returned as part of the output from
     * this action. You can then pass this output <code>ReplicationConfigArn</code> as
     * the value of the <code>ReplicationConfigArn</code> option for other actions to
     * identify both DMS Serverless replications and replication configurations that
     * you want those actions to operate on. For some actions, you can also use either
     * this unique identifier or a corresponding ARN in action filters to identify the
     * specific replication and replication configuration to operate on.</p>
     */
    inline const Aws::String& GetReplicationConfigIdentifier() const { return m_replicationConfigIdentifier; }
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    void SetReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::forward<ReplicationConfigIdentifierT>(value); }
    template<typename ReplicationConfigIdentifierT = Aws::String>
    CreateReplicationConfigRequest& WithReplicationConfigIdentifier(ReplicationConfigIdentifierT&& value) { SetReplicationConfigIdentifier(std::forward<ReplicationConfigIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS Serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    template<typename SourceEndpointArnT = Aws::String>
    void SetSourceEndpointArn(SourceEndpointArnT&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value); }
    template<typename SourceEndpointArnT = Aws::String>
    CreateReplicationConfigRequest& WithSourceEndpointArn(SourceEndpointArnT&& value) { SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value)); return *this;}
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
    CreateReplicationConfigRequest& WithTargetEndpointArn(TargetEndpointArnT&& value) { SetTargetEndpointArn(std::forward<TargetEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for provisioning an DMS Serverless replication.</p>
     */
    inline const ComputeConfig& GetComputeConfig() const { return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    template<typename ComputeConfigT = ComputeConfig>
    void SetComputeConfig(ComputeConfigT&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::forward<ComputeConfigT>(value); }
    template<typename ComputeConfigT = ComputeConfig>
    CreateReplicationConfigRequest& WithComputeConfig(ComputeConfigT&& value) { SetComputeConfig(std::forward<ComputeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DMS Serverless replication to provision using this replication
     * configuration.</p> <p>Possible values:</p> <ul> <li> <p>
     * <code>"full-load"</code> </p> </li> <li> <p> <code>"cdc"</code> </p> </li> <li>
     * <p> <code>"full-load-and-cdc"</code> </p> </li> </ul>
     */
    inline MigrationTypeValue GetReplicationType() const { return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(MigrationTypeValue value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline CreateReplicationConfigRequest& WithReplicationType(MigrationTypeValue value) { SetReplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON table mappings for DMS Serverless replications that are provisioned
     * using this replication configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TableMapping.SelectionTransformation.html">
     * Specifying table selection and transformations rules using JSON</a>.</p>
     */
    inline const Aws::String& GetTableMappings() const { return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    template<typename TableMappingsT = Aws::String>
    void SetTableMappings(TableMappingsT&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::forward<TableMappingsT>(value); }
    template<typename TableMappingsT = Aws::String>
    CreateReplicationConfigRequest& WithTableMappings(TableMappingsT&& value) { SetTableMappings(std::forward<TableMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional JSON settings for DMS Serverless replications that are provisioned
     * using this replication configuration. For example, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.ChangeProcessingTuning.html">
     * Change processing tuning settings</a>.</p>
     */
    inline const Aws::String& GetReplicationSettings() const { return m_replicationSettings; }
    inline bool ReplicationSettingsHasBeenSet() const { return m_replicationSettingsHasBeenSet; }
    template<typename ReplicationSettingsT = Aws::String>
    void SetReplicationSettings(ReplicationSettingsT&& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = std::forward<ReplicationSettingsT>(value); }
    template<typename ReplicationSettingsT = Aws::String>
    CreateReplicationConfigRequest& WithReplicationSettings(ReplicationSettingsT&& value) { SetReplicationSettings(std::forward<ReplicationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional JSON settings for specifying supplemental data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">
     * Specifying supplemental data for task settings</a>.</p>
     */
    inline const Aws::String& GetSupplementalSettings() const { return m_supplementalSettings; }
    inline bool SupplementalSettingsHasBeenSet() const { return m_supplementalSettingsHasBeenSet; }
    template<typename SupplementalSettingsT = Aws::String>
    void SetSupplementalSettings(SupplementalSettingsT&& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = std::forward<SupplementalSettingsT>(value); }
    template<typename SupplementalSettingsT = Aws::String>
    CreateReplicationConfigRequest& WithSupplementalSettings(SupplementalSettingsT&& value) { SetSupplementalSettings(std::forward<SupplementalSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional unique value or name that you set for a given resource that can be
     * used to construct an Amazon Resource Name (ARN) for that resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.FineGrainedAccess">
     * Fine-grained access control using resource names and tags</a>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    CreateReplicationConfigRequest& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more optional tags associated with resources used by the DMS
     * Serverless replication. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tagging.html">
     * Tagging resources in Database Migration Service</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateReplicationConfigRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateReplicationConfigRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationConfigIdentifier;
    bool m_replicationConfigIdentifierHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    ComputeConfig m_computeConfig;
    bool m_computeConfigHasBeenSet = false;

    MigrationTypeValue m_replicationType{MigrationTypeValue::NOT_SET};
    bool m_replicationTypeHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::String m_replicationSettings;
    bool m_replicationSettingsHasBeenSet = false;

    Aws::String m_supplementalSettings;
    bool m_supplementalSettingsHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
