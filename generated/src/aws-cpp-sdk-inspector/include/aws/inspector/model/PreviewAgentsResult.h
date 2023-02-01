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
    AWS_INSPECTOR_API PreviewAgentsResult();
    AWS_INSPECTOR_API PreviewAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API PreviewAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The resulting list of agents.</p>
     */
    inline const Aws::Vector<AgentPreview>& GetAgentPreviews() const{ return m_agentPreviews; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline void SetAgentPreviews(const Aws::Vector<AgentPreview>& value) { m_agentPreviews = value; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline void SetAgentPreviews(Aws::Vector<AgentPreview>&& value) { m_agentPreviews = std::move(value); }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsResult& WithAgentPreviews(const Aws::Vector<AgentPreview>& value) { SetAgentPreviews(value); return *this;}

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsResult& WithAgentPreviews(Aws::Vector<AgentPreview>&& value) { SetAgentPreviews(std::move(value)); return *this;}

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsResult& AddAgentPreviews(const AgentPreview& value) { m_agentPreviews.push_back(value); return *this; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsResult& AddAgentPreviews(AgentPreview&& value) { m_agentPreviews.push_back(std::move(value)); return *this; }


    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline PreviewAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline PreviewAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to null.</p>
     */
    inline PreviewAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AgentPreview> m_agentPreviews;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
