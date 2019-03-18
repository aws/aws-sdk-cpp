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
   * <p>Represents a request to perform an <code>UpdateItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Update">AWS API
   * Reference</a></p>
   */
  class AWS_DYNAMODB_API Update
  {
  public:
    Update();
    Update(Aws::Utils::Json::JsonView jsonValue);
    Update& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The primary key of the item to be updated. Each element consists of an
     * attribute name and a value for that attribute.</p>
     */
    inline Update& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }


    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline const Aws::String& GetUpdateExpression() const{ return m_updateExpression; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline bool UpdateExpressionHasBeenSet() const { return m_updateExpressionHasBeenSet; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline void SetUpdateExpression(const Aws::String& value) { m_updateExpressionHasBeenSet = true; m_updateExpression = value; }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline void SetUpdateExpression(Aws::String&& value) { m_updateExpressionHasBeenSet = true; m_updateExpression = std::move(value); }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline void SetUpdateExpression(const char* value) { m_updateExpressionHasBeenSet = true; m_updateExpression.assign(value); }

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline Update& WithUpdateExpression(const Aws::String& value) { SetUpdateExpression(value); return *this;}

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline Update& WithUpdateExpression(Aws::String&& value) { SetUpdateExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that defines one or more attributes to be updated, the action
     * to be performed on them, and new value(s) for them.</p>
     */
    inline Update& WithUpdateExpression(const char* value) { SetUpdateExpression(value); return *this;}


    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline Update& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline Update& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Name of the table for the <code>UpdateItem</code> request.</p>
     */
    inline Update& WithTableName(const char* value) { SetTableName(value); return *this;}


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
    inline Update& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline Update& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional update to
     * succeed.</p>
     */
    inline Update& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}


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
    inline Update& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression.</p>
     */
    inline Update& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }


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
    inline Update& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p>
     */
    inline Update& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }


    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline Update& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}

    /**
     * <p>Use <code>ReturnValuesOnConditionCheckFailure</code> to get the item
     * attributes if the <code>Update</code> condition fails. For
     * <code>ReturnValuesOnConditionCheckFailure</code>, the valid values are: NONE,
     * ALL_OLD, UPDATED_OLD, ALL_NEW, UPDATED_NEW.</p>
     */
    inline Update& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet;

    Aws::String m_updateExpression;
    bool m_updateExpressionHasBeenSet;

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
