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
  class AWS_DYNAMODB_API GetItemResult
  {
  public:
    GetItemResult();
    GetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_item = value; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_item = std::move(value); }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(const Aws::String& key, const AttributeValue& value) { m_item.emplace(key, value); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(Aws::String&& key, const AttributeValue& value) { m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(const Aws::String& key, AttributeValue&& value) { m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(Aws::String&& key, AttributeValue&& value) { m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(const char* key, AttributeValue&& value) { m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, as specified
     * by <code>ProjectionExpression</code>.</p>
     */
    inline GetItemResult& AddItem(const char* key, const AttributeValue& value) { m_item.emplace(key, value); return *this; }


    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Read/Write
     * Capacity Mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConsumedCapacity& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Read/Write
     * Capacity Mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Read/Write
     * Capacity Mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Read/Write
     * Capacity Mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline GetItemResult& WithConsumedCapacity(const ConsumedCapacity& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the <code>GetItem</code> operation. The data
     * returned includes the total provisioned throughput consumed, along with
     * statistics for the table and any indexes involved in the operation.
     * <code>ConsumedCapacity</code> is only returned if the
     * <code>ReturnConsumedCapacity</code> parameter was specified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Read/Write
     * Capacity Mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline GetItemResult& WithConsumedCapacity(ConsumedCapacity&& value) { SetConsumedCapacity(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AttributeValue> m_item;

    ConsumedCapacity m_consumedCapacity;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
