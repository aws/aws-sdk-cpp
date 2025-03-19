/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
   * <p>Represents the output of a <code>GetItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GetItemOutput">AWS
   * API Reference</a></p>
   */
  class GetItemResult
  {
  public:
    AWS_DYNAMODB_API GetItemResult() = default;
    AWS_DYNAMODB_API GetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API GetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const { return m_item; }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    GetItemResult& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemKeyT = Aws::String, typename ItemValueT = AttributeValue>
    GetItemResult& AddItem(ItemKeyT&& key, ItemValueT&& value) {
      m_itemHasBeenSet = true; m_item.emplace(std::forward<ItemKeyT>(key), std::forward<ItemValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
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
    GetItemResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;

    ConsumedCapacity m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
