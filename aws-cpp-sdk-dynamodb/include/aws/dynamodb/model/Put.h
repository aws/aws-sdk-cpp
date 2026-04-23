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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
   * <p>Represents a request to perform a <code>PutItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Put">AWS API
   * Reference</a></p>
   */
  class AWS_DYNAMODB_API Put
  {
  public:
    Put();
    Put(Aws::Utils::Json::JsonView jsonValue);
    Put& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to be written by <code>PutItem</code>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item that are part of
     * an index key schema for the table, their types must match the index key schema.
     * </p>
     */
    inline Put& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }


    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline Put& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline Put& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the table in which to write the item.</p>
     */
    inline Put& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::move(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline Put& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline Put& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline Put& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}


    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Put& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }


    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::move(value); }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Put& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }


    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline Put& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Put</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE and
     * ALL_OLD.</p>
     */
    inline Put& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
