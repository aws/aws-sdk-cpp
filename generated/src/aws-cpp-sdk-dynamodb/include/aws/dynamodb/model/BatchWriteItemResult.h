/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/WriteRequest.h>
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
  /**
   * <p>Represents the output of a <code>BatchWriteItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItemOutput">AWS
   * API Reference</a></p>
   */
  class BatchWriteItemResult
  {
  public:
    AWS_DYNAMODB_API BatchWriteItemResult() = default;
    AWS_DYNAMODB_API BatchWriteItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API BatchWriteItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchWriteItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name or table ARN and,
     * for that table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetUnprocessedItems() const { return m_unprocessedItems; }
    template<typename UnprocessedItemsT = Aws::Map<Aws::String, Aws::Vector<WriteRequest>>>
    void SetUnprocessedItems(UnprocessedItemsT&& value) { m_unprocessedItemsHasBeenSet = true; m_unprocessedItems = std::forward<UnprocessedItemsT>(value); }
    template<typename UnprocessedItemsT = Aws::Map<Aws::String, Aws::Vector<WriteRequest>>>
    BatchWriteItemResult& WithUnprocessedItems(UnprocessedItemsT&& value) { SetUnprocessedItems(std::forward<UnprocessedItemsT>(value)); return *this;}
    template<typename UnprocessedItemsKeyT = Aws::String, typename UnprocessedItemsValueT = Aws::Vector<WriteRequest>>
    BatchWriteItemResult& AddUnprocessedItems(UnprocessedItemsKeyT&& key, UnprocessedItemsValueT&& value) {
      m_unprocessedItemsHasBeenSet = true; m_unprocessedItems.emplace(std::forward<UnprocessedItemsKeyT>(key), std::forward<UnprocessedItemsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& GetItemCollectionMetrics() const { return m_itemCollectionMetrics; }
    template<typename ItemCollectionMetricsT = Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>>
    void SetItemCollectionMetrics(ItemCollectionMetricsT&& value) { m_itemCollectionMetricsHasBeenSet = true; m_itemCollectionMetrics = std::forward<ItemCollectionMetricsT>(value); }
    template<typename ItemCollectionMetricsT = Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>>
    BatchWriteItemResult& WithItemCollectionMetrics(ItemCollectionMetricsT&& value) { SetItemCollectionMetrics(std::forward<ItemCollectionMetricsT>(value)); return *this;}
    template<typename ItemCollectionMetricsKeyT = Aws::String, typename ItemCollectionMetricsValueT = Aws::Vector<ItemCollectionMetrics>>
    BatchWriteItemResult& AddItemCollectionMetrics(ItemCollectionMetricsKeyT&& key, ItemCollectionMetricsValueT&& value) {
      m_itemCollectionMetricsHasBeenSet = true; m_itemCollectionMetrics.emplace(std::forward<ItemCollectionMetricsKeyT>(key), std::forward<ItemCollectionMetricsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    BatchWriteItemResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    template<typename ConsumedCapacityT = ConsumedCapacity>
    BatchWriteItemResult& AddConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity.emplace_back(std::forward<ConsumedCapacityT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchWriteItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_unprocessedItems;
    bool m_unprocessedItemsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>> m_itemCollectionMetrics;
    bool m_itemCollectionMetricsHasBeenSet = false;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
