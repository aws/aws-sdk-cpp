/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BatchStatementResponse.h>
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
  class BatchExecuteStatementResult
  {
  public:
    AWS_DYNAMODB_API BatchExecuteStatementResult();
    AWS_DYNAMODB_API BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API BatchExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline const Aws::Vector<BatchStatementResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline void SetResponses(const Aws::Vector<BatchStatementResponse>& value) { m_responses = value; }

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline void SetResponses(Aws::Vector<BatchStatementResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline BatchExecuteStatementResult& WithResponses(const Aws::Vector<BatchStatementResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline BatchExecuteStatementResult& WithResponses(Aws::Vector<BatchStatementResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline BatchExecuteStatementResult& AddResponses(const BatchStatementResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>The response to each PartiQL statement in the batch. The values of the list
     * are ordered according to the ordering of the request statements.</p>
     */
    inline BatchExecuteStatementResult& AddResponses(BatchStatementResponse&& value) { m_responses.push_back(std::move(value)); return *this; }


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
    inline BatchExecuteStatementResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline BatchExecuteStatementResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline BatchExecuteStatementResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>The capacity units consumed by the entire operation. The values of the list
     * are ordered according to the ordering of the statements.</p>
     */
    inline BatchExecuteStatementResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchExecuteStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchExecuteStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchExecuteStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchStatementResponse> m_responses;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
