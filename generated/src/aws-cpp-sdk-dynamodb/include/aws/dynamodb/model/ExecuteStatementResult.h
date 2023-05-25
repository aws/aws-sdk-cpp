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
    AWS_DYNAMODB_API ExecuteStatementResult();
    AWS_DYNAMODB_API ExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_items = value; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_items = std::move(value); }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_items.push_back(value); return *this; }

    /**
     * <p>If a read operation was used, this property will contain the result of the
     * read operation; a map of attribute names and their values. For the write
     * operations this value will be empty.</p>
     */
    inline ExecuteStatementResult& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response of a read request exceeds the response payload limit DynamoDB
     * will set this value in the response. If set, you can use that this value in the
     * subsequent request to get the remaining results.</p>
     */
    inline ExecuteStatementResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = std::move(value); }

    
    inline ExecuteStatementResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    
    inline ExecuteStatementResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(std::move(value)); return *this;}


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
    inline const Aws::Map<Aws::String, AttributeValue>& GetLastEvaluatedKey() const{ return m_lastEvaluatedKey; }

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
    inline void SetLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_lastEvaluatedKey = value; }

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
    inline void SetLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_lastEvaluatedKey = std::move(value); }

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
    inline ExecuteStatementResult& WithLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetLastEvaluatedKey(value); return *this;}

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
    inline ExecuteStatementResult& WithLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetLastEvaluatedKey(std::move(value)); return *this;}

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(const Aws::String& key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(key, value); return *this; }

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(Aws::String&& key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(std::move(key), value); return *this; }

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(const Aws::String& key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(key, std::move(value)); return *this; }

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(Aws::String&& key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(std::move(key), std::move(value)); return *this; }

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(const char* key, AttributeValue&& value) { m_lastEvaluatedKey.emplace(key, std::move(value)); return *this; }

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
    inline ExecuteStatementResult& AddLastEvaluatedKey(const char* key, const AttributeValue& value) { m_lastEvaluatedKey.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;

    Aws::String m_nextToken;

    ConsumedCapacity m_consumedCapacity;

    Aws::Map<Aws::String, AttributeValue> m_lastEvaluatedKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
