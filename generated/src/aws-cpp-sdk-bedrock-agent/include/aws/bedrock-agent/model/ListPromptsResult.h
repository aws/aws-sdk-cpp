/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/PromptSummary.h>
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
  class ListPromptsResult
  {
  public:
    AWS_BEDROCKAGENT_API ListPromptsResult();
    AWS_BEDROCKAGENT_API ListPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListPromptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPromptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPromptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list, each member of which contains information about a prompt using Prompt
     * management.</p>
     */
    inline const Aws::Vector<PromptSummary>& GetPromptSummaries() const{ return m_promptSummaries; }
    inline void SetPromptSummaries(const Aws::Vector<PromptSummary>& value) { m_promptSummaries = value; }
    inline void SetPromptSummaries(Aws::Vector<PromptSummary>&& value) { m_promptSummaries = std::move(value); }
    inline ListPromptsResult& WithPromptSummaries(const Aws::Vector<PromptSummary>& value) { SetPromptSummaries(value); return *this;}
    inline ListPromptsResult& WithPromptSummaries(Aws::Vector<PromptSummary>&& value) { SetPromptSummaries(std::move(value)); return *this;}
    inline ListPromptsResult& AddPromptSummaries(const PromptSummary& value) { m_promptSummaries.push_back(value); return *this; }
    inline ListPromptsResult& AddPromptSummaries(PromptSummary&& value) { m_promptSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPromptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPromptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPromptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PromptSummary> m_promptSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
