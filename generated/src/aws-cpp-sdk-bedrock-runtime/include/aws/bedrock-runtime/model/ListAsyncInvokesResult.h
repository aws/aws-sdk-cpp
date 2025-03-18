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
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult() = default;
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API ListAsyncInvokesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAsyncInvokesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of invocation summaries.</p>
     */
    inline const Aws::Vector<AsyncInvokeSummary>& GetAsyncInvokeSummaries() const { return m_asyncInvokeSummaries; }
    template<typename AsyncInvokeSummariesT = Aws::Vector<AsyncInvokeSummary>>
    void SetAsyncInvokeSummaries(AsyncInvokeSummariesT&& value) { m_asyncInvokeSummariesHasBeenSet = true; m_asyncInvokeSummaries = std::forward<AsyncInvokeSummariesT>(value); }
    template<typename AsyncInvokeSummariesT = Aws::Vector<AsyncInvokeSummary>>
    ListAsyncInvokesResult& WithAsyncInvokeSummaries(AsyncInvokeSummariesT&& value) { SetAsyncInvokeSummaries(std::forward<AsyncInvokeSummariesT>(value)); return *this;}
    template<typename AsyncInvokeSummariesT = AsyncInvokeSummary>
    ListAsyncInvokesResult& AddAsyncInvokeSummaries(AsyncInvokeSummariesT&& value) { m_asyncInvokeSummariesHasBeenSet = true; m_asyncInvokeSummaries.emplace_back(std::forward<AsyncInvokeSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAsyncInvokesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AsyncInvokeSummary> m_asyncInvokeSummaries;
    bool m_asyncInvokeSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
