/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ItemResponse.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
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
  class ExecuteTransactionResult
  {
  public:
    AWS_DYNAMODB_API ExecuteTransactionResult() = default;
    AWS_DYNAMODB_API ExecuteTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExecuteTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline const Aws::Vector<ItemResponse>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Vector<ItemResponse>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Vector<ItemResponse>>
    ExecuteTransactionResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesT = ItemResponse>
    ExecuteTransactionResult& AddResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses.emplace_back(std::forward<ResponsesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const { return m_consumedCapacity; }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    void SetConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity = std::forward<ConsumedCapacityT>(value); }
    template<typename ConsumedCapacityT = Aws::Vector<ConsumedCapacity>>
    ExecuteTransactionResult& WithConsumedCapacity(ConsumedCapacityT&& value) { SetConsumedCapacity(std::forward<ConsumedCapacityT>(value)); return *this;}
    template<typename ConsumedCapacityT = ConsumedCapacity>
    ExecuteTransactionResult& AddConsumedCapacity(ConsumedCapacityT&& value) { m_consumedCapacityHasBeenSet = true; m_consumedCapacity.emplace_back(std::forward<ConsumedCapacityT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteTransactionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ItemResponse> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
    bool m_consumedCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
