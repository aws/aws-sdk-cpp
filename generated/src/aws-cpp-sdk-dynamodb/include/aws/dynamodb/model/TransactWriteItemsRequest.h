/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TransactWriteItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class TransactWriteItemsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API TransactWriteItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransactWriteItems"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;
    AWS_DYNAMODB_API Aws::Vector<Aws::String> GetOperationContextParams() const;

    ///@{
    /**
     * <p>An ordered array of up to 100 <code>TransactWriteItem</code> objects, each of
     * which contains a <code>ConditionCheck</code>, <code>Put</code>,
     * <code>Update</code>, or <code>Delete</code> object. These can operate on items
     * in different tables, but the tables must reside in the same Amazon Web Services
     * account and Region, and no two of them can operate on the same item. </p>
     */
    inline const Aws::Vector<TransactWriteItem>& GetTransactItems() const { return m_transactItems; }
    inline bool TransactItemsHasBeenSet() const { return m_transactItemsHasBeenSet; }
    template<typename TransactItemsT = Aws::Vector<TransactWriteItem>>
    void SetTransactItems(TransactItemsT&& value) { m_transactItemsHasBeenSet = true; m_transactItems = std::forward<TransactItemsT>(value); }
    template<typename TransactItemsT = Aws::Vector<TransactWriteItem>>
    TransactWriteItemsRequest& WithTransactItems(TransactItemsT&& value) { SetTransactItems(std::forward<TransactItemsT>(value)); return *this;}
    template<typename TransactItemsT = TransactWriteItem>
    TransactWriteItemsRequest& AddTransactItems(TransactItemsT&& value) { m_transactItemsHasBeenSet = true; m_transactItems.emplace_back(std::forward<TransactItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline ReturnConsumedCapacity GetReturnConsumedCapacity() const { return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline TransactWriteItemsRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity value) { SetReturnConsumedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections (if
     * any), that were modified during the operation and are returned in the response.
     * If set to <code>NONE</code> (the default), no statistics are returned. </p>
     */
    inline ReturnItemCollectionMetrics GetReturnItemCollectionMetrics() const { return m_returnItemCollectionMetrics; }
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }
    inline TransactWriteItemsRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics value) { SetReturnItemCollectionMetrics(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Providing a <code>ClientRequestToken</code> makes the call to
     * <code>TransactWriteItems</code> idempotent, meaning that multiple identical
     * calls have the same effect as one single call.</p> <p>Although multiple
     * identical calls using the same client request token produce the same result on
     * the server (no side effects), the responses to the calls might not be the same.
     * If the <code>ReturnConsumedCapacity</code> parameter is set, then the initial
     * <code>TransactWriteItems</code> call returns the amount of write capacity units
     * consumed in making the changes. Subsequent <code>TransactWriteItems</code> calls
     * with the same client token return the number of read capacity units consumed in
     * reading the item.</p> <p>A client request token is valid for 10 minutes after
     * the first request that uses it is completed. After 10 minutes, any request with
     * the same client token is treated as a new request. Do not resubmit the same
     * request with the same client token for more than 10 minutes, or the result might
     * not be idempotent.</p> <p>If you submit a request with the same client token but
     * a change in other parameters within the 10-minute idempotency window, DynamoDB
     * returns an <code>IdempotentParameterMismatch</code> exception.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    TransactWriteItemsRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransactWriteItem> m_transactItems;
    bool m_transactItemsHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity{ReturnConsumedCapacity::NOT_SET};
    bool m_returnConsumedCapacityHasBeenSet = false;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics{ReturnItemCollectionMetrics::NOT_SET};
    bool m_returnItemCollectionMetricsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
