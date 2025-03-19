/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchGetItemResult
  {
  public:
    AWS_DYNAMODB_API BatchGetItemResult() = default;
    AWS_DYNAMODB_API BatchGetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API BatchGetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map of table name or table ARN to a list of items. Each object in
     * <code>Responses</code> consists of a table name or ARN, along with a map of
     * attribute data consisting of the data type and attribute value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>>
    BatchGetItemResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesKeyT = Aws::String, typename ResponsesValueT = Aws::Vector<Aws::Map<Aws::String, AttributeValue>>>
    BatchGetItemResult& AddResponses(ResponsesKeyT&& key, ResponsesValueT&& value) {
      m_responsesHasBeenSet = true; m_responses.emplace(std::forward<ResponsesKeyT>(key), std::forward<ResponsesValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, KeysAndAttributes>& GetUnprocessedKeys() const { return m_unprocessedKeys; }
    template<typename UnprocessedKeysT = Aws::Map<Aws::String, KeysAndAttributes>>
    void SetUnprocessedKeys(UnprocessedKeysT&& value) { m_unprocessedKeysHasBeenSet = true; m_unprocessedKeys = std::forward<UnprocessedKeysT>(value); }
    template<typename UnprocessedKeysT = Aws::Map<Aws::String, KeysAndAttributes>>
    BatchGetItemResult& WithUnprocessedKeys(UnprocessedKeysT&& value) { SetUnprocessedKeys(std::forward<UnprocessedKeysT>(value)); return *this;}
    template<typename UnprocessedKeysKeyT = Aws::String, typename UnprocessedKeysValueT = KeysAndAttributes>
    BatchGetItemResult& AddUnprocessedKeys(UnprocessedKeysKeyT&& key, UnprocessedKeysValueT&& value) {
      m_unprocessedKeysHasBeenSet = true; m_unprocessedKeys.emplace(std::forward<UnprocessedKeysKeyT>(key), std::forward<UnprocessedKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The read capacity units consumed by the entire <code>BatchGetItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    BatchGetItemResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    template<typename ConsumedCapacityT = ConsumedCapacity>
    BatchGetItemResult& AddConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity.emplace_back(std::forward<ConsumedCapacityT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::Map<Aws::String, AttributeValue>>> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::Map<Aws::String, KeysAndAttributes> m_unprocessedKeys;
    bool m_unprocessedKeysHasBeenSet = false;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
