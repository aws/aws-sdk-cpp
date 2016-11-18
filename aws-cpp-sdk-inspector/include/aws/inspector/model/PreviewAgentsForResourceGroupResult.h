﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/AgentPreview.h>

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
  class AWS_INSPECTOR_API PreviewAgentsForResourceGroupResult
  {
  public:
    PreviewAgentsForResourceGroupResult();
    PreviewAgentsForResourceGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PreviewAgentsForResourceGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The resulting list of agents.</p>
     */
    inline const Aws::Vector<AgentPreview>& GetAgentPreviewList() const{ return m_agentPreviewList; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline void SetAgentPreviewList(const Aws::Vector<AgentPreview>& value) { m_agentPreviewList = value; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline void SetAgentPreviewList(Aws::Vector<AgentPreview>&& value) { m_agentPreviewList = value; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsForResourceGroupResult& WithAgentPreviewList(const Aws::Vector<AgentPreview>& value) { SetAgentPreviewList(value); return *this;}

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsForResourceGroupResult& WithAgentPreviewList(Aws::Vector<AgentPreview>&& value) { SetAgentPreviewList(value); return *this;}

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsForResourceGroupResult& AddAgentPreviewList(const AgentPreview& value) { m_agentPreviewList.push_back(value); return *this; }

    /**
     * <p>The resulting list of agents.</p>
     */
    inline PreviewAgentsForResourceGroupResult& AddAgentPreviewList(AgentPreview&& value) { m_agentPreviewList.push_back(value); return *this; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline PreviewAgentsForResourceGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline PreviewAgentsForResourceGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline PreviewAgentsForResourceGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<AgentPreview> m_agentPreviewList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
