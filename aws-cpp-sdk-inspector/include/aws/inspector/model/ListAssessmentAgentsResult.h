/*
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
#include <aws/inspector/model/Agent.h>

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
  class AWS_INSPECTOR_API ListAssessmentAgentsResult
  {
  public:
    ListAssessmentAgentsResult();
    ListAssessmentAgentsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssessmentAgentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline const Aws::Vector<Agent>& GetAgentList() const{ return m_agentList; }

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline void SetAgentList(const Aws::Vector<Agent>& value) { m_agentList = value; }

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline void SetAgentList(Aws::Vector<Agent>&& value) { m_agentList = value; }

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline ListAssessmentAgentsResult& WithAgentList(const Aws::Vector<Agent>& value) { SetAgentList(value); return *this;}

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline ListAssessmentAgentsResult& WithAgentList(Aws::Vector<Agent>&& value) { SetAgentList(value); return *this;}

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline ListAssessmentAgentsResult& AddAgentList(const Agent& value) { m_agentList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs specifying the agents returned by the action.</p>
     */
    inline ListAssessmentAgentsResult& AddAgentList(Agent&& value) { m_agentList.push_back(value); return *this; }

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
    inline ListAssessmentAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline ListAssessmentAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> When a response is generated, if there is more data to be listed, this
     * parameter is present in the response and contains the value to use for the
     * <b>nextToken</b> parameter in a subsequent pagination request. If there is no
     * more data to be listed, this parameter is set to 'null'.</p>
     */
    inline ListAssessmentAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Agent> m_agentList;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
