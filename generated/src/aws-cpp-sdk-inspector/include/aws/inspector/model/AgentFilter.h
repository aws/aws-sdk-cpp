/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AgentFilter
  {
  public:
    AWS_INSPECTOR_API AgentFilter() = default;
    AWS_INSPECTOR_API AgentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current health state of the agent. Values can be set to <b>HEALTHY</b> or
     * <b>UNHEALTHY</b>.</p>
     */
    inline const Aws::Vector<AgentHealth>& GetAgentHealths() const { return m_agentHealths; }
    inline bool AgentHealthsHasBeenSet() const { return m_agentHealthsHasBeenSet; }
    template<typename AgentHealthsT = Aws::Vector<AgentHealth>>
    void SetAgentHealths(AgentHealthsT&& value) { m_agentHealthsHasBeenSet = true; m_agentHealths = std::forward<AgentHealthsT>(value); }
    template<typename AgentHealthsT = Aws::Vector<AgentHealth>>
    AgentFilter& WithAgentHealths(AgentHealthsT&& value) { SetAgentHealths(std::forward<AgentHealthsT>(value)); return *this;}
    inline AgentFilter& AddAgentHealths(AgentHealth value) { m_agentHealthsHasBeenSet = true; m_agentHealths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The detailed health state of the agent. Values can be set to <b>IDLE</b>,
     * <b>RUNNING</b>, <b>SHUTDOWN</b>, <b>UNHEALTHY</b>, <b>THROTTLED</b>, and
     * <b>UNKNOWN</b>. </p>
     */
    inline const Aws::Vector<AgentHealthCode>& GetAgentHealthCodes() const { return m_agentHealthCodes; }
    inline bool AgentHealthCodesHasBeenSet() const { return m_agentHealthCodesHasBeenSet; }
    template<typename AgentHealthCodesT = Aws::Vector<AgentHealthCode>>
    void SetAgentHealthCodes(AgentHealthCodesT&& value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes = std::forward<AgentHealthCodesT>(value); }
    template<typename AgentHealthCodesT = Aws::Vector<AgentHealthCode>>
    AgentFilter& WithAgentHealthCodes(AgentHealthCodesT&& value) { SetAgentHealthCodes(std::forward<AgentHealthCodesT>(value)); return *this;}
    inline AgentFilter& AddAgentHealthCodes(AgentHealthCode value) { m_agentHealthCodesHasBeenSet = true; m_agentHealthCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AgentHealth> m_agentHealths;
    bool m_agentHealthsHasBeenSet = false;

    Aws::Vector<AgentHealthCode> m_agentHealthCodes;
    bool m_agentHealthCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
