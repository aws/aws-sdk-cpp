/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BatchResponse.h>
#include <aws/dynamodb/model/KeysAndAttributes.h>
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
  class BatchGetItemResult
  {
  public:
    AWS_DYNAMODB_API BatchGetItemResult();
    AWS_DYNAMODB_API BatchGetItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API BatchGetItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, BatchResponse>& GetResponses() const{ return m_responses; }
    inline void SetResponses(const Aws::Map<Aws::String, BatchResponse>& value) { m_responses = value; }
    inline void SetResponses(Aws::Map<Aws::String, BatchResponse>&& value) { m_responses = std::move(value); }
    inline BatchGetItemResult& WithResponses(const Aws::Map<Aws::String, BatchResponse>& value) { SetResponses(value); return *this;}
    inline BatchGetItemResult& WithResponses(Aws::Map<Aws::String, BatchResponse>&& value) { SetResponses(std::move(value)); return *this;}
    inline BatchGetItemResult& AddResponses(const Aws::String& key, const BatchResponse& value) { m_responses.emplace(key, value); return *this; }
    inline BatchGetItemResult& AddResponses(Aws::String&& key, const BatchResponse& value) { m_responses.emplace(std::move(key), value); return *this; }
    inline BatchGetItemResult& AddResponses(const Aws::String& key, BatchResponse&& value) { m_responses.emplace(key, std::move(value)); return *this; }
    inline BatchGetItemResult& AddResponses(Aws::String&& key, BatchResponse&& value) { m_responses.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchGetItemResult& AddResponses(const char* key, BatchResponse&& value) { m_responses.emplace(key, std::move(value)); return *this; }
    inline BatchGetItemResult& AddResponses(const char* key, const BatchResponse& value) { m_responses.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, KeysAndAttributes>& GetUnprocessedKeys() const{ return m_unprocessedKeys; }
    inline void SetUnprocessedKeys(const Aws::Map<Aws::String, KeysAndAttributes>& value) { m_unprocessedKeys = value; }
    inline void SetUnprocessedKeys(Aws::Map<Aws::String, KeysAndAttributes>&& value) { m_unprocessedKeys = std::move(value); }
    inline BatchGetItemResult& WithUnprocessedKeys(const Aws::Map<Aws::String, KeysAndAttributes>& value) { SetUnprocessedKeys(value); return *this;}
    inline BatchGetItemResult& WithUnprocessedKeys(Aws::Map<Aws::String, KeysAndAttributes>&& value) { SetUnprocessedKeys(std::move(value)); return *this;}
    inline BatchGetItemResult& AddUnprocessedKeys(const Aws::String& key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(key, value); return *this; }
    inline BatchGetItemResult& AddUnprocessedKeys(Aws::String&& key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(std::move(key), value); return *this; }
    inline BatchGetItemResult& AddUnprocessedKeys(const Aws::String& key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(key, std::move(value)); return *this; }
    inline BatchGetItemResult& AddUnprocessedKeys(Aws::String&& key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchGetItemResult& AddUnprocessedKeys(const char* key, KeysAndAttributes&& value) { m_unprocessedKeys.emplace(key, std::move(value)); return *this; }
    inline BatchGetItemResult& AddUnprocessedKeys(const char* key, const KeysAndAttributes& value) { m_unprocessedKeys.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, BatchResponse> m_responses;

    Aws::Map<Aws::String, KeysAndAttributes> m_unprocessedKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
