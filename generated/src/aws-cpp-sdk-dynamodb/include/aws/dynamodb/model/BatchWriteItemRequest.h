/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/WriteRequest.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class BatchWriteItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API BatchWriteItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchWriteItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetRequestItems() const{ return m_requestItems; }
    inline bool RequestItemsHasBeenSet() const { return m_requestItemsHasBeenSet; }
    inline void SetRequestItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }
    inline void SetRequestItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { m_requestItemsHasBeenSet = true; m_requestItems = std::move(value); }
    inline BatchWriteItemRequest& WithRequestItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { SetRequestItems(value); return *this;}
    inline BatchWriteItemRequest& WithRequestItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { SetRequestItems(std::move(value)); return *this;}
    inline BatchWriteItemRequest& AddRequestItems(const Aws::String& key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, value); return *this; }
    inline BatchWriteItemRequest& AddRequestItems(Aws::String&& key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(std::move(key), value); return *this; }
    inline BatchWriteItemRequest& AddRequestItems(const Aws::String& key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemRequest& AddRequestItems(Aws::String&& key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchWriteItemRequest& AddRequestItems(const char* key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemRequest& AddRequestItems(const char* key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_requestItems;
    bool m_requestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
