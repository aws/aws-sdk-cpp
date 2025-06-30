/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/ProvisionedThroughput.h>
#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/dynamodb/model/SSESpecification.h>
#include <aws/dynamodb/model/TableClass.h>
#include <aws/dynamodb/model/MultiRegionConsistency.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/WarmThroughput.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexUpdate.h>
#include <aws/dynamodb/model/ReplicationGroupUpdate.h>
#include <aws/dynamodb/model/GlobalTableWitnessGroupUpdate.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateTable</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateTableInput">AWS
   * API Reference</a></p>
   */
  class UpdateTableRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const { return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    void SetAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::forward<AttributeDefinitionsT>(value); }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    UpdateTableRequest& WithAttributeDefinitions(AttributeDefinitionsT&& value) { SetAttributeDefinitions(std::forward<AttributeDefinitionsT>(value)); return *this;}
    template<typename AttributeDefinitionsT = AttributeDefinition>
    UpdateTableRequest& AddAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.emplace_back(std::forward<AttributeDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table to be updated. You can also provide the Amazon Resource
     * Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateTableRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PAY_PER_REQUEST</code> - We recommend using <code>PAY_PER_REQUEST</code>
     * for most DynamoDB workloads. <code>PAY_PER_REQUEST</code> sets the billing mode
     * to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/on-demand-capacity-mode.html">On-demand
     * capacity mode</a>. </p> </li> <li> <p> <code>PROVISIONED</code> - We recommend
     * using <code>PROVISIONED</code> for steady workloads with predictable growth
     * where capacity requirements can be reliably forecasted. <code>PROVISIONED</code>
     * sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">Provisioned
     * capacity mode</a>.</p> </li> </ul>
     */
    inline BillingMode GetBillingMode() const { return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(BillingMode value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline UpdateTableRequest& WithBillingMode(BillingMode value) { SetBillingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    UpdateTableRequest& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of one or more global secondary indexes for the table. For each
     * index in the array, you can request one action:</p> <ul> <li> <p>
     * <code>Create</code> - add a new global secondary index to the table.</p> </li>
     * <li> <p> <code>Update</code> - modify the provisioned throughput settings of an
     * existing global secondary index.</p> </li> <li> <p> <code>Delete</code> - remove
     * a global secondary index from the table.</p> </li> </ul> <p>You can create or
     * delete only one global secondary index per <code>UpdateTable</code>
     * operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/GSI.OnlineOps.html">Managing
     * Global Secondary Indexes</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexUpdate>& GetGlobalSecondaryIndexUpdates() const { return m_globalSecondaryIndexUpdates; }
    inline bool GlobalSecondaryIndexUpdatesHasBeenSet() const { return m_globalSecondaryIndexUpdatesHasBeenSet; }
    template<typename GlobalSecondaryIndexUpdatesT = Aws::Vector<GlobalSecondaryIndexUpdate>>
    void SetGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = std::forward<GlobalSecondaryIndexUpdatesT>(value); }
    template<typename GlobalSecondaryIndexUpdatesT = Aws::Vector<GlobalSecondaryIndexUpdate>>
    UpdateTableRequest& WithGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { SetGlobalSecondaryIndexUpdates(std::forward<GlobalSecondaryIndexUpdatesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexUpdatesT = GlobalSecondaryIndexUpdate>
    UpdateTableRequest& AddGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.emplace_back(std::forward<GlobalSecondaryIndexUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ValidationException</code> if you try to enable a stream
     * on a table that already has a stream, or if you try to disable a stream on a
     * table that doesn't have a stream.</p> 
     */
    inline const StreamSpecification& GetStreamSpecification() const { return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    template<typename StreamSpecificationT = StreamSpecification>
    void SetStreamSpecification(StreamSpecificationT&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::forward<StreamSpecificationT>(value); }
    template<typename StreamSpecificationT = StreamSpecification>
    UpdateTableRequest& WithStreamSpecification(StreamSpecificationT&& value) { SetStreamSpecification(std::forward<StreamSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline const SSESpecification& GetSSESpecification() const { return m_sSESpecification; }
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }
    template<typename SSESpecificationT = SSESpecification>
    void SetSSESpecification(SSESpecificationT&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::forward<SSESpecificationT>(value); }
    template<typename SSESpecificationT = SSESpecification>
    UpdateTableRequest& WithSSESpecification(SSESpecificationT&& value) { SetSSESpecification(std::forward<SSESpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>
     */
    inline const Aws::Vector<ReplicationGroupUpdate>& GetReplicaUpdates() const { return m_replicaUpdates; }
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }
    template<typename ReplicaUpdatesT = Aws::Vector<ReplicationGroupUpdate>>
    void SetReplicaUpdates(ReplicaUpdatesT&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::forward<ReplicaUpdatesT>(value); }
    template<typename ReplicaUpdatesT = Aws::Vector<ReplicationGroupUpdate>>
    UpdateTableRequest& WithReplicaUpdates(ReplicaUpdatesT&& value) { SetReplicaUpdates(std::forward<ReplicaUpdatesT>(value)); return *this;}
    template<typename ReplicaUpdatesT = ReplicationGroupUpdate>
    UpdateTableRequest& AddReplicaUpdates(ReplicaUpdatesT&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.emplace_back(std::forward<ReplicaUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline TableClass GetTableClass() const { return m_tableClass; }
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }
    inline void SetTableClass(TableClass value) { m_tableClassHasBeenSet = true; m_tableClass = value; }
    inline UpdateTableRequest& WithTableClass(TableClass value) { SetTableClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline UpdateTableRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the consistency mode for a new global table. This parameter is only
     * valid when you create a global table by specifying one or more <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_ReplicationGroupUpdate.html#DDB-Type-ReplicationGroupUpdate-Create">Create</a>
     * actions in the <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_UpdateTable.html#DDB-UpdateTable-request-ReplicaUpdates">ReplicaUpdates</a>
     * action list.</p> <p>You can specify one of the following consistency modes:</p>
     * <ul> <li> <p> <code>EVENTUAL</code>: Configures a new global table for
     * multi-Region eventual consistency (MREC). This is the default consistency mode
     * for global tables.</p> </li> <li> <p> <code>STRONG</code>: Configures a new
     * global table for multi-Region strong consistency (MRSC).</p> </li> </ul> <p>If
     * you don't specify this field, the global table consistency mode defaults to
     * <code>EVENTUAL</code>. For more information about global tables consistency
     * modes, see <a
     * href="https://docs.aws.amazon.com/V2globaltables_HowItWorks.html#V2globaltables_HowItWorks.consistency-modes">
     * Consistency modes</a> in DynamoDB developer guide. </p>
     */
    inline MultiRegionConsistency GetMultiRegionConsistency() const { return m_multiRegionConsistency; }
    inline bool MultiRegionConsistencyHasBeenSet() const { return m_multiRegionConsistencyHasBeenSet; }
    inline void SetMultiRegionConsistency(MultiRegionConsistency value) { m_multiRegionConsistencyHasBeenSet = true; m_multiRegionConsistency = value; }
    inline UpdateTableRequest& WithMultiRegionConsistency(MultiRegionConsistency value) { SetMultiRegionConsistency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of witness updates for a MRSC global table. A witness provides a
     * cost-effective alternative to a full replica in a MRSC global table by
     * maintaining replicated change data written to global table replicas. You cannot
     * perform read or write operations on a witness. For each witness, you can request
     * one action:</p> <ul> <li> <p> <code>Create</code> - add a new witness to the
     * global table.</p> </li> <li> <p> <code>Delete</code> - remove a witness from the
     * global table.</p> </li> </ul> <p>You can create or delete only one witness per
     * <code>UpdateTable</code> operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/V2globaltables_HowItWorks.html#V2globaltables_HowItWorks.consistency-modes">Multi-Region
     * strong consistency (MRSC)</a> in the Amazon DynamoDB Developer Guide</p>
     */
    inline const Aws::Vector<GlobalTableWitnessGroupUpdate>& GetGlobalTableWitnessUpdates() const { return m_globalTableWitnessUpdates; }
    inline bool GlobalTableWitnessUpdatesHasBeenSet() const { return m_globalTableWitnessUpdatesHasBeenSet; }
    template<typename GlobalTableWitnessUpdatesT = Aws::Vector<GlobalTableWitnessGroupUpdate>>
    void SetGlobalTableWitnessUpdates(GlobalTableWitnessUpdatesT&& value) { m_globalTableWitnessUpdatesHasBeenSet = true; m_globalTableWitnessUpdates = std::forward<GlobalTableWitnessUpdatesT>(value); }
    template<typename GlobalTableWitnessUpdatesT = Aws::Vector<GlobalTableWitnessGroupUpdate>>
    UpdateTableRequest& WithGlobalTableWitnessUpdates(GlobalTableWitnessUpdatesT&& value) { SetGlobalTableWitnessUpdates(std::forward<GlobalTableWitnessUpdatesT>(value)); return *this;}
    template<typename GlobalTableWitnessUpdatesT = GlobalTableWitnessGroupUpdate>
    UpdateTableRequest& AddGlobalTableWitnessUpdates(GlobalTableWitnessUpdatesT&& value) { m_globalTableWitnessUpdatesHasBeenSet = true; m_globalTableWitnessUpdates.emplace_back(std::forward<GlobalTableWitnessUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates the maximum number of read and write units for the specified table in
     * on-demand capacity mode. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    UpdateTableRequest& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput (in read units per second and write units per
     * second) for updating a table.</p>
     */
    inline const WarmThroughput& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = WarmThroughput>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = WarmThroughput>
    UpdateTableRequest& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    BillingMode m_billingMode{BillingMode::NOT_SET};
    bool m_billingModeHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndexUpdate> m_globalSecondaryIndexUpdates;
    bool m_globalSecondaryIndexUpdatesHasBeenSet = false;

    StreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet = false;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet = false;

    Aws::Vector<ReplicationGroupUpdate> m_replicaUpdates;
    bool m_replicaUpdatesHasBeenSet = false;

    TableClass m_tableClass{TableClass::NOT_SET};
    bool m_tableClassHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    MultiRegionConsistency m_multiRegionConsistency{MultiRegionConsistency::NOT_SET};
    bool m_multiRegionConsistencyHasBeenSet = false;

    Aws::Vector<GlobalTableWitnessGroupUpdate> m_globalTableWitnessUpdates;
    bool m_globalTableWitnessUpdatesHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    WarmThroughput m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
