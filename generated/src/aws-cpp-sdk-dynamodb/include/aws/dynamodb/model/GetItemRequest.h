/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/Key.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class GetItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API GetItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline GetItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline GetItemRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline GetItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    
    inline const Key& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Key& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Key&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline GetItemRequest& WithKey(const Key& value) { SetKey(value); return *this;}
    inline GetItemRequest& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline GetItemRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline GetItemRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline GetItemRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline GetItemRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline GetItemRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline GetItemRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Key m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
