/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DYNAMODB_API CreateTableRequest : public DynamoDBRequest
  {
  public:
    CreateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline void SetAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline CreateTableRequest& WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline CreateTableRequest& WithAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline CreateTableRequest& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of attributes that describe the key schema for the table and
     * indexes.</p>
     */
    inline CreateTableRequest& AddAttributeDefinitions(AttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the table to create.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to create.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table to create.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to create.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table to create.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to create.</p>
     */
    inline CreateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to create.</p>
     */
    inline CreateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to create.</p>
     */
    inline CreateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

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
     * - sort key</p> </li> </ul> </li> </ul> <note> <p>The partition key of an item is
     * also known as its <i>hash attribute</i>. The term "hash attribute" derives from
     * the DynamoDB usage of an internal hash function to evenly distribute data items
     * across partitions, based on their partition key values.</p> <p>The sort key of
     * an item is also known as its <i>range attribute</i>. The term "range attribute"
     * derives from the way DynamoDB stores items with the same partition key
     * physically close together, in sorted order by the sort key value.</p> </note>
     * <p>For a simple primary key (partition key), you must provide exactly one
     * element with a <code>KeyType</code> of <code>HASH</code>.</p> <p>For a composite
     * primary key (partition key and sort key), you must provide exactly two elements,
     * in this order: The first element must have a <code>KeyType</code> of
     * <code>HASH</code>, and the second element must have a <code>KeyType</code> of
     * <code>RANGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#WorkingWithTables.primary.key">Working
     * with Tables</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<LocalSecondaryIndex>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndex>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline void SetLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndex>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline CreateTableRequest& WithLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndex>& value) { SetLocalSecondaryIndexes(value); return *this;}

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline CreateTableRequest& WithLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndex>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline CreateTableRequest& AddLocalSecondaryIndexes(const LocalSecondaryIndex& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }

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
     * total.</p> </li> </ul> </li> </ul>
     */
    inline CreateTableRequest& AddLocalSecondaryIndexes(LocalSecondaryIndex&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }


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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline const Aws::Vector<GlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline CreateTableRequest& WithGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline CreateTableRequest& WithGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline CreateTableRequest& AddGlobalSecondaryIndexes(const GlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

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
     * total.</p> </li> </ul> </li> <li> <p> <code>ProvisionedThroughput</code> - The
     * provisioned throughput settings for the global secondary index, consisting of
     * read and write capacity units.</p> </li> </ul>
     */
    inline CreateTableRequest& AddGlobalSecondaryIndexes(GlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline const BillingMode& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(const BillingMode& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline void SetBillingMode(BillingMode&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline CreateTableRequest& WithBillingMode(const BillingMode& value) { SetBillingMode(value); return *this;}

    /**
     * <p>Controls how you are charged for read and write throughput and how you manage
     * capacity. This setting can be changed later.</p> <ul> <li> <p>
     * <code>PROVISIONED</code> - Sets the billing mode to <code>PROVISIONED</code>. We
     * recommend using <code>PROVISIONED</code> for predictable workloads.</p> </li>
     * <li> <p> <code>PAY_PER_REQUEST</code> - Sets the billing mode to
     * <code>PAY_PER_REQUEST</code>. We recommend using <code>PAY_PER_REQUEST</code>
     * for unpredictable workloads. </p> </li> </ul>
     */
    inline CreateTableRequest& WithBillingMode(BillingMode&& value) { SetBillingMode(std::move(value)); return *this;}


    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Represents the provisioned throughput settings for a specified table or
     * index. The settings can be modified using the <code>UpdateTable</code>
     * operation.</p> <p> If you set BillingMode as <code>PROVISIONED</code>, you must
     * specify this property. If you set BillingMode as <code>PAY_PER_REQUEST</code>,
     * you cannot specify this property. </p> <p>For current minimum and maximum
     * provisioned throughput values, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Limits</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline CreateTableRequest& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


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
    inline const StreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }

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
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }

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
    inline void SetStreamSpecification(const StreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }

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
    inline void SetStreamSpecification(StreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }

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
    inline CreateTableRequest& WithStreamSpecification(const StreamSpecification& value) { SetStreamSpecification(value); return *this;}

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
    inline CreateTableRequest& WithStreamSpecification(StreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}


    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline const SSESpecification& GetSSESpecification() const{ return m_sSESpecification; }

    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }

    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline void SetSSESpecification(const SSESpecification& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = value; }

    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline void SetSSESpecification(SSESpecification&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::move(value); }

    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline CreateTableRequest& WithSSESpecification(const SSESpecification& value) { SetSSESpecification(value); return *this;}

    /**
     * <p>Represents the settings used to enable server-side encryption.</p>
     */
    inline CreateTableRequest& WithSSESpecification(SSESpecification&& value) { SetSSESpecification(std::move(value)); return *this;}


    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline CreateTableRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline CreateTableRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline CreateTableRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs to label the table. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Tagging.html">Tagging
     * for DynamoDB</a>.</p>
     */
    inline CreateTableRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    Aws::Vector<LocalSecondaryIndex> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet;

    Aws::Vector<GlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet;

    BillingMode m_billingMode;
    bool m_billingModeHasBeenSet;

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;

    StreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
