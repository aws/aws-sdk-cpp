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
#include <aws/dynamodb/model/WarmThroughput.h>
#include <aws/dynamodb/model/OnDemandThroughput.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/LocalSecondaryIndex.h>
#include <aws/dynamodb/model/GlobalSecondaryIndex.h>
#include <aws/dynamodb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateTable</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateTableInput">AWS
   * API Reference</a></p>
   */
  class CreateTableRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API CreateTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const { return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    void SetAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::forward<AttributeDefinitionsT>(value); }
    template<typename AttributeDefinitionsT = Aws::Vector<AttributeDefinition>>
    CreateTableRequest& WithAttributeDefinitions(AttributeDefinitionsT&& value) { SetAttributeDefinitions(std::forward<AttributeDefinitionsT>(value)); return *this;}
    template<typename AttributeDefinitionsT = AttributeDefinition>
    CreateTableRequest& AddAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.emplace_back(std::forward<AttributeDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table to create. You can also provide the Amazon Resource
     * Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    CreateTableRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attributes that make up the primary key for a table or an
     * index. The attributes in <code>KeySchema</code> must also be defined in the
     * <code>AttributeDefinitions</code> array. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html">Data
     * Model</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each
     * <code>KeySchemaElement</code> in the array is composed of:</p> <ul> <li> <p>
     * <code>AttributeName</code> - The name of this key attribute.</p> </li> <li> <p>
     * <code>KeyType</code> - The role that the key attribute will assume:</p> <ul>
     * <li> <p> <code>HASH</code> - partition key</p> </li> <li> <p> <code>RANGE</code>
     * - sort key</p> </li> </ul> </li> </ul>  <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> 
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<KeySchemaElement>>
    CreateTableRequest& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = KeySchemaElement>
    CreateTableRequest& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more local secondary indexes (the maximum is 5) to be created on the
     * table. Each index is scoped to a given partition key value. There is a 10 GB
     * size limit per partition key value; otherwise, the size of a local secondary
     * index is unconstrained.</p> <p>Each local secondary index in the array includes
     * the following:</p> <ul> <li> <p> <code>IndexName</code> - The name of the local
     * secondary index. Must be unique only for this table.</p> <p/> </li> <li> <p>
     * <code>KeySchema</code> - Specifies the key schema for the local secondary index.
     * The key schema must begin with the same partition key as the table.</p> </li>
     * <li> <p> <code>Projection</code> - Specifies attributes that are copied
     * (projected) from the table into the index. These are in addition to the primary
     * key attributes and index key attributes, which are automatically projected. Each
     * attribute specification is composed of:</p> <ul> <li> <p>
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
     * table has more than 100 attributes.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<LocalSecondaryIndex>& GetLocalSecondaryIndexes() const { return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndex>>
    void SetLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::forward<LocalSecondaryIndexesT>(value); }
    template<typename LocalSecondaryIndexesT = Aws::Vector<LocalSecondaryIndex>>
    CreateTableRequest& WithLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { SetLocalSecondaryIndexes(std::forward<LocalSecondaryIndexesT>(value)); return *this;}
    template<typename LocalSecondaryIndexesT = LocalSecondaryIndex>
    CreateTableRequest& AddLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace_back(std::forward<LocalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more global secondary indexes (the maximum is 20) to be created on the
     * table. Each global secondary index in the array includes the following:</p> <ul>
     * <li> <p> <code>IndexName</code> - The name of the global secondary index. Must
     * be unique only for this table.</p> <p/> </li> <li> <p> <code>KeySchema</code> -
     * Specifies the key schema for the global secondary index.</p> </li> <li> <p>
     * <code>Projection</code> - Specifies attributes that are copied (projected) from
     * the table into the index. These are in addition to the primary key attributes
     * and index key attributes, which are automatically projected. Each attribute
     * specification is composed of:</p> <ul> <li> <p> <code>ProjectionType</code> -
     * One of the following:</p> <ul> <li> <p> <code>KEYS_ONLY</code> - Only the index
     * and primary keys are projected into the index.</p> </li> <li> <p>
     * <code>INCLUDE</code> - Only the specified table attributes are projected into
     * the index. The list of projected attributes is in
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
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndex>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<GlobalSecondaryIndex>>
    CreateTableRequest& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = GlobalSecondaryIndex>
    CreateTableRequest& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
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
    inline CreateTableRequest& WithBillingMode(BillingMode value) { SetBillingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property.</p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = ProvisionedThroughput>
    CreateTableRequest& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for DynamoDB Streams on the table. These settings consist
     * of:</p> <ul> <li> <p> <code>StreamEnabled</code> - Indicates whether DynamoDB
     * Streams is to be enabled (true) or disabled (false).</p> </li> <li> <p>
     * <code>StreamViewType</code> - When an item in the table is modified,
     * <code>StreamViewType</code> determines what information is written to the
     * table's stream. Valid values for <code>StreamViewType</code> are:</p> <ul> <li>
     * <p> <code>KEYS_ONLY</code> - Only the key attributes of the modified item are
     * written to the stream.</p> </li> <li> <p> <code>NEW_IMAGE</code> - The entire
     * item, as it appears after it was modified, is written to the stream.</p> </li>
     * <li> <p> <code>OLD_IMAGE</code> - The entire item, as it appeared before it was
     * modified, is written to the stream.</p> </li> <li> <p>
     * <code>NEW_AND_OLD_IMAGES</code> - Both the new and the old item images of the
     * item are written to the stream.</p> </li> </ul> </li> </ul>
     */
    inline const StreamSpecification& GetStreamSpecification() const { return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    template<typename StreamSpecificationT = StreamSpecification>
    void SetStreamSpecification(StreamSpecificationT&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::forward<StreamSpecificationT>(value); }
    template<typename StreamSpecificationT = StreamSpecification>
    CreateTableRequest& WithStreamSpecification(StreamSpecificationT&& value) { SetStreamSpecification(std::forward<StreamSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline const SSESpecification& GetSSESpecification() const { return m_sSESpecification; }
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }
    template<typename SSESpecificationT = SSESpecification>
    void SetSSESpecification(SSESpecificationT&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::forward<SSESpecificationT>(value); }
    template<typename SSESpecificationT = SSESpecification>
    CreateTableRequest& WithSSESpecification(SSESpecificationT&& value) { SetSSESpecification(std::forward<SSESpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTableRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTableRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The table class of the new table. Valid values are <code>STANDARD</code> and
     * <code>STANDARD_INFREQUENT_ACCESS</code>.</p>
     */
    inline TableClass GetTableClass() const { return m_tableClass; }
    inline bool TableClassHasBeenSet() const { return m_tableClassHasBeenSet; }
    inline void SetTableClass(TableClass value) { m_tableClassHasBeenSet = true; m_tableClass = value; }
    inline CreateTableRequest& WithTableClass(TableClass value) { SetTableClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline CreateTableRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput (in read units per second and write units per
     * second) for creating a table.</p>
     */
    inline const WarmThroughput& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = WarmThroughput>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = WarmThroughput>
    CreateTableRequest& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Web Services resource-based policy document in JSON format that
     * will be attached to the table.</p> <p>When you attach a resource-based policy
     * while creating a table, the policy application is <i>strongly
     * consistent</i>.</p> <p>The maximum size supported for a resource-based policy
     * document is 20 KB. DynamoDB counts whitespaces when calculating the size of a
     * policy against this limit. For a full list of all considerations that apply for
     * resource-based policies, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/rbac-considerations.html">Resource-based
     * policy considerations</a>.</p>  <p>You need to specify the
     * <code>CreateTable</code> and <code>PutResourcePolicy</code> IAM actions for
     * authorizing a user to create a table with a resource-based policy.</p> 
     */
    inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    template<typename ResourcePolicyT = Aws::String>
    void SetResourcePolicy(ResourcePolicyT&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::forward<ResourcePolicyT>(value); }
    template<typename ResourcePolicyT = Aws::String>
    CreateTableRequest& WithResourcePolicy(ResourcePolicyT&& value) { SetResourcePolicy(std::forward<ResourcePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of read and write units for the specified table in
     * on-demand capacity mode. If you use this parameter, you must specify
     * <code>MaxReadRequestUnits</code>, <code>MaxWriteRequestUnits</code>, or
     * both.</p>
     */
    inline const OnDemandThroughput& GetOnDemandThroughput() const { return m_onDemandThroughput; }
    inline bool OnDemandThroughputHasBeenSet() const { return m_onDemandThroughputHasBeenSet; }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    void SetOnDemandThroughput(OnDemandThroughputT&& value) { m_onDemandThroughputHasBeenSet = true; m_onDemandThroughput = std::forward<OnDemandThroughputT>(value); }
    template<typename OnDemandThroughputT = OnDemandThroughput>
    CreateTableRequest& WithOnDemandThroughput(OnDemandThroughputT&& value) { SetOnDemandThroughput(std::forward<OnDemandThroughputT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Aws::Vector<LocalSecondaryIndex> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet = false;

    Aws::Vector<GlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    BillingMode m_billingMode{BillingMode::NOT_SET};
    bool m_billingModeHasBeenSet = false;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    StreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet = false;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TableClass m_tableClass{TableClass::NOT_SET};
    bool m_tableClassHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    WarmThroughput m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    OnDemandThroughput m_onDemandThroughput;
    bool m_onDemandThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
