/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
#include <aws/dynamodb/model/BillingModeSummary.h>
#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/dynamodb/model/RestoreSummary.h>
#include <aws/dynamodb/model/SSEDescription.h>
#include <aws/dynamodb/model/ArchivalSummary.h>
#include <aws/dynamodb/model/TableClassSummary.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/TableWarmThroughputDescription.h>
#include <aws/dynamodb/model/MultiRegionConsistency.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/LocalSecondaryIndexDescription.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexDescription.h>
#include <aws/dynamodb/model/ReplicaDescription.h>
#include <aws/dynamodb/model/GlobalTableWitnessDescription.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TableDescription">AWS
   * API Reference</a></p>
   */
  class TableDescription
  {
  public:
    AWS_DYNAMODB_API TableDescription() = default;
    AWS_DYNAMODB_API TableDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const { return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    void SetAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::forward<AttributeDefinitionsT>(value); }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    TableDescription& WithAttributeDefinitions(AttributeDefinitionsT&& value) { SetAttributeDefinitions(std::forward<AttributeDefinitionsT>(value)); return *this;}
    template<typename AttributeDefinitionsT = AttributeDefinition>
    TableDescription& AddAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.emplace_back(std::forward<AttributeDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    TableDescription& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul>  <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     *  </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    TableDescription& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    TableDescription& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * table/index configuration is being updated. The table/index remains available
     * for data operations when <code>UPDATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The table is ready for use.</p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> - The KMS key used to encrypt
     * the table in inaccessible. Table operations may fail due to failure to use the
     * KMS key. DynamoDB will initiate the table archival process when a table's KMS
     * key remains inaccessible for more than seven days. </p> </li> <li> <p>
     * <code>ARCHIVING</code> - The table is being archived. Operations are not allowed
     * until archival is complete. </p> </li> <li> <p> <code>ARCHIVED</code> - The
     * table has been archived. See the ArchivalReason for more information. </p> </li>
     * </ul>
     */
    inline TableStatus GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(TableStatus value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline TableDescription& WithTableStatus(TableStatus value) { SetTableStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    TableDescription& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline const ProvisionedThroughputDescription& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughputDescription>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughputDescription>
    TableDescription& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the specified table, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetTableSizeBytes() const { return m_tableSizeBytes; }
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }
    inline TableDescription& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the specified table. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline TableDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    TableDescription& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableId() const { return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    template<typename TableIdT = Aws::String>
    void SetTableId(TableIdT&& value) { m_tableIdHasBeenSet = true; m_tableId = std::forward<TableIdT>(value); }
    template<typename TableIdT = Aws::String>
    TableDescription& WithTableId(TableIdT&& value) { SetTableId(std::forward<TableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline const BillingModeSummary& GetBillingModeSummary() const { return m_billingModeSummary; }
    inline bool BillingModeSummaryHasBeenSet() const { return m_billingModeSummaryHasBeenSet; }
    template<typename BillingModeSummaryT = BillingModeSummary>
    void SetBillingModeSummary(BillingModeSummaryT&& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = std::forward<BillingModeSummaryT>(value); }
    template<typename BillingModeSummaryT = BillingModeSummary>
    TableDescription& WithBillingModeSummary(BillingModeSummaryT&& value) { SetBillingModeSummary(std::forward<BillingModeSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents one or more local secondary indexes on the table. Each index is
     * scoped to a given partition key value. Tables with one or more local secondary
     * indexes are subject to an item collection size limit, where the amount of data
     * within a given item collection cannot exceed 10 GB. Each element is composed
     * of:</p> <ul> <li> <p> <code>IndexName</code> - The name of the local secondary
     * index.</p> </li> <li> <p> <code>KeySchema</code> - Specifies the complete index
     * key schema. The attribute names in the key schema must be between 1 and 255
     * characters (inclusive). The key schema must begin with the same partition key as
     * the table.</p> </li> <li> <p> <code>Projection</code> - Specifies attributes
     * that are copied (projected) from the table into the index. These are in addition
     * to the primary key attributes and index key attributes, which are automatically
     * projected. Each attribute specification is composed of:</p> <ul> <li> <p>
     * <code>ProjectionType</code> - One of the following:</p> <ul> <li> <p>
     * <code>KEYS_ONLY</code> - Only the index and primary keys are projected into the
     * index.</p> </li> <li> <p> <code>INCLUDE</code> - Only the specified table
     * attributes are projected into the index. The list of projected attributes is in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 100. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total. This limit only applies when you specify the ProjectionType of
     * <code>INCLUDE</code>. You still can specify the ProjectionType of
     * <code>ALL</code> to project all attributes from the source table, even if the
     * table has more than 100 attributes.</p> </li> </ul> </li> <li> <p>
     * <code>IndexSizeBytes</code> - Represents the total size of the index, in bytes.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> <li> <p> <code>ItemCount</code> -
     * Represents the number of items in the index. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p> </li> </ul> <p>If the table is in the <code>DELETING</code> state, no
     * information about indexes will be returned.</p>
     */
    inline const Aws::Vector<LocalSecondaryIndexDescription>& GetLocalSecondaryIndexes() const { return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndexDescription>>
    void SetLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::forward<LocalSecondaryIndexesT>(value); }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndexDescription>>
    TableDescription& WithLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { SetLocalSecondaryIndexes(std::forward<LocalSecondaryIndexesT>(value)); return *this;}
    template<typename LocalSecondaryIndexesT = LocalSecondaryIndexDescription>
    TableDescription& AddLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace_back(std::forward<LocalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table. It is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.) </p> <p> You can delete an
     * index that is being created during the <code>Backfilling</code> phase when
     * <code>IndexStatus</code> is set to CREATING and <code>Backfilling</code> is
     * true. You can't delete the index that is being created when
     * <code>IndexStatus</code> is set to CREATING and <code>Backfilling</code> is
     * false. (This attribute does not appear for indexes that were created during a
     * <code>CreateTable</code> operation.)</p> </li> <li> <p> <code>IndexName</code> -
     * The name of the global secondary index.</p> </li> <li> <p>
     * <code>IndexSizeBytes</code> - The total size of the global secondary index, in
     * bytes. DynamoDB updates this value approximately every six hours. Recent changes
     * might not be reflected in this value. </p> </li> <li> <p>
     * <code>IndexStatus</code> - The current status of the global secondary index:</p>
     * <ul> <li> <p> <code>CREATING</code> - The index is being created.</p> </li> <li>
     * <p> <code>UPDATING</code> - The index is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The index is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The index is ready for use.</p> </li> </ul> </li> <li> <p>
     * <code>ItemCount</code> - The number of items in the global secondary index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value. </p> </li> <li> <p> <code>KeySchema</code> -
     * Specifies the complete index key schema. The attribute names in the key schema
     * must be between 1 and 255 characters (inclusive). The key schema must begin with
     * the same partition key as the table.</p> </li> <li> <p> <code>Projection</code>
     * - Specifies attributes that are copied (projected) from the table into the
     * index. These are in addition to the primary key attributes and index key
     * attributes, which are automatically projected. Each attribute specification is
     * composed of:</p> <ul> <li> <p> <code>ProjectionType</code> - One of the
     * following:</p> <ul> <li> <p> <code>KEYS_ONLY</code> - Only the index and primary
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> - In
     * addition to the attributes described in <code>KEYS_ONLY</code>, the secondary
     * index will include other non-key attributes that you specify.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 100. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total. This limit only applies when you specify the
     * ProjectionType of <code>INCLUDE</code>. You still can specify the ProjectionType
     * of <code>ALL</code> to project all attributes from the source table, even if the
     * table has more than 100 attributes.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexDescription>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndexDescription>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndexDescription>>
    TableDescription& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = GlobalSecondaryIndexDescription>
    TableDescription& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline const StreamSpecification& GetStreamSpecification() const { return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    template<typename StreamSpecificationT = StreamSpecification>
    void SetStreamSpecification(StreamSpecificationT&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::forward<StreamSpecificationT>(value); }
    template<typename StreamSpecificationT = StreamSpecification>
    TableDescription& WithStreamSpecification(StreamSpecificationT&& value) { SetStreamSpecification(std::forward<StreamSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>Amazon Web Services customer ID</p>
     * </li> <li> <p>Table name</p> </li> <li> <p> <code>StreamLabel</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetLatestStreamLabel() const { return m_latestStreamLabel; }
    inline bool LatestStreamLabelHasBeenSet() const { return m_latestStreamLabelHasBeenSet; }
    template<typename LatestStreamLabelT = Aws::String>
    void SetLatestStreamLabel(LatestStreamLabelT&& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = std::forward<LatestStreamLabelT>(value); }
    template<typename LatestStreamLabelT = Aws::String>
    TableDescription& WithLatestStreamLabel(LatestStreamLabelT&& value) { SetLatestStreamLabel(std::forward<LatestStreamLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline const Aws::String& GetLatestStreamArn() const { return m_latestStreamArn; }
    inline bool LatestStreamArnHasBeenSet() const { return m_latestStreamArnHasBeenSet; }
    template<typename LatestStreamArnT = Aws::String>
    void SetLatestStreamArn(LatestStreamArnT&& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = std::forward<LatestStreamArnT>(value); }
    template<typename LatestStreamArnT = Aws::String>
    TableDescription& WithLatestStreamArn(LatestStreamArnT&& value) { SetLatestStreamArn(std::forward<LatestStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the version of <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/GlobalTables.html">global
     * tables</a> in use, if the table is replicated across Amazon Web Services
     * Regions.</p>
     */
    inline const Aws::String& GetGlobalTableVersion() const { return m_globalTableVersion; }
    inline bool GlobalTableVersionHasBeenSet() const { return m_globalTableVersionHasBeenSet; }
    template<typename GlobalTableVersionT = Aws::String>
    void SetGlobalTableVersion(GlobalTableVersionT&& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = std::forward<GlobalTableVersionT>(value); }
    template<typename GlobalTableVersionT = Aws::String>
    TableDescription& WithGlobalTableVersion(GlobalTableVersionT&& value) { SetGlobalTableVersion(std::forward<GlobalTableVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents replicas of the table.</p>
     */
    inline const Aws::Vector<ReplicaDescription>& GetReplicas() const { return m_replicas; }
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
    template<typename ReplicasT = Aws::Vector<ReplicaDescription>>
    void SetReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas = std::forward<ReplicasT>(value); }
    template<typename ReplicasT = Aws::Vector<ReplicaDescription>>
    TableDescription& WithReplicas(ReplicasT&& value) { SetReplicas(std::forward<ReplicasT>(value)); return *this;}
    template<typename ReplicasT = ReplicaDescription>
    TableDescription& AddReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas.emplace_back(std::forward<ReplicasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The witness Region and its current status in the MRSC global table. Only one
     * witness Region can be configured per MRSC global table.</p>
     */
    inline const Aws::Vector<GlobalTableWitnessDescription>& GetGlobalTableWitnesses() const { return m_globalTableWitnesses; }
    inline bool GlobalTableWitnessesHasBeenSet() const { return m_globalTableWitnessesHasBeenSet; }
    template<typename GlobalTableWitnessesT = Aws::Vector<GlobalTableWitnessDescription>>
    void SetGlobalTableWitnesses(GlobalTableWitnessesT&& value) { m_globalTableWitnessesHasBeenSet = true; m_globalTableWitnesses = std::forward<GlobalTableWitnessesT>(value); }
    template<typename GlobalTableWitnessesT = Aws::Vector<GlobalTableWitnessDescription>>
    TableDescription& WithGlobalTableWitnesses(GlobalTableWitnessesT&& value) { SetGlobalTableWitnesses(std::forward<GlobalTableWitnessesT>(value)); return *this;}
    template<typename GlobalTableWitnessesT = GlobalTableWitnessDescription>
    TableDescription& AddGlobalTableWitnesses(GlobalTableWitnessesT&& value) { m_globalTableWitnessesHasBeenSet = true; m_globalTableWitnesses.emplace_back(std::forward<GlobalTableWitnessesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains details for the restore.</p>
     */
    inline const RestoreSummary& GetRestoreSummary() const { return m_restoreSummary; }
    inline bool RestoreSummaryHasBeenSet() const { return m_restoreSummaryHasBeenSet; }
    template<typename RestoreSummaryT = RestoreSummary>
    void SetRestoreSummary(RestoreSummaryT&& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = std::forward<RestoreSummaryT>(value); }
    template<typename RestoreSummaryT = RestoreSummary>
    TableDescription& WithRestoreSummary(RestoreSummaryT&& value) { SetRestoreSummary(std::forward<RestoreSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline const SSEDescription& GetSSEDescription() const { return m_sSEDescription; }
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }
    template<typename SSEDescriptionT = SSEDescription>
    void SetSSEDescription(SSEDescriptionT&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::forward<SSEDescriptionT>(value); }
    template<typename SSEDescriptionT = SSEDescription>
    TableDescription& WithSSEDescription(SSEDescriptionT&& value) { SetSSEDescription(std::forward<SSEDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the table archive.</p>
     */
    inline const ArchivalSummary& GetArchivalSummary() const { return m_archivalSummary; }
    inline bool ArchivalSummaryHasBeenSet() const { return m_archivalSummaryHasBeenSet; }
    template<typename ArchivalSummaryT = ArchivalSummary>
    void SetArchivalSummary(ArchivalSummaryT&& value) { m_archivalSummaryHasBeenSet = true; m_archivalSummary = std::forward<ArchivalSummaryT>(value); }
    template<typename ArchivalSummaryT = ArchivalSummary>
    TableDescription& WithArchivalSummary(ArchivalSummaryT&& value) { SetArchivalSummary(std::forward<ArchivalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details of the table class.</p>
     */
    inline const TableClassSummary& GetTableClassSummary() const { return m_tableClassSummary; }
    inline bool TableClassSummaryHasBeenSet() const { return m_tableClassSummaryHasBeenSet; }
    template<typename TableClassSummaryT = TableClassSummary>
    void SetTableClassSummary(TableClassSummaryT&& value) { m_tableClassSummaryHasBeenSet = true; m_tableClassSummary = std::forward<TableClassSummaryT>(value); }
    template<typename TableClassSummaryT = TableClassSummary>
    TableDescription& WithTableClassSummary(TableClassSummaryT&& value) { SetTableClassSummary(std::forward<TableClassSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deletion protection is enabled (true) or disabled (false)
     * on the table.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline TableDescription& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of read and write units for the specified on-demand table.
     * If you use this parameter, you must specify <code>MaxReadRequestUnits</code>,
     * <code>MaxWriteRequestUnits</code>, or both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    TableDescription& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the warm throughput value of the base table.</p>
     */
    inline const TableWarmThroughputDescription& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = TableWarmThroughputDescription>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = TableWarmThroughputDescription>
    TableDescription& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates one of the following consistency modes for a global table:</p> <ul>
     * <li> <p> <code>EVENTUAL</code>: Indicates that the global table is configured
     * for multi-Region eventual consistency (MREC).</p> </li> <li> <p>
     * <code>STRONG</code>: Indicates that the global table is configured for
     * multi-Region strong consistency (MRSC).</p> </li> </ul> <p>If you don't specify
     * this field, the global table consistency mode defaults to <code>EVENTUAL</code>.
     * For more information about global tables consistency modes, see <a
     * href="https://docs.aws.amazon.com/V2globaltables_HowItWorks.html#V2globaltables_HowItWorks.consistency-modes">
     * Consistency modes</a> in DynamoDB developer guide. </p>
     */
    inline MultiRegionConsistency GetMultiRegionConsistency() const { return m_multiRegionConsistency; }
    inline bool MultiRegionConsistencyHasBeenSet() const { return m_multiRegionConsistencyHasBeenSet; }
    inline void SetMultiRegionConsistency(MultiRegionConsistency value) { m_multiRegionConsistencyHasBeenSet = true; m_multiRegionConsistency = value; }
    inline TableDescription& WithMultiRegionConsistency(MultiRegionConsistency value) { SetMultiRegionConsistency(value); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    TableStatus m_tableStatus{TableStatus::NOT_SET};
    bool m_tableStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    ProvisionedThroughputDescription m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    long long m_tableSizeBytes{0};
    bool m_tableSizeBytesHasBeenSet = false;

    long long m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    BillingModeSummary m_billingModeSummary;
    bool m_billingModeSummaryHasBeenSet = false;

    Aws::Vector<LocalSecondaryIndexDescription> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndexDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    StreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet = false;

    Aws::String m_latestStreamLabel;
    bool m_latestStreamLabelHasBeenSet = false;

    Aws::String m_latestStreamArn;
    bool m_latestStreamArnHasBeenSet = false;

    Aws::String m_globalTableVersion;
    bool m_globalTableVersionHasBeenSet = false;

    Aws::Vector<ReplicaDescription> m_replicas;
    bool m_replicasHasBeenSet = false;

    Aws::Vector<GlobalTableWitnessDescription> m_globalTableWitnesses;
    bool m_globalTableWitnessesHasBeenSet = false;

    RestoreSummary m_restoreSummary;
    bool m_restoreSummaryHasBeenSet = false;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet = false;

    ArchivalSummary m_archivalSummary;
    bool m_archivalSummaryHasBeenSet = false;

    TableClassSummary m_tableClassSummary;
    bool m_tableClassSummaryHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;

    TableWarmThroughputDescription m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;

    MultiRegionConsistency m_multiRegionConsistency{MultiRegionConsistency::NOT_SET};
    bool m_multiRegionConsistencyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
