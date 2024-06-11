﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AgentPreview.h>
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
namespace Inspector
{
namespace Model
{
  class PreviewAgentsResult
  {
  public:
    AWS_INSPECTOR_API PreviewAgentsResult();
    AWS_INSPECTOR_API PreviewAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API PreviewAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resulting list of agents.</p>
     */
    inline const Aws::Vector<AgentPreview>& GetAgentPreviews() const{ return m_agentPreviews; }
    inline void SetAgentPreviews(const Aws::Vector<AgentPreview>& value) { m_agentPreviews = value; }
    inline void SetAgentPreviews(Aws::Vector<AgentPreview>&& value) { m_agentPreviews = std::move(value); }
    inline PreviewAgentsResult& WithAgentPreviews(const Aws::Vector<AgentPreview>& value) { SetAgentPreviews(value); return *this;}
    inline PreviewAgentsResult& WithAgentPreviews(Aws::Vector<AgentPreview>&& value) { SetAgentPreviews(std::move(value)); return *this;}
    inline PreviewAgentsResult& AddAgentPreviews(const AgentPreview& value) { m_agentPreviews.push_back(value); return *this; }
    inline PreviewAgentsResult& AddAgentPreviews(AgentPreview&& value) { m_agentPreviews.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline PreviewAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline PreviewAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline PreviewAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PreviewAgentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PreviewAgentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PreviewAgentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AgentPreview> m_agentPreviews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
