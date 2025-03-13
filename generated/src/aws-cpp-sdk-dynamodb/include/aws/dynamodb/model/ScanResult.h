/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
   * <p>Represents the output of a <code>Scan</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ScanOutput">AWS
   * API Reference</a></p>
   */
  class ScanResult
  {
  public:
    AWS_DYNAMODB_API ScanResult() = default;
    AWS_DYNAMODB_API ScanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ScanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of item attributes that match the scan criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>
    ScanResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Aws::Map<Aws::String, AttributeValue>>
    ScanResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of items in the response.</p> <p>If you set
     * <code>ScanFilter</code> in the request, then <code>Count</code> is the number of
     * items returned after the filter was applied, and <code>ScannedCount</code> is
     * the number of matching items before the filter was applied.</p> <p>If you did
     * not use a filter in the request, then <code>Count</code> is the same as
     * <code>ScannedCount</code>.</p>
     */
    inline int GetCount() const { return m_count; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ScanResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items evaluated, before any <code>ScanFilter</code> is applied.
     * A high <code>ScannedCount</code> value with few, or no, <code>Count</code>
     * results indicates an inefficient <code>Scan</code> operation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#Count">Count
     * and ScannedCount</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>If
     * you did not use a filter in the request, then <code>ScannedCount</code> is the
     * same as <code>Count</code>.</p>
     */
    inline int GetScannedCount() const { return m_scannedCount; }
    inline void SetScannedCount(int value) { m_scannedCountHasBeenSet = true; m_scannedCount = value; }
    inline ScanResult& WithScannedCount(int value) { SetScannedCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <code>LastEvaluatedKey</code> is empty, then
     * the "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <code>LastEvaluatedKey</code> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when
     * <code>LastEvaluatedKey</code> is empty.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetLastEvaluatedKey() const { return m_lastEvaluatedKey; }
    template<typename LastEvaluatedKeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetLastEvaluatedKey(LastEvaluatedKeyT&& value) { m_lastEvaluatedKeyHasBeenSet = true; m_lastEvaluatedKey = std::forward<LastEvaluatedKeyT>(value); }
    template<typename LastEvaluatedKeyT = Aws::Map<Aws::String, AttributeValue>>
    ScanResult& WithLastEvaluatedKey(LastEvaluatedKeyT&& value) { SetLastEvaluatedKey(std::forward<LastEvaluatedKeyT>(value)); return *this;}
    template<typename LastEvaluatedKeyKeyT = Aws::String, typename LastEvaluatedKeyValueT = AttributeValue>
    ScanResult& AddLastEvaluatedKey(LastEvaluatedKeyKeyT&& key, LastEvaluatedKeyValueT&& value) {
      m_lastEvaluatedKeyHasBeenSet = true; m_lastEvaluatedKey.emplace(std::forward<LastEvaluatedKeyKeyT>(key), std::forward<LastEvaluatedKeyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the <code>Scan</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/read-write-operations.html#read-operation-consumption">Capacity
     * unit consumption for read operations</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = ConsumedCapacity>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = ConsumedCapacity>
    ScanResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ScanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;
    bool m_itemsHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    int m_scannedCount{0};
    bool m_scannedCountHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_lastEvaluatedKey;
    bool m_lastEvaluatedKeyHasBeenSet = false;

    ConsumedCapacity m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
