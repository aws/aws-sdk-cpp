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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/AttributeValueUpdate.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>UpdateItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateItemInput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API UpdateItemRequest : public DynamoDBRequest
  {
  public:
    UpdateItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateItem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline UpdateItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline UpdateItemRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table containing the item to update.</p>
     */
    inline UpdateItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p> <p>For the primary key, you
     * must provide all of the attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline UpdateItemRequest& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }


    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValueUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetAttributeUpdates(const Aws::Map<Aws::String, AttributeValueUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetAttributeUpdates(Aws::Map<Aws::String, AttributeValueUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithAttributeUpdates(const Aws::Map<Aws::String, AttributeValueUpdate>& value) { SetAttributeUpdates(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithAttributeUpdates(Aws::Map<Aws::String, AttributeValueUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(const Aws::String& key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, value); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(Aws::String&& key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(const Aws::String& key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(Aws::String&& key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(const char* key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>UpdateExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributeUpdates.html">AttributeUpdates</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddAttributeUpdates(const char* key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, value); return *this; }


    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(std::move(value)); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }


    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConditionalOperator& GetConditionalOperator() const{ return m_conditionalOperator; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ConditionalOperatorHasBeenSet() const { return m_conditionalOperatorHasBeenSet; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionalOperator(const ConditionalOperator& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionalOperator(ConditionalOperator&& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = std::move(value); }

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(std::move(value)); return *this;}


    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline bool ReturnValuesHasBeenSet() const { return m_returnValuesHasBeenSet; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = std::move(value); }

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline UpdateItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}

    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appear before or after they are updated. For <code>UpdateItem</code>, the valid
     * values are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code>
     * is not specified, or if its value is <code>NONE</code>, then nothing is
     * returned. (This setting is the default for <code>ReturnValues</code>.)</p> </li>
     * <li> <p> <code>ALL_OLD</code> - Returns all of the attributes of the item, as
     * they appeared before the UpdateItem operation.</p> </li> <li> <p>
     * <code>UPDATED_OLD</code> - Returns only the updated attributes, as they appeared
     * before the UpdateItem operation.</p> </li> <li> <p> <code>ALL_NEW</code> -
     * Returns all of the attributes of the item, as they appear after the UpdateItem
     * operation.</p> </li> <li> <p> <code>UPDATED_NEW</code> - Returns only the
     * updated attributes, as they appear after the UpdateItem operation.</p> </li>
     * </ul> <p>There is no additional cost associated with requesting a return value
     * aside from the small network and processing overhead of receiving a larger
     * response. No read capacity units are consumed.</p> <p>The values returned are
     * strongly consistent.</p>
     */
    inline UpdateItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(std::move(value)); return *this;}


    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    
    inline UpdateItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline UpdateItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}


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
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }

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
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = std::move(value); }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline UpdateItemRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline UpdateItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(std::move(value)); return *this;}


    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetUpdateExpression() const{ return m_updateExpression; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool UpdateExpressionHasBeenSet() const { return m_updateExpressionHasBeenSet; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetUpdateExpression(const Aws::String& value) { m_updateExpressionHasBeenSet = true; m_updateExpression = value; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetUpdateExpression(Aws::String&& value) { m_updateExpressionHasBeenSet = true; m_updateExpression = std::move(value); }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetUpdateExpression(const char* value) { m_updateExpressionHasBeenSet = true; m_updateExpression.assign(value); }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithUpdateExpression(const Aws::String& value) { SetUpdateExpression(value); return *this;}

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithUpdateExpression(Aws::String&& value) { SetUpdateExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new values for them.</p> <p>The following action
     * values are available for <code>UpdateExpression</code>.</p> <ul> <li> <p>
     * <code>SET</code> - Adds one or more attributes and values to an item. If any of
     * these attributes already exist, they are replaced by the new values. You can
     * also use <code>SET</code> to add or subtract from an attribute that is of type
     * Number. For example: <code>SET myNum = myNum + :val</code> </p> <p>
     * <code>SET</code> supports the following functions:</p> <ul> <li> <p>
     * <code>if_not_exists (path, operand)</code> - if the item does not contain an
     * attribute at the specified path, then <code>if_not_exists</code> evaluates to
     * operand; otherwise, it evaluates to path. You can use this function to avoid
     * overwriting an attribute that may already be present in the item.</p> </li> <li>
     * <p> <code>list_append (operand, operand)</code> - evaluates to a list with a new
     * element added to it. You can append the new element to the start or the end of
     * the list by reversing the order of the operands.</p> </li> </ul> <p>These
     * function names are case-sensitive.</p> </li> <li> <p> <code>REMOVE</code> -
     * Removes one or more attributes from an item.</p> </li> <li> <p> <code>ADD</code>
     * - Adds the specified value to the item, if the attribute does not already exist.
     * If the attribute does exist, then the behavior of <code>ADD</code> depends on
     * the data type of the attribute:</p> <ul> <li> <p>If the existing attribute is a
     * number, and if <code>Value</code> is also a number, then <code>Value</code> is
     * mathematically added to the existing attribute. If <code>Value</code> is a
     * negative number, then it is subtracted from the existing attribute.</p> <note>
     * <p>If you use <code>ADD</code> to increment or decrement a number value for an
     * item that doesn't exist before the update, DynamoDB uses <code>0</code> as the
     * initial value.</p> <p>Similarly, if you use <code>ADD</code> for an existing
     * item to increment or decrement an attribute value that doesn't exist before the
     * update, DynamoDB uses <code>0</code> as the initial value. For example, suppose
     * that the item you want to update doesn't have an attribute named
     * <code>itemcount</code>, but you decide to <code>ADD</code> the number
     * <code>3</code> to this attribute anyway. DynamoDB will create the
     * <code>itemcount</code> attribute, set its initial value to <code>0</code>, and
     * finally add <code>3</code> to it. The result will be a new
     * <code>itemcount</code> attribute in the item, with a value of
     * <code>3</code>.</p> </note> </li> <li> <p>If the existing data type is a set and
     * if <code>Value</code> is also a set, then <code>Value</code> is added to the
     * existing set. For example, if the attribute value is the set <code>[1,2]</code>,
     * and the <code>ADD</code> action specified <code>[3]</code>, then the final
     * attribute value is <code>[1,2,3]</code>. An error occurs if an <code>ADD</code>
     * action is specified for a set attribute and the attribute type specified does
     * not match the existing set type. </p> <p>Both sets must have the same primitive
     * data type. For example, if the existing data type is a set of strings, the
     * <code>Value</code> must also be a set of strings.</p> </li> </ul> <important>
     * <p>The <code>ADD</code> action only supports Number and set data types. In
     * addition, <code>ADD</code> can only be used on top-level attributes, not nested
     * attributes.</p> </important> </li> <li> <p> <code>DELETE</code> - Deletes an
     * element from a set.</p> <p>If a set of values is specified, then those values
     * are subtracted from the old set. For example, if the attribute value was the set
     * <code>[a,b,c]</code> and the <code>DELETE</code> action specifies
     * <code>[a,c]</code>, then the final attribute value is <code>[b]</code>.
     * Specifying an empty set is an error.</p> <important> <p>The <code>DELETE</code>
     * action only supports set data types. In addition, <code>DELETE</code> can only
     * be used on top-level attributes, not nested attributes.</p> </important> </li>
     * </ul> <p>You can have many actions in a single expression, such as the
     * following: <code>SET a=:value1, b=:value2 DELETE :value3, :value4,
     * :value5</code> </p> <p>For more information on update expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.Modifying.html">Modifying
     * Items and Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithUpdateExpression(const char* value) { SetUpdateExpression(value); return *this;}


    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::move(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p> <p>An expression can contain any of the following:</p> <ul> <li>
     * <p>Functions: <code>attribute_exists | attribute_not_exists | attribute_type |
     * contains | begins_with | size</code> </p> <p>These function names are
     * case-sensitive.</p> </li> <li> <p>Comparison operators: <code>= | &lt;&gt; |
     * &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN </code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}


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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.) To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }


    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::move(value); }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <code>ProductStatus</code> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet;

    Aws::Map<Aws::String, AttributeValueUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet;

    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet;

    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet;

    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet;

    Aws::String m_updateExpression;
    bool m_updateExpressionHasBeenSet;

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
