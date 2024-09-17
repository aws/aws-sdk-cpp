/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
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
   * <p>Represents the output of a <code>PutItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PutItemOutput">AWS
   * API Reference</a></p>
   */
  class PutItemResult
  {
  public:
    AWS_DYNAMODB_API PutItemResult();
    AWS_DYNAMODB_API PutItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API PutItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attribute values as they appeared before the <code>PutItem</code>
     * operation, but only if <code>ReturnValues</code> is specified as
     * <code>ALL_OLD</code> in the request. Each element consists of an attribute name
     * and an attribute value.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = std::move(value); }
    inline PutItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}
    inline PutItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(std::move(value)); return *this;}
    inline PutItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }
    inline PutItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes.emplace(std::move(key), value); return *this; }
    inline PutItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }
    inline PutItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the <code>PutItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/read-write-operations.html#write-operation-consumption">Capacity
     * unity consumption for write operations</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = std::move(value); }
    inline PutItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}
    inline PutItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>PutItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRangeGB</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline const ItemCollectionMetrics& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }
    inline void SetItemCollectionMetrics(const ItemCollectionMetrics& value) { m_itemCollectionMetrics = value; }
    inline void SetItemCollectionMetrics(ItemCollectionMetrics&& value) { m_itemCollectionMetrics = std::move(value); }
    inline PutItemResult& WithItemCollectionMetrics(const ItemCollectionMetrics& value) { SetItemCollectionMetrics(value); return *this;}
    inline PutItemResult& WithItemCollectionMetrics(ItemCollectionMetrics&& value) { SetItemCollectionMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_attributes;

    ConsumedCapacity m_consumedCapacity;

    ItemCollectionMetrics m_itemCollectionMetrics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
