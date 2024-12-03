/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/AsyncInvokeSummary.h>
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
namespace BedrockRuntime
{
namespace Model
{
  class ListAsyncInvokesResult
  {
  public:
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult();
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAsyncInvokesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAsyncInvokesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAsyncInvokesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of invocation summaries.</p>
     */
    inline const Aws::Vector<AsyncInvokeSummary>& GetAsyncInvokeSummaries() const{ return m_asyncInvokeSummaries; }
    inline void SetAsyncInvokeSummaries(const Aws::Vector<AsyncInvokeSummary>& value) { m_asyncInvokeSummaries = value; }
    inline void SetAsyncInvokeSummaries(Aws::Vector<AsyncInvokeSummary>&& value) { m_asyncInvokeSummaries = std::move(value); }
    inline ListAsyncInvokesResult& WithAsyncInvokeSummaries(const Aws::Vector<AsyncInvokeSummary>& value) { SetAsyncInvokeSummaries(value); return *this;}
    inline ListAsyncInvokesResult& WithAsyncInvokeSummaries(Aws::Vector<AsyncInvokeSummary>&& value) { SetAsyncInvokeSummaries(std::move(value)); return *this;}
    inline ListAsyncInvokesResult& AddAsyncInvokeSummaries(const AsyncInvokeSummary& value) { m_asyncInvokeSummaries.push_back(value); return *this; }
    inline ListAsyncInvokesResult& AddAsyncInvokeSummaries(AsyncInvokeSummary&& value) { m_asyncInvokeSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAsyncInvokesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAsyncInvokesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAsyncInvokesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<AsyncInvokeSummary> m_asyncInvokeSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
