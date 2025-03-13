/**
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
    AWS_INSPECTOR_API PreviewAgentsResult() = default;
    AWS_INSPECTOR_API PreviewAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API PreviewAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resulting list of agents.</p>
     */
    inline const Aws::Vector<AgentPreview>& GetAgentPreviews() const { return m_agentPreviews; }
    template<typename AgentPreviewsT = Aws::Vector<AgentPreview>>
    void SetAgentPreviews(AgentPreviewsT&& value) { m_agentPreviewsHasBeenSet = true; m_agentPreviews = std::forward<AgentPreviewsT>(value); }
    template<typename AgentPreviewsT = Aws::Vector<AgentPreview>>
    PreviewAgentsResult& WithAgentPreviews(AgentPreviewsT&& value) { SetAgentPreviews(std::forward<AgentPreviewsT>(value)); return *this;}
    template<typename AgentPreviewsT = AgentPreview>
    PreviewAgentsResult& AddAgentPreviews(AgentPreviewsT&& value) { m_agentPreviewsHasBeenSet = true; m_agentPreviews.emplace_back(std::forward<AgentPreviewsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    PreviewAgentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PreviewAgentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentPreview> m_agentPreviews;
    bool m_agentPreviewsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
