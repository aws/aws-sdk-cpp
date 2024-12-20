/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BatchWriteResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/WriteRequest.h>
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
  class BatchWriteItemResult
  {
  public:
    AWS_DYNAMODB_API BatchWriteItemResult();
    AWS_DYNAMODB_API BatchWriteItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API BatchWriteItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, BatchWriteResponse>& GetResponses() const{ return m_responses; }
    inline void SetResponses(const Aws::Map<Aws::String, BatchWriteResponse>& value) { m_responses = value; }
    inline void SetResponses(Aws::Map<Aws::String, BatchWriteResponse>&& value) { m_responses = std::move(value); }
    inline BatchWriteItemResult& WithResponses(const Aws::Map<Aws::String, BatchWriteResponse>& value) { SetResponses(value); return *this;}
    inline BatchWriteItemResult& WithResponses(Aws::Map<Aws::String, BatchWriteResponse>&& value) { SetResponses(std::move(value)); return *this;}
    inline BatchWriteItemResult& AddResponses(const Aws::String& key, const BatchWriteResponse& value) { m_responses.emplace(key, value); return *this; }
    inline BatchWriteItemResult& AddResponses(Aws::String&& key, const BatchWriteResponse& value) { m_responses.emplace(std::move(key), value); return *this; }
    inline BatchWriteItemResult& AddResponses(const Aws::String& key, BatchWriteResponse&& value) { m_responses.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemResult& AddResponses(Aws::String&& key, BatchWriteResponse&& value) { m_responses.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchWriteItemResult& AddResponses(const char* key, BatchWriteResponse&& value) { m_responses.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemResult& AddResponses(const char* key, const BatchWriteResponse& value) { m_responses.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetUnprocessedItems() const{ return m_unprocessedItems; }
    inline void SetUnprocessedItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { m_unprocessedItems = value; }
    inline void SetUnprocessedItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { m_unprocessedItems = std::move(value); }
    inline BatchWriteItemResult& WithUnprocessedItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { SetUnprocessedItems(value); return *this;}
    inline BatchWriteItemResult& WithUnprocessedItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { SetUnprocessedItems(std::move(value)); return *this;}
    inline BatchWriteItemResult& AddUnprocessedItems(const Aws::String& key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(key, value); return *this; }
    inline BatchWriteItemResult& AddUnprocessedItems(Aws::String&& key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(std::move(key), value); return *this; }
    inline BatchWriteItemResult& AddUnprocessedItems(const Aws::String& key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemResult& AddUnprocessedItems(Aws::String&& key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchWriteItemResult& AddUnprocessedItems(const char* key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(key, std::move(value)); return *this; }
    inline BatchWriteItemResult& AddUnprocessedItems(const char* key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchWriteItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchWriteItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchWriteItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, BatchWriteResponse> m_responses;

    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_unprocessedItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
