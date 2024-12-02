/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RerankResult.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class RerankSdkResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RerankSdkResult();
    AWS_BEDROCKAGENTRUNTIME_API RerankSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API RerankSdkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than can fit in the response, use
     * this token in the <code>nextToken</code> field when making another request to
     * return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline RerankSdkResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline RerankSdkResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline RerankSdkResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains information about the results of
     * reranking.</p>
     */
    inline const Aws::Vector<RerankResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<RerankResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<RerankResult>&& value) { m_results = std::move(value); }
    inline RerankSdkResult& WithResults(const Aws::Vector<RerankResult>& value) { SetResults(value); return *this;}
    inline RerankSdkResult& WithResults(Aws::Vector<RerankResult>&& value) { SetResults(std::move(value)); return *this;}
    inline RerankSdkResult& AddResults(const RerankResult& value) { m_results.push_back(value); return *this; }
    inline RerankSdkResult& AddResults(RerankResult&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RerankSdkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RerankSdkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RerankSdkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RerankResult> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
