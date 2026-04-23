/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/AgentHealth.h>
#include <aws/inspector/model/AgentHealthCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Inspector agent. This data type is used
   * as a request parameter in the <a>ListAssessmentRunAgents</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AgentFilter">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AgentFilter
  {
  public:
    AgentFilter();
    AgentFilter(Aws::Utils::Json::JsonView jsonValue);
    AgentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline const Aws::Vector<AgentHealth>& GetAgentHealths() const{ return m_agentHealths; }

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline bool AgentHealthsHasBeenSet() const { return m_agentHealthsHasBeenSet; }

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline void SetAgentHealths(const Aws::Vector<AgentHealth>& value) { m_agentHealthsHasBeenSet = true; m_agentHealths = value; }

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline void SetAgentHealths(Aws::Vector<AgentHealth>&& value) { m_agentHealthsHasBeenSet = true; m_agentHealths = std::move(value); }

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline AgentFilter& WithAgentHealths(const Aws::Vector<AgentHealth>& value) { SetAgentHealths(value); return *this;}

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline AgentFilter& WithAgentHealths(Aws::Vector<AgentHealth>&& value) { SetAgentHealths(std::move(value)); return *this;}

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline AgentFilter& AddAgentHealths(const AgentHealth& value) { m_agentHealthsHasBeenSet = true; m_agentHealths.push_back(value); return *this; }

    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline AgentFilter& AddAgentHealths(AgentHealth&& value) { m_agentHealthsHasBeenSet = true; m_agentHealths.push_back(std::move(value)); return *this; }


    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline const Aws::Vector<AgentHealthCode>& GetAgentHealthCodes() const{ return m_agentHealthCodes; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline bool AgentHealthCodesHasBeenSet() const { return m_agentHealthCodesHasBeenSet; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline void SetAgentHealthCodes(const Aws::Vector<AgentHealthCode>& value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes = value; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline void SetAgentHealthCodes(Aws::Vector<AgentHealthCode>&& value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes = std::move(value); }

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline AgentFilter& WithAgentHealthCodes(const Aws::Vector<AgentHealthCode>& value) { SetAgentHealthCodes(value); return *this;}

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline AgentFilter& WithAgentHealthCodes(Aws::Vector<AgentHealthCode>&& value) { SetAgentHealthCodes(std::move(value)); return *this;}

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline AgentFilter& AddAgentHealthCodes(const AgentHealthCode& value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes.push_back(value); return *this; }

    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline AgentFilter& AddAgentHealthCodes(AgentHealthCode&& value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AgentHealth> m_agentHealths;
    bool m_agentHealthsHasBeenSet;

    Aws::Vector<AgentHealthCode> m_agentHealthCodes;
    bool m_agentHealthCodesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
