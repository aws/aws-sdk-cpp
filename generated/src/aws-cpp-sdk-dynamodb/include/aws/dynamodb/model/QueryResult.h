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
   * <p>Represents the output of a <code>Query</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/QueryOutput">AWS
   * API Reference</a></p>
   */
  class QueryResult
  {
  public:
    AWS_DYNAMODB_API QueryResult();
    AWS_DYNAMODB_API QueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API QueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_items = std::move(value); }
    inline QueryResult& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}
    inline QueryResult& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(std::move(value)); return *this;}
    inline QueryResult& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_items.push_back(value); return *this; }
    inline QueryResult& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of items in the response.</p> <p>If you used a
     * <code>QueryFilter</code> in the request, then <code>Count</code> is the number
     * of items returned after the filter was applied, and <code>ScannedCount</code> is
     * the number of matching items before the filter was applied.</p> <p>If you did
     * not use a filter in the request, then <code>Count</code> and
     * <code>ScannedCount</code> are the same.</p>
     */
    inline int GetCount() const{ return m_count; }
    inline void SetCount(int value) { m_count = value; }
    inline QueryResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items evaluated, before any <code>QueryFilter</code> is
     * applied. A high <code>ScannedCount</code> value with few, or no,
     * <code>Count</code> results indicates an inefficient <code>Query</code>
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Scan.html#Scan.Count">Count
     * and ScannedCount</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>If
     * you did not use a filter in the request, then <code>ScannedCount</code> is the
     * same as <code>Count</code>.</p>
     */
    inline int GetScannedCount() const{ return m_scannedCount; }
    inline void SetScannedCount(int value) { m_scannedCount = value; }
    inline QueryResult& WithScannedCount(int value) { SetScannedCount(value); return *this;}
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
    inline const Aws::Map<Aws::String, AttributeValue>& GetLastEvaluatedKey() const{ return m_lastEvaluatedKey; }
    inline void SetLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_lastEvaluatedKey = value; }
    inline void SetLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_lastEvaluatedKey = std::move(value); }
    inline QueryResult& WithLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetLastEvaluatedKey(value); return *this;}
    inline QueryResult& WithLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetLastEvaluatedKey(std::move(value)); return *this;}
    inline QueryResult& AddLastEvaluatedKey(const Aws::String& key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(key, value); return *this; }
    inline QueryResult& AddLastEvaluatedKey(Aws::String&& key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(std::move(key), value); return *this; }
    inline QueryResult& AddLastEvaluatedKey(const Aws::String& key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(key, std::move(value)); return *this; }
    inline QueryResult& AddLastEvaluatedKey(Aws::String&& key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryResult& AddLastEvaluatedKey(const char* key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(key, std::move(value)); return *this; }
    inline QueryResult& AddLastEvaluatedKey(const char* key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the <code>Query</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/read-write-operations.html#read-operation-consumption">Capacity
     * unit consumption for read operations</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = std::move(value); }
    inline QueryResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}
    inline QueryResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline QueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline QueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline QueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;

    int m_count;

    int m_scannedCount;

    Aws::Map<Aws::String, AttributeValue> m_lastEvaluatedKey;

    ConsumedCapacity m_consumedCapacity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
