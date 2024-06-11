﻿/**
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
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigRequest();

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
    inline const Aws::String& GetReplicationConfigIdentifier() const{ return m_replicationConfigIdentifier; }
    inline bool ReplicationConfigIdentifierHasBeenSet() const { return m_replicationConfigIdentifierHasBeenSet; }
    inline void SetReplicationConfigIdentifier(const Aws::String& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = value; }
    inline void SetReplicationConfigIdentifier(Aws::String&& value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier = std::move(value); }
    inline void SetReplicationConfigIdentifier(const char* value) { m_replicationConfigIdentifierHasBeenSet = true; m_replicationConfigIdentifier.assign(value); }
    inline CreateReplicationConfigRequest& WithReplicationConfigIdentifier(const Aws::String& value) { SetReplicationConfigIdentifier(value); return *this;}
    inline CreateReplicationConfigRequest& WithReplicationConfigIdentifier(Aws::String&& value) { SetReplicationConfigIdentifier(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithReplicationConfigIdentifier(const char* value) { SetReplicationConfigIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source endpoint for this DMS Serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }
    inline CreateReplicationConfigRequest& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}
    inline CreateReplicationConfigRequest& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target endpoint for this DMS serverless
     * replication configuration.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }
    inline CreateReplicationConfigRequest& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}
    inline CreateReplicationConfigRequest& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration parameters for provisioning an DMS Serverless replication.</p>
     */
    inline const ComputeConfig& GetComputeConfig() const{ return m_computeConfig; }
    inline bool ComputeConfigHasBeenSet() const { return m_computeConfigHasBeenSet; }
    inline void SetComputeConfig(const ComputeConfig& value) { m_computeConfigHasBeenSet = true; m_computeConfig = value; }
    inline void SetComputeConfig(ComputeConfig&& value) { m_computeConfigHasBeenSet = true; m_computeConfig = std::move(value); }
    inline CreateReplicationConfigRequest& WithComputeConfig(const ComputeConfig& value) { SetComputeConfig(value); return *this;}
    inline CreateReplicationConfigRequest& WithComputeConfig(ComputeConfig&& value) { SetComputeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of DMS Serverless replication to provision using this replication
     * configuration.</p> <p>Possible values:</p> <ul> <li> <p>
     * <code>"full-load"</code> </p> </li> <li> <p> <code>"cdc"</code> </p> </li> <li>
     * <p> <code>"full-load-and-cdc"</code> </p> </li> </ul>
     */
    inline const MigrationTypeValue& GetReplicationType() const{ return m_replicationType; }
    inline bool ReplicationTypeHasBeenSet() const { return m_replicationTypeHasBeenSet; }
    inline void SetReplicationType(const MigrationTypeValue& value) { m_replicationTypeHasBeenSet = true; m_replicationType = value; }
    inline void SetReplicationType(MigrationTypeValue&& value) { m_replicationTypeHasBeenSet = true; m_replicationType = std::move(value); }
    inline CreateReplicationConfigRequest& WithReplicationType(const MigrationTypeValue& value) { SetReplicationType(value); return *this;}
    inline CreateReplicationConfigRequest& WithReplicationType(MigrationTypeValue&& value) { SetReplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>JSON table mappings for DMS Serverless replications that are provisioned
     * using this replication configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TableMapping.SelectionTransformation.html">
     * Specifying table selection and transformations rules using JSON</a>.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }
    inline CreateReplicationConfigRequest& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}
    inline CreateReplicationConfigRequest& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional JSON settings for DMS Serverless replications that are provisioned
     * using this replication configuration. For example, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.CustomizingTasks.TaskSettings.ChangeProcessingTuning.html">
     * Change processing tuning settings</a>.</p>
     */
    inline const Aws::String& GetReplicationSettings() const{ return m_replicationSettings; }
    inline bool ReplicationSettingsHasBeenSet() const { return m_replicationSettingsHasBeenSet; }
    inline void SetReplicationSettings(const Aws::String& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = value; }
    inline void SetReplicationSettings(Aws::String&& value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings = std::move(value); }
    inline void SetReplicationSettings(const char* value) { m_replicationSettingsHasBeenSet = true; m_replicationSettings.assign(value); }
    inline CreateReplicationConfigRequest& WithReplicationSettings(const Aws::String& value) { SetReplicationSettings(value); return *this;}
    inline CreateReplicationConfigRequest& WithReplicationSettings(Aws::String&& value) { SetReplicationSettings(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithReplicationSettings(const char* value) { SetReplicationSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional JSON settings for specifying supplemental data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tasks.TaskData.html">
     * Specifying supplemental data for task settings</a>.</p>
     */
    inline const Aws::String& GetSupplementalSettings() const{ return m_supplementalSettings; }
    inline bool SupplementalSettingsHasBeenSet() const { return m_supplementalSettingsHasBeenSet; }
    inline void SetSupplementalSettings(const Aws::String& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = value; }
    inline void SetSupplementalSettings(Aws::String&& value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings = std::move(value); }
    inline void SetSupplementalSettings(const char* value) { m_supplementalSettingsHasBeenSet = true; m_supplementalSettings.assign(value); }
    inline CreateReplicationConfigRequest& WithSupplementalSettings(const Aws::String& value) { SetSupplementalSettings(value); return *this;}
    inline CreateReplicationConfigRequest& WithSupplementalSettings(Aws::String&& value) { SetSupplementalSettings(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithSupplementalSettings(const char* value) { SetSupplementalSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional unique value or name that you set for a given resource that can be
     * used to construct an Amazon Resource Name (ARN) for that resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Security.html#CHAP_Security.FineGrainedAccess">
     * Fine-grained access control using resource names and tags</a>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline CreateReplicationConfigRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline CreateReplicationConfigRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more optional tags associated with resources used by the DMS
     * Serverless replication. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_Tagging.html">
     * Tagging resources in Database Migration Service</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateReplicationConfigRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateReplicationConfigRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateReplicationConfigRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateReplicationConfigRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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

    MigrationTypeValue m_replicationType;
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
