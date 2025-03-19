/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/AgentAlreadyRunningAssessment.h>
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
   * <p>You started an assessment run, but one of the instances is already
   * participating in another assessment run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AgentsAlreadyRunningAssessmentException">AWS
   * API Reference</a></p>
   */
  class AgentsAlreadyRunningAssessmentException
  {
  public:
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException() = default;
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AgentsAlreadyRunningAssessmentException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<AgentAlreadyRunningAssessment>& GetAgents() const { return m_agents; }
    inline bool AgentsHasBeenSet() const { return m_agentsHasBeenSet; }
    template<typename AgentsT = Aws::Vector<AgentAlreadyRunningAssessment>>
    void SetAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents = std::forward<AgentsT>(value); }
    template<typename AgentsT = Aws::Vector<AgentAlreadyRunningAssessment>>
    AgentsAlreadyRunningAssessmentException& WithAgents(AgentsT&& value) { SetAgents(std::forward<AgentsT>(value)); return *this;}
    template<typename AgentsT = AgentAlreadyRunningAssessment>
    AgentsAlreadyRunningAssessmentException& AddAgents(AgentsT&& value) { m_agentsHasBeenSet = true; m_agents.emplace_back(std::forward<AgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline bool GetAgentsTruncated() const { return m_agentsTruncated; }
    inline bool AgentsTruncatedHasBeenSet() const { return m_agentsTruncatedHasBeenSet; }
    inline void SetAgentsTruncated(bool value) { m_agentsTruncatedHasBeenSet = true; m_agentsTruncated = value; }
    inline AgentsAlreadyRunningAssessmentException& WithAgentsTruncated(bool value) { SetAgentsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const { return m_canRetry; }
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }
    inline AgentsAlreadyRunningAssessmentException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<AgentAlreadyRunningAssessment> m_agents;
    bool m_agentsHasBeenSet = false;

    bool m_agentsTruncated{false};
    bool m_agentsTruncatedHasBeenSet = false;

    bool m_canRetry{false};
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
