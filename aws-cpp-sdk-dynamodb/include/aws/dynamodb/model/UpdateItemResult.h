/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the output of an <code>UpdateItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateItemOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API UpdateItemResult
  {
  public:
    UpdateItemResult();
    UpdateItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_attributes = value; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_attributes = std::move(value); }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& WithAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& WithAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const Aws::String& key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(Aws::String&& key, const AttributeValue& value) { m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const Aws::String& key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(Aws::String&& key, AttributeValue&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const char* key, AttributeValue&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute values as they appear before or after the
     * <code>UpdateItem</code> operation, as determined by the
     * <code>ReturnValues</code> parameter.</p> <p>The <code>Attributes</code> map is
     * only present if <code>ReturnValues</code> was specified as something other than
     * <code>NONE</code> in the request. Each element represents one attribute.</p>
     */
    inline UpdateItemResult& AddAttributes(const char* key, const AttributeValue& value) { m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The capacity units consumed by the <code>UpdateItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the <code>UpdateItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the <code>UpdateItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The capacity units consumed by the <code>UpdateItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the <code>UpdateItem</code> operation. The
     * data returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
     * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline UpdateItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(std::move(value)); return *this;}


    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>UpdateItem</code> operation. <code>ItemCollectionMetrics</code> is only
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

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>UpdateItem</code> operation. <code>ItemCollectionMetrics</code> is only
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
    inline void SetItemCollectionMetrics(const ItemCollectionMetrics& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>UpdateItem</code> operation. <code>ItemCollectionMetrics</code> is only
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
    inline void SetItemCollectionMetrics(ItemCollectionMetrics&& value) { m_itemCollectionMetrics = std::move(value); }

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>UpdateItem</code> operation. <code>ItemCollectionMetrics</code> is only
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
    inline UpdateItemResult& WithItemCollectionMetrics(const ItemCollectionMetrics& value) { SetItemCollectionMetrics(value); return *this;}

    /**
     * <p>Information about item collections, if any, that were affected by the
     * <code>UpdateItem</code> operation. <code>ItemCollectionMetrics</code> is only
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
    inline UpdateItemResult& WithItemCollectionMetrics(ItemCollectionMetrics&& value) { SetItemCollectionMetrics(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AttributeValue> m_attributes;

    ConsumedCapacity m_consumedCapacity;

    ItemCollectionMetrics m_itemCollectionMetrics;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
