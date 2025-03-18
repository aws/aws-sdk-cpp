/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/TransactGetItem.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class TransactGetItemsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API TransactGetItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransactGetItems"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;
    AWS_DYNAMODB_API Aws::Vector<Aws::String> GetOperationContextParams() const;

    ///@{
    /**
     * <p>An ordered array of up to 100 <code>TransactGetItem</code> objects, each of
     * which contains a <code>Get</code> structure.</p>
     */
    inline const Aws::Vector<TransactGetItem>& GetTransactItems() const { return m_transactItems; }
    inline bool TransactItemsHasBeenSet() const { return m_transactItemsHasBeenSet; }
    template<typename TransactItemsT = Aws::Vector<TransactGetItem>>
    void SetTransactItems(TransactItemsT&& value) { m_transactItemsHasBeenSet = true; m_transactItems = std::forward<TransactItemsT>(value); }
    template<typename TransactItemsT = Aws::Vector<TransactGetItem>>
    TransactGetItemsRequest& WithTransactItems(TransactItemsT&& value) { SetTransactItems(std::forward<TransactItemsT>(value)); return *this;}
    template<typename TransactItemsT = TransactGetItem>
    TransactGetItemsRequest& AddTransactItems(TransactItemsT&& value) { m_transactItemsHasBeenSet = true; m_transactItems.emplace_back(std::forward<TransactItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value of <code>TOTAL</code> causes consumed capacity information to be
     * returned, and a value of <code>NONE</code> prevents that information from being
     * returned. No other value is valid.</p>
     */
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline TransactGetItemsRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}
  private:

    Aws::Vector<TransactGetItem> m_transactItems;
    bool m_transactItemsHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
