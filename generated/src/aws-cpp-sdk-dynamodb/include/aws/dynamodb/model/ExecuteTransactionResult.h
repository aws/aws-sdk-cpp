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
    AWS_DYNAMODB_API ExecuteTransactionResult();
    AWS_DYNAMODB_API ExecuteTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ExecuteTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline const Aws::Vector<ItemResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline void SetResponses(const Aws::Vector<ItemResponse>& value) { m_responses = value; }

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline void SetResponses(Aws::Vector<ItemResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline ExecuteTransactionResult& WithResponses(const Aws::Vector<ItemResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline ExecuteTransactionResult& WithResponses(Aws::Vector<ItemResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline ExecuteTransactionResult& AddResponses(const ItemResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>The response to a PartiQL transaction.</p>
     */
    inline ExecuteTransactionResult& AddResponses(ItemResponse&& value) { m_responses.push_back(std::move(value)); return *this; }


    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline void SetConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline void SetConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline ExecuteTransactionResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline ExecuteTransactionResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline ExecuteTransactionResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline ExecuteTransactionResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteTransactionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteTransactionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteTransactionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ItemResponse> m_responses;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
