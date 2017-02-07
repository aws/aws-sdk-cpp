﻿/*
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
   * <p>Represents the output of a <code>DeleteItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItemOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API DeleteItemResult
  {
  public:
    DeleteItemResult();
    DeleteItemResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteItemResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = value; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the item as it appeared before the <code>DeleteItem</code> operation. This map
     * appears in the response only if <code>ReturnValues</code> was specified as
     * <code>ALL_OLD</code> in the request.</p>
     */
    inline DeleteItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes[key] = value; return *this; }

    /**
     * <p>The capacity units consumed by the <code>DeleteItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the <code>DeleteItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the <code>DeleteItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the <code>DeleteItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline DeleteItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the <code>DeleteItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline DeleteItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>DeleteItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRange</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline const ItemCollectionMetrics& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>DeleteItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRange</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(const ItemCollectionMetrics& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>DeleteItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRange</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(ItemCollectionMetrics&& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>DeleteItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRange</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline DeleteItemResult& WithItemCollectionMetrics(const ItemCollectionMetrics& value) { SetItemCollectionMetrics(value); return *this;}

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>DeleteItem</code> operation. <code>ItemCollectionMetrics</code> is only
     * returned if the <code>ReturnItemCollectionMetrics</code> parameter was
     * specified. If the table does not have any local secondary indexes, this
     * information is not returned in the response.</p> <p>Each
     * <code>ItemCollectionMetrics</code> element consists of:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item itself.</p> </li> <li>
     * <p> <code>SizeEstimateRange</code> - An estimate of item collection size, in
     * gigabytes. This value is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on that table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline DeleteItemResult& WithItemCollectionMetrics(ItemCollectionMetrics&& value) { SetItemCollectionMetrics(value); return *this;}

  private:
    Aws::Map<Aws::String, AttributeValue> m_attributes;
    ConsumedCapacity m_consumedCapacity;
    ItemCollectionMetrics m_itemCollectionMetrics;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
