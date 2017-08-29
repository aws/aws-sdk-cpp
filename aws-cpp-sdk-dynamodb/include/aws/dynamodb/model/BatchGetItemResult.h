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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/KeysAndAttributes.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
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
   * <p>Represents the output of a <code>BatchGetItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchGetItemOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BatchGetItemResult
  {
  public:
    BatchGetItemResult();
    BatchGetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>& GetResponses() const{ return m_responses; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline void SetResponses(const Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>& value) { m_responses = value; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline void SetResponses(Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>&& value) { m_responses = std::move(value); }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& WithResponses(const Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>& value) { SetResponses(value); return *this;}

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& WithResponses(Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(const Aws::String& key, const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_responses.emplace(key, value); return *this; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(Aws::String&& key, const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_responses.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(const Aws::String& key, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_responses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(Aws::String&& key, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_responses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(const char* key, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>&& value) { m_responses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of table name to a list of items. Each object in <code>Responses</code>
     * consists of a table name, along with a map of attribute data consisting of the
     * data type and attribute value.</p>
     */
    inline BatchGetItemResult& AddResponses(const char* key, const Aws::Vector<Aws::Map<Aws::String, AttributeValue>>& value) { m_responses.emplace(key, value); return *this; }


    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline const Aws::Map<Aws::String, KeysAndAttributes>& GetUnprocessedKeys() const{ return m_unprocessedKeys; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline void SetUnprocessedKeys(const Aws::Map<Aws::String, KeysAndAttributes>& value) { m_unprocessedKeys = value; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline void SetUnprocessedKeys(Aws::Map<Aws::String, KeysAndAttributes>&& value) { m_unprocessedKeys = std::move(value); }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& WithUnprocessedKeys(const Aws::Map<Aws::String, KeysAndAttributes>& value) { SetUnprocessedKeys(value); return *this;}

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& WithUnprocessedKeys(Aws::Map<Aws::String, KeysAndAttributes>&& value) { SetUnprocessedKeys(std::move(value)); return *this;}

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(const Aws::String& key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(key, value); return *this; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(Aws::String&& key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(const Aws::String& key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(Aws::String&& key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(const char* key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tables and their respective keys that were not processed with the
     * current response. The <code>UnprocessedKeys</code> value is in the same form as
     * <code>RequestItems</code>, so the value can be provided directly to a subsequent
     * <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each element
     * consists of:</p> <ul> <li> <p> <code>Keys</code> - An array of primary key
     * attribute values that define specific items in the table.</p> </li> <li> <p>
     * <code>ProjectionExpression</code> - One or more attributes to be retrieved from
     * the table or index. By default, all attributes are returned. If a requested
     * attribute is not found, it does not appear in the result.</p> </li> <li> <p>
     * <code>ConsistentRead</code> - The consistency of a read operation. If set to
     * <code>true</code>, then a strongly consistent read is used; otherwise, an
     * eventually consistent read is used.</p> </li> </ul> <p>If there are no
     * unprocessed keys remaining, the response contains an empty
     * <code>UnprocessedKeys</code> map.</p>
     */
    inline BatchGetItemResult& AddUnprocessedKeys(const char* key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(key, value); return *this; }


    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline void SetConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { m_consumedCapacity = value; }

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline void SetConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchGetItemResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchGetItemResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchGetItemResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchGetItemResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>> m_responses;

    Aws::Map<Aws::String, KeysAndAttributes> m_unprocessedKeys;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
