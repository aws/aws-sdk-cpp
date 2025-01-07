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
    AWS_DYNAMODB_API UpdateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }
    inline void SetAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }
    inline UpdateTableRequest& WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}
    inline UpdateTableRequest& WithAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}
    inline UpdateTableRequest& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }
    inline UpdateTableRequest& AddAttributeDefinitions(AttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table to be updated. You can also provide the Amazon Resource
     * Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">Provisioned
     * capacity mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We
     * recommend using <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/on-demand-capacity-mode.html">On-demand
     * capacity mode</a>. </p> </li> </ul>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }
    inline UpdateTableRequest& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}
    inline UpdateTableRequest& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline UpdateTableRequest& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline UpdateTableRequest& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
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
    inline const Aws::Vector<GlobalSecondaryIndexUpdate>& GetGlobalSecondaryIndexUpdates() const{ return m_globalSecondaryIndexUpdates; }
    inline bool GlobalSecondaryIndexUpdatesHasBeenSet() const { return m_globalSecondaryIndexUpdatesHasBeenSet; }
    inline void SetGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = value; }
    inline void SetGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexUpdate>&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = std::move(value); }
    inline UpdateTableRequest& WithGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { SetGlobalSecondaryIndexUpdates(value); return *this;}
    inline UpdateTableRequest& WithGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexUpdate>&& value) { SetGlobalSecondaryIndexUpdates(std::move(value)); return *this;}
    inline UpdateTableRequest& AddGlobalSecondaryIndexUpdates(const GlobalSecondaryIndexUpdate& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(value); return *this; }
    inline UpdateTableRequest& AddGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdate&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ValidationException</code> if you try to enable a stream
     * on a table that already has a stream, or if you try to disable a stream on a
     * table that doesn't have a stream.</p> 
     */
    inline const StreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    inline void SetStreamSpecification(const StreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }
    inline void SetStreamSpecification(StreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }
    inline UpdateTableRequest& WithStreamSpecification(const StreamSpecification& value) { SetStreamSpecification(value); return *this;}
    inline UpdateTableRequest& WithStreamSpecification(StreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline const SSESpecification& GetSSESpecification() const{ return m_sSESpecification; }
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }
    inline void SetSSESpecification(const SSESpecification& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = value; }
    inline void SetSSESpecification(SSESpecification&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::move(value); }
    inline UpdateTableRequest& WithSSESpecification(const SSESpecification& value) { SetSSESpecification(value); return *this;}
    inline UpdateTableRequest& WithSSESpecification(SSESpecification&& value) { SetSSESpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>For global tables, this property only applies to global
     * tables using Version 2019.11.21 (Current version). </p> 
     */
    inline const Aws::Vector<ReplicationGroupUpdate>& GetReplicaUpdates() const{ return m_replicaUpdates; }
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }
    inline void SetReplicaUpdates(const Aws::Vector<ReplicationGroupUpdate>& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = value; }
    inline void SetReplicaUpdates(Aws::Vector<ReplicationGroupUpdate>&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::move(value); }
    inline UpdateTableRequest& WithReplicaUpdates(const Aws::Vector<ReplicationGroupUpdate>& value) { SetReplicaUpdates(value); return *this;}
    inline UpdateTableRequest& WithReplicaUpdates(Aws::Vector<ReplicationGroupUpdate>&& value) { SetReplicaUpdates(std::move(value)); return *this;}
    inline UpdateTableRequest& AddReplicaUpdates(const ReplicationGroupUpdate& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(value); return *this; }
    inline UpdateTableRequest& AddReplicaUpdates(ReplicationGroupUpdate&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline const TableClass& GetTableClass() const{ return m_tableClass; }
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }
    inline void SetTableClass(const TableClass& value) { m_tableClassHasBeenSet = true; m_tableClass = value; }
    inline void SetTableClass(TableClass&& value) { m_tableClassHasBeenSet = true; m_tableClass = std::move(value); }
    inline UpdateTableRequest& WithTableClass(const TableClass& value) { SetTableClass(value); return *this;}
    inline UpdateTableRequest& WithTableClass(TableClass&& value) { SetTableClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
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
     * href="https://docs.aws.amazon.com/https:/docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_UpdateTable.html#DDB-UpdateTable-request-ReplicaUpdates">ReplicaUpdates</a>
     * action list.</p> <p>You can specify one of the following consistency modes:</p>
     * <ul> <li> <p> <code>EVENTUAL</code>: Configures a new global table for
     * multi-Region eventual consistency. This is the default consistency mode for
     * global tables.</p> </li> <li> <p> <code>STRONG</code>: Configures a new global
     * table for multi-Region strong consistency (preview).</p>  <p>Multi-Region
     * strong consistency (MRSC) is a new DynamoDB global tables capability currently
     * available in preview mode. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/PreviewFeatures.html#multi-region-strong-consistency-gt">Global
     * tables multi-Region strong consistency</a>.</p>  </li> </ul> <p>If you
     * don't specify this parameter, the global table consistency mode defaults to
     * <code>EVENTUAL</code>.</p>
     */
    inline const MultiRegionConsistency& GetMultiRegionConsistency() const{ return m_multiRegionConsistency; }
    inline bool MultiRegionConsistencyHasBeenSet() const { return m_multiRegionConsistencyHasBeenSet; }
    inline void SetMultiRegionConsistency(const MultiRegionConsistency& value) { m_multiRegionConsistencyHasBeenSet = true; m_multiRegionConsistency = value; }
    inline void SetMultiRegionConsistency(MultiRegionConsistency&& value) { m_multiRegionConsistencyHasBeenSet = true; m_multiRegionConsistency = std::move(value); }
    inline UpdateTableRequest& WithMultiRegionConsistency(const MultiRegionConsistency& value) { SetMultiRegionConsistency(value); return *this;}
    inline UpdateTableRequest& WithMultiRegionConsistency(MultiRegionConsistency&& value) { SetMultiRegionConsistency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the maximum number of read and write units for the specified table in
     * on-demand capacity mode. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const{ return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    inline void SetOnDemandThroughput(const OnDemandThroughput& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = value; }
    inline void SetOnDemandThroughput(OnDemandThroughput&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::move(value); }
    inline UpdateTableRequest& WithOnDemandThroughput(const OnDemandThroughput& value) { SetOnDemandThroughput(value); return *this;}
    inline UpdateTableRequest& WithOnDemandThroughput(OnDemandThroughput&& value) { SetOnDemandThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput (in read units per second and write units per
     * second) for updating a table.</p>
     */
    inline const WarmThroughput& GetWarmThroughput() const{ return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    inline void SetWarmThroughput(const WarmThroughput& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = value; }
    inline void SetWarmThroughput(WarmThroughput&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::move(value); }
    inline UpdateTableRequest& WithWarmThroughput(const WarmThroughput& value) { SetWarmThroughput(value); return *this;}
    inline UpdateTableRequest& WithWarmThroughput(WarmThroughput&& value) { SetWarmThroughput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    BillingMode m_billingMode;
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

    TableClass m_tableClass;
    bool m_tableClassHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;

    MultiRegionConsistency m_multiRegionConsistency;
    bool m_multiRegionConsistencyHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    WarmThroughput m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
