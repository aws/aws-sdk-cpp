/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_DYNAMODB_API ExecuteTransactionResult
  {
  public:
    ExecuteTransactionResult();
    ExecuteTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExecuteTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline const Aws::Vector<ItemResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline void SetResponses(const Aws::Vector<ItemResponse>& value) { m_responses = value; }

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline void SetResponses(Aws::Vector<ItemResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline ExecuteTransactionResult& WithResponses(const Aws::Vector<ItemResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline ExecuteTransactionResult& WithResponses(Aws::Vector<ItemResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline ExecuteTransactionResult& AddResponses(const ItemResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p> The response to a PartiQL transaction. </p>
     */
    inline ExecuteTransactionResult& AddResponses(ItemResponse&& value) { m_responses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ItemResponse> m_responses;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
