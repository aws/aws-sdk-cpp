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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ProvisionedThroughputDescription.h>
#include <aws/dynamodb/model/BillingModeSummary.h>
#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/dynamodb/model/RestoreSummary.h>
#include <aws/dynamodb/model/SSEDescription.h>
#include <aws/dynamodb/model/AttributeDefinition.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
#include <aws/dynamodb/model/LocalSecondaryIndexDescription.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexDescription.h>
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
  class AWS_DYNAMODB_API TableDescription
  {
  public:
    TableDescription();
    TableDescription(Aws::Utils::Json::JsonView jsonValue);
    TableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<AttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline void SetAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline void SetAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline TableDescription& WithAttributeDefinitions(const Aws::Vector<AttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline TableDescription& WithAttributeDefinitions(Aws::Vector<AttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline TableDescription& AddAttributeDefinitions(const AttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of <code>AttributeDefinition</code> objects. Each of these objects
     * describes one attribute in the table and index key schema.</p> <p>Each
     * <code>AttributeDefinition</code> object in this array is composed of:</p> <ul>
     * <li> <p> <code>AttributeName</code> - The name of the attribute.</p> </li> <li>
     * <p> <code>AttributeType</code> - The data type for the attribute.</p> </li>
     * </ul>
     */
    inline TableDescription& AddAttributeDefinitions(AttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableDescription& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<KeySchemaElement>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeySchema(const Aws::Vector<KeySchemaElement>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeySchema(Aws::Vector<KeySchemaElement>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline TableDescription& WithKeySchema(const Aws::Vector<KeySchemaElement>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline TableDescription& WithKeySchema(Aws::Vector<KeySchemaElement>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline TableDescription& AddKeySchema(const KeySchemaElement& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The primary key structure for the table. Each <code>KeySchemaElement</code>
     * consists of:</p> <ul> <li> <p> <code>AttributeName</code> - The name of the
     * attribute.</p> </li> <li> <p> <code>KeyType</code> - The role of the
     * attribute:</p> <ul> <li> <p> <code>HASH</code> - partition key</p> </li> <li>
     * <p> <code>RANGE</code> - sort key</p> </li> </ul> <note> <p>The partition key of
     * an item is also known as its <i>hash attribute</i>. The term "hash attribute"
     * derives from DynamoDB's usage of an internal hash function to evenly distribute
     * data items across partitions, based on their partition key values.</p> <p>The
     * sort key of an item is also known as its <i>range attribute</i>. The term "range
     * attribute" derives from the way DynamoDB stores items with the same partition
     * key physically close together, in sorted order by the sort key value.</p>
     * </note> </li> </ul> <p>For more information about primary keys, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline TableDescription& AddKeySchema(KeySchemaElement&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline const TableStatus& GetTableStatus() const{ return m_tableStatus; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline void SetTableStatus(const TableStatus& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline void SetTableStatus(TableStatus&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline TableDescription& WithTableStatus(const TableStatus& value) { SetTableStatus(value); return *this;}

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline TableDescription& WithTableStatus(TableStatus&& value) { SetTableStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline TableDescription& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the table was created, in <a
     * href="http://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline TableDescription& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline const ProvisionedThroughputDescription& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughputDescription& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline void SetProvisionedThroughput(ProvisionedThroughputDescription&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline TableDescription& WithProvisionedThroughput(const ProvisionedThroughputDescription& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>The provisioned throughput settings for the table, consisting of read and
     * write capacity units, along with data about increases and decreases.</p>
     */
    inline TableDescription& WithProvisionedThroughput(ProvisionedThroughputDescription&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    /**
     * <p>The total size of the specified table, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }

    /**
     * <p>The total size of the specified table, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }

    /**
     * <p>The total size of the specified table, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }

    /**
     * <p>The total size of the specified table, in bytes. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline TableDescription& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}


    /**
     * <p>The number of items in the specified table. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of items in the specified table. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The number of items in the specified table. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of items in the specified table. DynamoDB updates this value
     * approximately every six hours. Recent changes might not be reflected in this
     * value.</p>
     */
    inline TableDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline TableDescription& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline TableDescription& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the table.</p>
     */
    inline TableDescription& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline TableDescription& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline TableDescription& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the table for which the backup was created. </p>
     */
    inline TableDescription& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline const BillingModeSummary& GetBillingModeSummary() const{ return m_billingModeSummary; }

    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline bool BillingModeSummaryHasBeenSet() const { return m_billingModeSummaryHasBeenSet; }

    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline void SetBillingModeSummary(const BillingModeSummary& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = value; }

    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline void SetBillingModeSummary(BillingModeSummary&& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = std::move(value); }

    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline TableDescription& WithBillingModeSummary(const BillingModeSummary& value) { SetBillingModeSummary(value); return *this;}

    /**
     * <p>Contains the details for the read/write capacity mode.</p>
     */
    inline TableDescription& WithBillingModeSummary(BillingModeSummary&& value) { SetBillingModeSummary(std::move(value)); return *this;}


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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline const Aws::Vector<LocalSecondaryIndexDescription>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexDescription>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline void SetLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexDescription>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& WithLocalSecondaryIndexes(const Aws::Vector<LocalSecondaryIndexDescription>& value) { SetLocalSecondaryIndexes(value); return *this;}

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& WithLocalSecondaryIndexes(Aws::Vector<LocalSecondaryIndexDescription>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& AddLocalSecondaryIndexes(const LocalSecondaryIndexDescription& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }

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
     * attributes are projected into the index. The list of projected attributes are in
     * <code>NonKeyAttributes</code>.</p> </li> <li> <p> <code>ALL</code> - All of the
     * table attributes are projected into the index.</p> </li> </ul> </li> <li> <p>
     * <code>NonKeyAttributes</code> - A list of one or more non-key attribute names
     * that are projected into the secondary index. The total count of attributes
     * provided in <code>NonKeyAttributes</code>, summed across all of the secondary
     * indexes, must not exceed 20. If you project the same attribute into two
     * different indexes, this counts as two distinct attributes when determining the
     * total.</p> </li> </ul> </li> <li> <p> <code>IndexSizeBytes</code> - Represents
     * the total size of the index, in bytes. DynamoDB updates this value approximately
     * every six hours. Recent changes might not be reflected in this value.</p> </li>
     * <li> <p> <code>ItemCount</code> - Represents the number of items in the index.
     * DynamoDB updates this value approximately every six hours. Recent changes might
     * not be reflected in this value.</p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& AddLocalSecondaryIndexes(LocalSecondaryIndexDescription&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexDescription>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexDescription>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexDescription>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& WithGlobalSecondaryIndexes(const Aws::Vector<GlobalSecondaryIndexDescription>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& WithGlobalSecondaryIndexes(Aws::Vector<GlobalSecondaryIndexDescription>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& AddGlobalSecondaryIndexes(const GlobalSecondaryIndexDescription& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>The global secondary indexes, if any, on the table. Each index is scoped to a
     * given partition key value. Each element is composed of:</p> <ul> <li> <p>
     * <code>Backfilling</code> - If true, then the index is currently in the
     * backfilling phase. Backfilling occurs only when a new global secondary index is
     * added to the table; it is the process by which DynamoDB populates the new index
     * with data from the table. (This attribute does not appear for indexes that were
     * created during a <code>CreateTable</code> operation.)</p> </li> <li> <p>
     * <code>IndexName</code> - The name of the global secondary index.</p> </li> <li>
     * <p> <code>IndexSizeBytes</code> - The total size of the global secondary index,
     * in bytes. DynamoDB updates this value approximately every six hours. Recent
     * changes might not be reflected in this value. </p> </li> <li> <p>
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
     * keys are projected into the index.</p> </li> <li> <p> <code>INCLUDE</code> -
     * Only the specified table attributes are projected into the index. The list of
     * projected attributes are in <code>NonKeyAttributes</code>.</p> </li> <li> <p>
     * <code>ALL</code> - All of the table attributes are projected into the index.</p>
     * </li> </ul> </li> <li> <p> <code>NonKeyAttributes</code> - A list of one or more
     * non-key attribute names that are projected into the secondary index. The total
     * count of attributes provided in <code>NonKeyAttributes</code>, summed across all
     * of the secondary indexes, must not exceed 20. If you project the same attribute
     * into two different indexes, this counts as two distinct attributes when
     * determining the total.</p> </li> </ul> </li> <li> <p>
     * <code>ProvisionedThroughput</code> - The provisioned throughput settings for the
     * global secondary index, consisting of read and write capacity units, along with
     * data about increases and decreases. </p> </li> </ul> <p>If the table is in the
     * <code>DELETING</code> state, no information about indexes will be returned.</p>
     */
    inline TableDescription& AddGlobalSecondaryIndexes(GlobalSecondaryIndexDescription&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline const StreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline void SetStreamSpecification(const StreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline void SetStreamSpecification(StreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline TableDescription& WithStreamSpecification(const StreamSpecification& value) { SetStreamSpecification(value); return *this;}

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline TableDescription& WithStreamSpecification(StreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}


    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetLatestStreamLabel() const{ return m_latestStreamLabel; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline bool LatestStreamLabelHasBeenSet() const { return m_latestStreamLabelHasBeenSet; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline void SetLatestStreamLabel(const Aws::String& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = value; }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline void SetLatestStreamLabel(Aws::String&& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = std::move(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline void SetLatestStreamLabel(const char* value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel.assign(value); }

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline TableDescription& WithLatestStreamLabel(const Aws::String& value) { SetLatestStreamLabel(value); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline TableDescription& WithLatestStreamLabel(Aws::String&& value) { SetLatestStreamLabel(std::move(value)); return *this;}

    /**
     * <p>A timestamp, in ISO 8601 format, for this stream.</p> <p>Note that
     * <code>LatestStreamLabel</code> is not a unique identifier for the stream,
     * because it is possible that a stream from another table might have the same
     * timestamp. However, the combination of the following three elements is
     * guaranteed to be unique:</p> <ul> <li> <p>the AWS customer ID.</p> </li> <li>
     * <p>the table name.</p> </li> <li> <p>the <code>StreamLabel</code>.</p> </li>
     * </ul>
     */
    inline TableDescription& WithLatestStreamLabel(const char* value) { SetLatestStreamLabel(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline const Aws::String& GetLatestStreamArn() const{ return m_latestStreamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline bool LatestStreamArnHasBeenSet() const { return m_latestStreamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline void SetLatestStreamArn(const Aws::String& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline void SetLatestStreamArn(Aws::String&& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline void SetLatestStreamArn(const char* value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline TableDescription& WithLatestStreamArn(const Aws::String& value) { SetLatestStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline TableDescription& WithLatestStreamArn(Aws::String&& value) { SetLatestStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the latest stream for
     * this table.</p>
     */
    inline TableDescription& WithLatestStreamArn(const char* value) { SetLatestStreamArn(value); return *this;}


    /**
     * <p>Contains details for the restore.</p>
     */
    inline const RestoreSummary& GetRestoreSummary() const{ return m_restoreSummary; }

    /**
     * <p>Contains details for the restore.</p>
     */
    inline bool RestoreSummaryHasBeenSet() const { return m_restoreSummaryHasBeenSet; }

    /**
     * <p>Contains details for the restore.</p>
     */
    inline void SetRestoreSummary(const RestoreSummary& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = value; }

    /**
     * <p>Contains details for the restore.</p>
     */
    inline void SetRestoreSummary(RestoreSummary&& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = std::move(value); }

    /**
     * <p>Contains details for the restore.</p>
     */
    inline TableDescription& WithRestoreSummary(const RestoreSummary& value) { SetRestoreSummary(value); return *this;}

    /**
     * <p>Contains details for the restore.</p>
     */
    inline TableDescription& WithRestoreSummary(RestoreSummary&& value) { SetRestoreSummary(std::move(value)); return *this;}


    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline const SSEDescription& GetSSEDescription() const{ return m_sSEDescription; }

    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline bool SSEDescriptionHasBeenSet() const { return m_sSEDescriptionHasBeenSet; }

    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline void SetSSEDescription(const SSEDescription& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = value; }

    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline void SetSSEDescription(SSEDescription&& value) { m_sSEDescriptionHasBeenSet = true; m_sSEDescription = std::move(value); }

    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline TableDescription& WithSSEDescription(const SSEDescription& value) { SetSSEDescription(value); return *this;}

    /**
     * <p>The description of the server-side encryption status on the specified
     * table.</p>
     */
    inline TableDescription& WithSSEDescription(SSEDescription&& value) { SetSSEDescription(std::move(value)); return *this;}

  private:

    Aws::Vector<AttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Vector<KeySchemaElement> m_keySchema;
    bool m_keySchemaHasBeenSet;

    TableStatus m_tableStatus;
    bool m_tableStatusHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    ProvisionedThroughputDescription m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet;

    long long m_tableSizeBytes;
    bool m_tableSizeBytesHasBeenSet;

    long long m_itemCount;
    bool m_itemCountHasBeenSet;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet;

    BillingModeSummary m_billingModeSummary;
    bool m_billingModeSummaryHasBeenSet;

    Aws::Vector<LocalSecondaryIndexDescription> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet;

    Aws::Vector<GlobalSecondaryIndexDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet;

    StreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet;

    Aws::String m_latestStreamLabel;
    bool m_latestStreamLabelHasBeenSet;

    Aws::String m_latestStreamArn;
    bool m_latestStreamArnHasBeenSet;

    RestoreSummary m_restoreSummary;
    bool m_restoreSummaryHasBeenSet;

    SSEDescription m_sSEDescription;
    bool m_sSEDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
