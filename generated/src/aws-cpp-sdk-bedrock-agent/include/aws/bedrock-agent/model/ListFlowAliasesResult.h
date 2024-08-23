/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowAliasSummary.h>
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
namespace BedrockAgent
{
namespace Model
{
  class ListFlowAliasesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListFlowAliasesResult();
    AWS_BEDROCKAGENT_API ListFlowAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListFlowAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list, each member of which contains information about an alias.</p>
     */
    inline const Aws::Vector<FlowAliasSummary>& GetFlowAliasSummaries() const{ return m_flowAliasSummaries; }
    inline void SetFlowAliasSummaries(const Aws::Vector<FlowAliasSummary>& value) { m_flowAliasSummaries = value; }
    inline void SetFlowAliasSummaries(Aws::Vector<FlowAliasSummary>&& value) { m_flowAliasSummaries = std::move(value); }
    inline ListFlowAliasesResult& WithFlowAliasSummaries(const Aws::Vector<FlowAliasSummary>& value) { SetFlowAliasSummaries(value); return *this;}
    inline ListFlowAliasesResult& WithFlowAliasSummaries(Aws::Vector<FlowAliasSummary>&& value) { SetFlowAliasSummaries(std::move(value)); return *this;}
    inline ListFlowAliasesResult& AddFlowAliasSummaries(const FlowAliasSummary& value) { m_flowAliasSummaries.push_back(value); return *this; }
    inline ListFlowAliasesResult& AddFlowAliasSummaries(FlowAliasSummary&& value) { m_flowAliasSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFlowAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFlowAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFlowAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFlowAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFlowAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFlowAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FlowAliasSummary> m_flowAliasSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
