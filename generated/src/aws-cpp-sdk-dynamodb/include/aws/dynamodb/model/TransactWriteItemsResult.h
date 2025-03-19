/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class TransactWriteItemsResult
  {
  public:
    AWS_DYNAMODB_API TransactWriteItemsResult() = default;
    AWS_DYNAMODB_API TransactWriteItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API TransactWriteItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The capacity units consumed by the entire <code>TransactWriteItems</code>
     * operation. The values of the list are ordered according to the ordering of the
     * <code>TransactItems</code> request parameter. </p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    TransactWriteItemsResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    template<typename ConsumedCapacityT = ConsumedCapacity>
    TransactWriteItemsResult& AddConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity.emplace_back(std::forward<ConsumedCapacityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tables that were processed by <code>TransactWriteItems</code> and,
     * for each table, information about any item collections that were affected by
     * individual <code>UpdateItem</code>, <code>PutItem</code>, or
     * <code>DeleteItem</code> operations. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& GetItemCollectionMetrics() const { return m_itemCollectionMetrics; }
    template<typename ItemCollectionMetricsT = Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>>
    void SetItemCollectionMetrics(ItemCollectionMetricsT&& value) { m_itemCollectionMetricsHasBeenSet = true; m_itemCollectionMetrics = std::forward<ItemCollectionMetricsT>(value); }
    template<typename ItemCollectionMetricsT = Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>>
    TransactWriteItemsResult& WithItemCollectionMetrics(ItemCollectionMetricsT&& value) { SetItemCollectionMetrics(std::forward<ItemCollectionMetricsT>(value)); return *this;}
    template<typename ItemCollectionMetricsKeyT = Aws::String, typename ItemCollectionMetricsValueT = Aws::Vector<ItemCollectionMetrics>>
    TransactWriteItemsResult& AddItemCollectionMetrics(ItemCollectionMetricsKeyT&& key, ItemCollectionMetricsValueT&& value) {
      m_itemCollectionMetricsHasBeenSet = true; m_itemCollectionMetrics.emplace(std::forward<ItemCollectionMetricsKeyT>(key), std::forward<ItemCollectionMetricsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TransactWriteItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>> m_itemCollectionMetrics;
    bool m_itemCollectionMetricsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
