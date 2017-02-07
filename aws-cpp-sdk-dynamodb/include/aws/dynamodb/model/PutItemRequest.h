﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>PutItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItemInput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API PutItemRequest : public DynamoDBRequest
  {
  public:
    PutItemRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline PutItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline PutItemRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table to contain the item.</p>
     */
    inline PutItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name/value pairs, one for each attribute. Only the primary
     * key attributes are required; you can optionally provide other attribute
     * name-value pairs for the item.</p> <p>You must provide all of the attributes for
     * the primary key. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide both values for both the partition key and the sort key.</p> <p>If you
     * specify any attributes that are part of an index key, then the data types for
     * those attributes must match those of the schema in the table's attribute
     * definition.</p> <p>For more information about primary keys, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataModel.html#DataModelPrimaryKey">Primary
     * Key</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>Each element in
     * the <code>Item</code> map is an <code>AttributeValue</code> object.</p>
     */
    inline PutItemRequest& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpresssion</code> instead.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were updated with the <code>PutItem</code> request. For
     * <code>PutItem</code>, the valid values are:</p> <ul> <li> <p> <code>NONE</code>
     * - If <code>ReturnValues</code> is not specified, or if its value is
     * <code>NONE</code>, then nothing is returned. (This setting is the default for
     * <code>ReturnValues</code>.)</p> </li> <li> <p> <code>ALL_OLD</code> - If
     * <code>PutItem</code> overwrote an attribute name-value pair, then the content of
     * the old item is returned.</p> </li> </ul> <note> <p>The
     * <code>ReturnValues</code> parameter is used by several DynamoDB operations;
     * however, <code>PutItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were updated with the <code>PutItem</code> request. For
     * <code>PutItem</code>, the valid values are:</p> <ul> <li> <p> <code>NONE</code>
     * - If <code>ReturnValues</code> is not specified, or if its value is
     * <code>NONE</code>, then nothing is returned. (This setting is the default for
     * <code>ReturnValues</code>.)</p> </li> <li> <p> <code>ALL_OLD</code> - If
     * <code>PutItem</code> overwrote an attribute name-value pair, then the content of
     * the old item is returned.</p> </li> </ul> <note> <p>The
     * <code>ReturnValues</code> parameter is used by several DynamoDB operations;
     * however, <code>PutItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were updated with the <code>PutItem</code> request. For
     * <code>PutItem</code>, the valid values are:</p> <ul> <li> <p> <code>NONE</code>
     * - If <code>ReturnValues</code> is not specified, or if its value is
     * <code>NONE</code>, then nothing is returned. (This setting is the default for
     * <code>ReturnValues</code>.)</p> </li> <li> <p> <code>ALL_OLD</code> - If
     * <code>PutItem</code> overwrote an attribute name-value pair, then the content of
     * the old item is returned.</p> </li> </ul> <note> <p>The
     * <code>ReturnValues</code> parameter is used by several DynamoDB operations;
     * however, <code>PutItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were updated with the <code>PutItem</code> request. For
     * <code>PutItem</code>, the valid values are:</p> <ul> <li> <p> <code>NONE</code>
     * - If <code>ReturnValues</code> is not specified, or if its value is
     * <code>NONE</code>, then nothing is returned. (This setting is the default for
     * <code>ReturnValues</code>.)</p> </li> <li> <p> <code>ALL_OLD</code> - If
     * <code>PutItem</code> overwrote an attribute name-value pair, then the content of
     * the old item is returned.</p> </li> </ul> <note> <p>The
     * <code>ReturnValues</code> parameter is used by several DynamoDB operations;
     * however, <code>PutItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline PutItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were updated with the <code>PutItem</code> request. For
     * <code>PutItem</code>, the valid values are:</p> <ul> <li> <p> <code>NONE</code>
     * - If <code>ReturnValues</code> is not specified, or if its value is
     * <code>NONE</code>, then nothing is returned. (This setting is the default for
     * <code>ReturnValues</code>.)</p> </li> <li> <p> <code>ALL_OLD</code> - If
     * <code>PutItem</code> overwrote an attribute name-value pair, then the content of
     * the old item is returned.</p> </li> </ul> <note> <p>The
     * <code>ReturnValues</code> parameter is used by several DynamoDB operations;
     * however, <code>PutItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline PutItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(value); return *this;}

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline PutItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline PutItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline const ReturnItemCollectionMetrics& GetReturnItemCollectionMetrics() const{ return m_returnItemCollectionMetrics; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline void SetReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline PutItemRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline PutItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConditionalOperator& GetConditionalOperator() const{ return m_conditionalOperator; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionalOperator(const ConditionalOperator& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionalOperator(ConditionalOperator&& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithConditionExpression(Aws::String&& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>PutItem</code> operation to succeed.</p> <p>An expression can contain any
     * of the following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN |
     * IN</code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code>
     * </p> </li> </ul> <p>For more information on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline PutItemRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet;
    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet;
    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet;
    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet;
    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
