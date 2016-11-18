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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
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
   * <p>Represents the output of a <i>PutItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API PutItemResult
  {
  public:
    PutItemResult();
    PutItemResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutItemResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = value; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The attribute values as they appeared before the <i>PutItem</i> operation,
     * but only if <i>ReturnValues</i> is specified as <code>ALL_OLD</code> in the
     * request. Each element consists of an attribute name and an attribute value.</p>
     */
    inline PutItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = value; }

    
    inline PutItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    
    inline PutItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>Information about item collections, if any, that were affected by the
     * operation. <i>ItemCollectionMetrics</i> is only returned if the request asked
     * for it. If the table does not have any local secondary indexes, this information
     * is not returned in the response.</p> <p>Each <i>ItemCollectionMetrics</i>
     * element consists of:</p> <ul> <li> <p> <i>ItemCollectionKey</i> - The partition
     * key value of the item collection. This is the same as the partition key value of
     * the item itself.</p> </li> <li> <p> <i>SizeEstimateRange</i> - An estimate of
     * item collection size, in gigabytes. This value is a two-element array containing
     * a lower bound and an upper bound for the estimate. The estimate includes the
     * size of all the items in the table, plus the size of all attributes projected
     * into all of the local secondary indexes on that table. Use this estimate to
     * measure whether a local secondary index is approaching its size limit.</p>
     * <p>The estimate is subject to change over time; therefore, do not rely on the
     * precision or accuracy of the estimate.</p> </li> </ul>
     */
    inline const ItemCollectionMetrics& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * operation. <i>ItemCollectionMetrics</i> is only returned if the request asked
     * for it. If the table does not have any local secondary indexes, this information
     * is not returned in the response.</p> <p>Each <i>ItemCollectionMetrics</i>
     * element consists of:</p> <ul> <li> <p> <i>ItemCollectionKey</i> - The partition
     * key value of the item collection. This is the same as the partition key value of
     * the item itself.</p> </li> <li> <p> <i>SizeEstimateRange</i> - An estimate of
     * item collection size, in gigabytes. This value is a two-element array containing
     * a lower bound and an upper bound for the estimate. The estimate includes the
     * size of all the items in the table, plus the size of all attributes projected
     * into all of the local secondary indexes on that table. Use this estimate to
     * measure whether a local secondary index is approaching its size limit.</p>
     * <p>The estimate is subject to change over time; therefore, do not rely on the
     * precision or accuracy of the estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(const ItemCollectionMetrics& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * operation. <i>ItemCollectionMetrics</i> is only returned if the request asked
     * for it. If the table does not have any local secondary indexes, this information
     * is not returned in the response.</p> <p>Each <i>ItemCollectionMetrics</i>
     * element consists of:</p> <ul> <li> <p> <i>ItemCollectionKey</i> - The partition
     * key value of the item collection. This is the same as the partition key value of
     * the item itself.</p> </li> <li> <p> <i>SizeEstimateRange</i> - An estimate of
     * item collection size, in gigabytes. This value is a two-element array containing
     * a lower bound and an upper bound for the estimate. The estimate includes the
     * size of all the items in the table, plus the size of all attributes projected
     * into all of the local secondary indexes on that table. Use this estimate to
     * measure whether a local secondary index is approaching its size limit.</p>
     * <p>The estimate is subject to change over time; therefore, do not rely on the
     * precision or accuracy of the estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(ItemCollectionMetrics&& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * operation. <i>ItemCollectionMetrics</i> is only returned if the request asked
     * for it. If the table does not have any local secondary indexes, this information
     * is not returned in the response.</p> <p>Each <i>ItemCollectionMetrics</i>
     * element consists of:</p> <ul> <li> <p> <i>ItemCollectionKey</i> - The partition
     * key value of the item collection. This is the same as the partition key value of
     * the item itself.</p> </li> <li> <p> <i>SizeEstimateRange</i> - An estimate of
     * item collection size, in gigabytes. This value is a two-element array containing
     * a lower bound and an upper bound for the estimate. The estimate includes the
     * size of all the items in the table, plus the size of all attributes projected
     * into all of the local secondary indexes on that table. Use this estimate to
     * measure whether a local secondary index is approaching its size limit.</p>
     * <p>The estimate is subject to change over time; therefore, do not rely on the
     * precision or accuracy of the estimate.</p> </li> </ul>
     */
    inline PutItemResult& WithItemCollectionMetrics(const ItemCollectionMetrics& value) { SetItemCollectionMetrics(value); return *this;}

    /**
     * <p>Information about item collections, if any, that were affected by the
     * operation. <i>ItemCollectionMetrics</i> is only returned if the request asked
     * for it. If the table does not have any local secondary indexes, this information
     * is not returned in the response.</p> <p>Each <i>ItemCollectionMetrics</i>
     * element consists of:</p> <ul> <li> <p> <i>ItemCollectionKey</i> - The partition
     * key value of the item collection. This is the same as the partition key value of
     * the item itself.</p> </li> <li> <p> <i>SizeEstimateRange</i> - An estimate of
     * item collection size, in gigabytes. This value is a two-element array containing
     * a lower bound and an upper bound for the estimate. The estimate includes the
     * size of all the items in the table, plus the size of all attributes projected
     * into all of the local secondary indexes on that table. Use this estimate to
     * measure whether a local secondary index is approaching its size limit.</p>
     * <p>The estimate is subject to change over time; therefore, do not rely on the
     * precision or accuracy of the estimate.</p> </li> </ul>
     */
    inline PutItemResult& WithItemCollectionMetrics(ItemCollectionMetrics&& value) { SetItemCollectionMetrics(value); return *this;}

  private:
    Aws::Map<Aws::String, AttributeValue> m_attributes;
    ConsumedCapacity m_consumedCapacity;
    ItemCollectionMetrics m_itemCollectionMetrics;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
