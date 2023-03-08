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


    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline void SetAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline UpdateTableRequest& WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline UpdateTableRequest& WithAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline UpdateTableRequest& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes. If you are adding a new global secondary index to the table,
     * <code>AttributeDefinitions</code> must include the key element(s) of the new
     * index.</p>
     */
    inline UpdateTableRequest& AddAttributeDefinitions(AttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the table to be updated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline UpdateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline UpdateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to be updated.</p>
     */
    inline UpdateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline UpdateTableRequest& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. When switching from pay-per-request to provisioned capacity, initial
     * provisioned capacity values must be set. The initial provisioned capacity values
     * are estimated based on the consumed read and write capacity of your table and
     * global secondary indexes over the past 30 minutes.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - We recommend using <code>PROVISIONED</code> for
     * predictable workloads. <code>PROVISIONED</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.ProvisionedThroughput.Manual">Provisioned
     * Mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We recommend using
     * <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.ReadWriteCapacityMode.html#HowItWorks.OnDemand">On-Demand
     * Mode</a>. </p> </li> </ul>
     */
    inline UpdateTableRequest& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}


    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline UpdateTableRequest& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>The new provisioned throughput settings for the specified table or index.</p>
     */
    inline UpdateTableRequest& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


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
    inline bool GlobalSecondaryIndexUpdatesHasBeenSet() const { return m_globalSecondaryIndexUpdatesHasBeenSet; }

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
    inline void SetGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = value; }

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
    inline void SetGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexUpdate>&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = std::move(value); }

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
    inline UpdateTableRequest& WithGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexUpdate>& value) { SetGlobalSecondaryIndexUpdates(value); return *this;}

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
    inline UpdateTableRequest& WithGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexUpdate>&& value) { SetGlobalSecondaryIndexUpdates(std::move(value)); return *this;}

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
    inline UpdateTableRequest& AddGlobalSecondaryIndexUpdates(const GlobalSecondaryIndexUpdate& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(value); return *this; }

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
    inline UpdateTableRequest& AddGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdate&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline const StreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }

    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }

    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline void SetStreamSpecification(const StreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }

    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline void SetStreamSpecification(StreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }

    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline UpdateTableRequest& WithStreamSpecification(const StreamSpecification& value) { SetStreamSpecification(value); return *this;}

    /**
     * <p>Represents the DynamoDB Streams configuration for the table.</p> 
     * <p>You receive a <code>ResourceInUseException</code> if you try to enable a
     * stream on a table that already has a stream, or if you try to disable a stream
     * on a table that doesn't have a stream.</p> 
     */
    inline UpdateTableRequest& WithStreamSpecification(StreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}


    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline const SSESpecification& GetSSESpecification() const{ return m_sSESpecification; }

    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }

    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline void SetSSESpecification(const SSESpecification& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = value; }

    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline void SetSSESpecification(SSESpecification&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::move(value); }

    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline UpdateTableRequest& WithSSESpecification(const SSESpecification& value) { SetSSESpecification(value); return *this;}

    /**
     * <p>The new server-side encryption settings for the specified table.</p>
     */
    inline UpdateTableRequest& WithSSESpecification(SSESpecification&& value) { SetSSESpecification(std::move(value)); return *this;}


    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline const Aws::Vector<ReplicationGroupUpdate>& GetReplicaUpdates() const{ return m_replicaUpdates; }

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline void SetReplicaUpdates(const Aws::Vector<ReplicationGroupUpdate>& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = value; }

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline void SetReplicaUpdates(Aws::Vector<ReplicationGroupUpdate>&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::move(value); }

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline UpdateTableRequest& WithReplicaUpdates(const Aws::Vector<ReplicationGroupUpdate>& value) { SetReplicaUpdates(value); return *this;}

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline UpdateTableRequest& WithReplicaUpdates(Aws::Vector<ReplicationGroupUpdate>&& value) { SetReplicaUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline UpdateTableRequest& AddReplicaUpdates(const ReplicationGroupUpdate& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(value); return *this; }

    /**
     * <p>A list of replica update actions (create, delete, or update) for the
     * table.</p>  <p>This property only applies to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/globaltables.V2.html">Version
     * 2019.11.21 (Current)</a> of global tables. </p> 
     */
    inline UpdateTableRequest& AddReplicaUpdates(ReplicationGroupUpdate&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline const TableClass& GetTableClass() const{ return m_tableClass; }

    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }

    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline void SetTableClass(const TableClass& value) { m_tableClassHasBeenSet = true; m_tableClass = value; }

    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline void SetTableClass(TableClass&& value) { m_tableClassHasBeenSet = true; m_tableClass = std::move(value); }

    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline UpdateTableRequest& WithTableClass(const TableClass& value) { SetTableClass(value); return *this;}

    /**
     * <p>The table class of the table to be updated. Valid values are
     * <code>STANDARD</code> and <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline UpdateTableRequest& WithTableClass(TableClass&& value) { SetTableClass(std::move(value)); return *this;}


    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }

    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }

    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }

    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline UpdateTableRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}

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
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
