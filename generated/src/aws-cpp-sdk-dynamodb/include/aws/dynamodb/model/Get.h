/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Get
  {
  public:
    AWS_DYNAMODB_API Get();
    AWS_DYNAMODB_API Get(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Get& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects that
     * specifies the primary key of the item to retrieve.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline Get& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}
    inline Get& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}
    inline Get& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    inline Get& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }
    inline Get& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline Get& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }
    inline Get& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline Get& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table from which to retrieve the specified item. You can also
     * provide the Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline Get& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline Get& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline Get& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies one or more attributes of the specified item to
     * retrieve from the table. The attributes in the expression must be separated by
     * commas. If no attribute names are specified, then all attributes of the
     * specified item are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }
    inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = std::move(value); }
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }
    inline Get& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}
    inline Get& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(std::move(value)); return *this;}
    inline Get& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in the
     * ProjectionExpression parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }
    inline Get& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}
    inline Get& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}
    inline Get& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    inline Get& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline Get& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline Get& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline Get& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline Get& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline Get& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
