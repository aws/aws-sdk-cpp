/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/Key.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnValue.h>
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
   */
  class UpdateItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline UpdateItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline UpdateItemRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline UpdateItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Key& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Key& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Key&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline UpdateItemRequest& WithKey(const Key& value) { SetKey(value); return *this;}
    inline UpdateItemRequest& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, AttributeValueUpdate>& GetAttributeUpdates() const{ return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    inline void SetAttributeUpdates(const Aws::Map<Aws::String, AttributeValueUpdate>& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = value; }
    inline void SetAttributeUpdates(Aws::Map<Aws::String, AttributeValueUpdate>&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::move(value); }
    inline UpdateItemRequest& WithAttributeUpdates(const Aws::Map<Aws::String, AttributeValueUpdate>& value) { SetAttributeUpdates(value); return *this;}
    inline UpdateItemRequest& WithAttributeUpdates(Aws::Map<Aws::String, AttributeValueUpdate>&& value) { SetAttributeUpdates(std::move(value)); return *this;}
    inline UpdateItemRequest& AddAttributeUpdates(const Aws::String& key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, value); return *this; }
    inline UpdateItemRequest& AddAttributeUpdates(Aws::String&& key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(std::move(key), value); return *this; }
    inline UpdateItemRequest& AddAttributeUpdates(const Aws::String& key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateItemRequest& AddAttributeUpdates(Aws::String&& key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateItemRequest& AddAttributeUpdates(const char* key, AttributeValueUpdate&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, std::move(value)); return *this; }
    inline UpdateItemRequest& AddAttributeUpdates(const char* key, const AttributeValueUpdate& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }
    inline UpdateItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}
    inline UpdateItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(std::move(value)); return *this;}
    inline UpdateItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    inline UpdateItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), value); return *this; }
    inline UpdateItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline UpdateItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline UpdateItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }
    inline bool ReturnValuesHasBeenSet() const { return m_returnValuesHasBeenSet; }
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = std::move(value); }
    inline UpdateItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}
    inline UpdateItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Key m_key;
    bool m_keyHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValueUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;

    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet = false;

    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
