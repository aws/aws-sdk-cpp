/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class PutItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API PutItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline PutItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline PutItemRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline PutItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }
    inline PutItemRequest& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}
    inline PutItemRequest& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}
    inline PutItemRequest& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }
    inline PutItemRequest& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }
    inline PutItemRequest& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }
    inline PutItemRequest& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }
    inline PutItemRequest& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }
    inline PutItemRequest& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }
    inline PutItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}
    inline PutItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(std::move(value)); return *this;}
    inline PutItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    inline PutItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), value); return *this; }
    inline PutItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline PutItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), std::move(value)); return *this; }
    inline PutItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline PutItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }
    inline bool ReturnValuesHasBeenSet() const { return m_returnValuesHasBeenSet; }
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = std::move(value); }
    inline PutItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}
    inline PutItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;

    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet = false;

    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
