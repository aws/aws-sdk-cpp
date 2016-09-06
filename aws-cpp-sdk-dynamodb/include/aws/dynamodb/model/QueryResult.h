/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>

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
   * <p>Represents the output of a <i>Query</i> operation.</p>
   */
  class AWS_DYNAMODB_API QueryResult
  {
  public:
    QueryResult();
    QueryResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    QueryResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& GetItems() const{ return m_items; }

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_items = value; }

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline void SetItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_items = value; }

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline QueryResult& WithItems(const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline QueryResult& WithItems(Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { SetItems(value); return *this;}

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline QueryResult& AddItems(const Aws::Map<Aws::String, AttributeValue>& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of item attributes that match the query criteria. Each element in
     * this array consists of an attribute name and the value for that attribute.</p>
     */
    inline QueryResult& AddItems(Aws::Map<Aws::String, AttributeValue>&& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The number of items in the response.</p> <p>If you used a <i>QueryFilter</i>
     * in the request, then <i>Count</i> is the number of items returned after the
     * filter was applied, and <i>ScannedCount</i> is the number of matching items
     * before the filter was applied.</p> <p>If you did not use a filter in the
     * request, then <i>Count</i> and <i>ScannedCount</i> are the same.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of items in the response.</p> <p>If you used a <i>QueryFilter</i>
     * in the request, then <i>Count</i> is the number of items returned after the
     * filter was applied, and <i>ScannedCount</i> is the number of matching items
     * before the filter was applied.</p> <p>If you did not use a filter in the
     * request, then <i>Count</i> and <i>ScannedCount</i> are the same.</p>
     */
    inline void SetCount(int value) { m_count = value; }

    /**
     * <p>The number of items in the response.</p> <p>If you used a <i>QueryFilter</i>
     * in the request, then <i>Count</i> is the number of items returned after the
     * filter was applied, and <i>ScannedCount</i> is the number of matching items
     * before the filter was applied.</p> <p>If you did not use a filter in the
     * request, then <i>Count</i> and <i>ScannedCount</i> are the same.</p>
     */
    inline QueryResult& WithCount(int value) { SetCount(value); return *this;}

    /**
     * <p>The number of items evaluated, before any <i>QueryFilter</i> is applied. A
     * high <i>ScannedCount</i> value with few, or no, <i>Count</i> results indicates
     * an inefficient <i>Query</i> operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#Count">Count
     * and ScannedCount</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>If
     * you did not use a filter in the request, then <i>ScannedCount</i> is the same as
     * <i>Count</i>.</p>
     */
    inline int GetScannedCount() const{ return m_scannedCount; }

    /**
     * <p>The number of items evaluated, before any <i>QueryFilter</i> is applied. A
     * high <i>ScannedCount</i> value with few, or no, <i>Count</i> results indicates
     * an inefficient <i>Query</i> operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#Count">Count
     * and ScannedCount</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>If
     * you did not use a filter in the request, then <i>ScannedCount</i> is the same as
     * <i>Count</i>.</p>
     */
    inline void SetScannedCount(int value) { m_scannedCount = value; }

    /**
     * <p>The number of items evaluated, before any <i>QueryFilter</i> is applied. A
     * high <i>ScannedCount</i> value with few, or no, <i>Count</i> results indicates
     * an inefficient <i>Query</i> operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#Count">Count
     * and ScannedCount</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>If
     * you did not use a filter in the request, then <i>ScannedCount</i> is the same as
     * <i>Count</i>.</p>
     */
    inline QueryResult& WithScannedCount(int value) { SetScannedCount(value); return *this;}

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetLastEvaluatedKey() const{ return m_lastEvaluatedKey; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline void SetLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_lastEvaluatedKey = value; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline void SetLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_lastEvaluatedKey = value; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& WithLastEvaluatedKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetLastEvaluatedKey(value); return *this;}

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& WithLastEvaluatedKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetLastEvaluatedKey(value); return *this;}

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(const Aws::String& key, const AttributeValue& value) { m_lastEvaluatedKey[key] = value; return *this; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(Aws::String&& key, const AttributeValue& value) { m_lastEvaluatedKey[key] = value; return *this; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(const Aws::String& key, AttributeValue&& value) { m_lastEvaluatedKey[key] = value; return *this; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(Aws::String&& key, AttributeValue&& value) { m_lastEvaluatedKey[key] = value; return *this; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(const char* key, AttributeValue&& value) { m_lastEvaluatedKey[key] = value; return *this; }

    /**
     * <p>The primary key of the item where the operation stopped, inclusive of the
     * previous result set. Use this value to start a new operation, excluding this
     * value in the new request.</p> <p>If <i>LastEvaluatedKey</i> is empty, then the
     * "last page" of results has been processed and there is no more data to be
     * retrieved.</p> <p>If <i>LastEvaluatedKey</i> is not empty, it does not
     * necessarily mean that there is more data in the result set. The only way to know
     * when you have reached the end of the result set is when <i>LastEvaluatedKey</i>
     * is empty.</p>
     */
    inline QueryResult& AddLastEvaluatedKey(const char* key, const AttributeValue& value) { m_lastEvaluatedKey[key] = value; return *this; }

    
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = value; }

    
    inline QueryResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    
    inline QueryResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(value); return *this;}

  private:
    Aws::Vector<Aws::Map<Aws::String, AttributeValue>> m_items;
    int m_count;
    int m_scannedCount;
    Aws::Map<Aws::String, AttributeValue> m_lastEvaluatedKey;
    ConsumedCapacity m_consumedCapacity;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
