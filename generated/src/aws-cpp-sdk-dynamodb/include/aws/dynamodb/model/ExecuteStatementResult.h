/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ExecuteStatementResult
  {
  public:
    AWS_DYNAMODB_API ExecuteStatementResult() = default;
    AWS_DYNAMODB_API ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>
    ExecuteStatementResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = Aws::Map<Aws::String, AttributeValue>>
    ExecuteStatementResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ExecuteStatementResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConsumedCapacity& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = ConsumedCapacity>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = ConsumedCapacity>
    ExecuteStatementResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request. If <code>LastEvaluatedKey</code> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved. If <code>LastEvaluatedKey</code> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when
     * <code>LastEvaluatedKey</code> is empty. </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetLastEvaluatedKey() const { return m_lastEvaluatedKey; }
    template<typename LastEvaluatedKeyT = Aws::Map<Aws::String, AttributeValue>>
    void SetLastEvaluatedKey(LastEvaluatedKeyT&& value) { m_lastEvaluatedKeyHasBeenSet = true; m_lastEvaluatedKey = std::forward<LastEvaluatedKeyT>(value); }
    template<typename LastEvaluatedKeyT = Aws::Map<Aws::String, AttributeValue>>
    ExecuteStatementResult& WithLastEvaluatedKey(LastEvaluatedKeyT&& value) { SetLastEvaluatedKey(std::forward<LastEvaluatedKeyT>(value)); return *this;}
    template<typename LastEvaluatedKeyKeyT = Aws::String, typename LastEvaluatedKeyValueT = AttributeValue>
    ExecuteStatementResult& AddLastEvaluatedKey(LastEvaluatedKeyKeyT&& key, LastEvaluatedKeyValueT&& value) {
      m_lastEvaluatedKeyHasBeenSet = true; m_lastEvaluatedKey.emplace(std::forward<LastEvaluatedKeyKeyT>(key), std::forward<LastEvaluatedKeyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ConsumedCapacity m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_lastEvaluatedKey;
    bool m_lastEvaluatedKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
