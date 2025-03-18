/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/ItemResponse.h>
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
  class TransactGetItemsResult
  {
  public:
    AWS_DYNAMODB_API TransactGetItemsResult() = default;
    AWS_DYNAMODB_API TransactGetItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API TransactGetItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the <i>ReturnConsumedCapacity</i> value was <code>TOTAL</code>, this is an
     * array of <code>ConsumedCapacity</code> objects, one for each table addressed by
     * <code>TransactGetItem</code> objects in the <i>TransactItems</i> parameter.
     * These <code>ConsumedCapacity</code> objects report the read-capacity units
     * consumed by the <code>TransactGetItems</code> call in that table.</p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    TransactGetItemsResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    template<typename ConsumedCapacityT = ConsumedCapacity>
    TransactGetItemsResult& AddConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity.emplace_back(std::forward<ConsumedCapacityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An ordered array of up to 100 <code>ItemResponse</code> objects, each of
     * which corresponds to the <code>TransactGetItem</code> object in the same
     * position in the <i>TransactItems</i> array. Each <code>ItemResponse</code>
     * object contains a Map of the name-value pairs that are the projected attributes
     * of the requested item.</p> <p>If a requested item could not be retrieved, the
     * corresponding <code>ItemResponse</code> object is Null, or if the requested item
     * has no projected attributes, the corresponding <code>ItemResponse</code> object
     * is an empty Map. </p>
     */
    inline const Aws::Vector<ItemResponse>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Vector<ItemResponse>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Vector<ItemResponse>>
    TransactGetItemsResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesT = ItemResponse>
    TransactGetItemsResult& AddResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses.emplace_back(std::forward<ResponsesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TransactGetItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::Vector<ItemResponse> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
