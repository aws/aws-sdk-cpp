/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/BatchStatementResponse.h>
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
  class AWS_DYNAMODB_API BatchExecuteStatementResult
  {
  public:
    BatchExecuteStatementResult();
    BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline const Aws::Vector<BatchStatementResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline void SetResponses(const Aws::Vector<BatchStatementResponse>& value) { m_responses = value; }

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline void SetResponses(Aws::Vector<BatchStatementResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline BatchExecuteStatementResult& WithResponses(const Aws::Vector<BatchStatementResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline BatchExecuteStatementResult& WithResponses(Aws::Vector<BatchStatementResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline BatchExecuteStatementResult& AddResponses(const BatchStatementResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p> The response to each PartiQL statement in the batch. </p>
     */
    inline BatchExecuteStatementResult& AddResponses(BatchStatementResponse&& value) { m_responses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchStatementResponse> m_responses;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
