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
   * <p>Specifies an item and related attribute values to retrieve in a
   * <code>TransactGetItem</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/Get">AWS API
   * Reference</a></p>
   */
  class AWS_DYNAMODB_API Get
  {
  public:
    Get();
    Get(Aws::Utils::Json::JsonView jsonValue);
    Get& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline Get& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }


    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline Get& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline Get& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table from which to retrieve the specified item.</p>
     */
    inline Get& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = std::move(value); }

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline Get& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline Get& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(std::move(value)); return *this;}

    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline Get& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}


    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline Get& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
