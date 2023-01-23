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
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException();
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentsAlreadyRunningAssessmentException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline AgentsAlreadyRunningAssessmentException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline AgentsAlreadyRunningAssessmentException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline AgentsAlreadyRunningAssessmentException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<AgentAlreadyRunningAssessment>& GetAgents() const{ return m_agents; }

    /**
     * <p/>
     */
    inline bool AgentsHasBeenSet() const { return m_agentsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAgents(const Aws::Vector<AgentAlreadyRunningAssessment>& value) { m_agentsHasBeenSet = true; m_agents = value; }

    /**
     * <p/>
     */
    inline void SetAgents(Aws::Vector<AgentAlreadyRunningAssessment>&& value) { m_agentsHasBeenSet = true; m_agents = std::move(value); }

    /**
     * <p/>
     */
    inline AgentsAlreadyRunningAssessmentException& WithAgents(const Aws::Vector<AgentAlreadyRunningAssessment>& value) { SetAgents(value); return *this;}

    /**
     * <p/>
     */
    inline AgentsAlreadyRunningAssessmentException& WithAgents(Aws::Vector<AgentAlreadyRunningAssessment>&& value) { SetAgents(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AgentsAlreadyRunningAssessmentException& AddAgents(const AgentAlreadyRunningAssessment& value) { m_agentsHasBeenSet = true; m_agents.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline AgentsAlreadyRunningAssessmentException& AddAgents(AgentAlreadyRunningAssessment&& value) { m_agentsHasBeenSet = true; m_agents.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline bool GetAgentsTruncated() const{ return m_agentsTruncated; }

    /**
     * <p/>
     */
    inline bool AgentsTruncatedHasBeenSet() const { return m_agentsTruncatedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAgentsTruncated(bool value) { m_agentsTruncatedHasBeenSet = true; m_agentsTruncated = value; }

    /**
     * <p/>
     */
    inline AgentsAlreadyRunningAssessmentException& WithAgentsTruncated(bool value) { SetAgentsTruncated(value); return *this;}


    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const{ return m_canRetry; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline AgentsAlreadyRunningAssessmentException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<AgentAlreadyRunningAssessment> m_agents;
    bool m_agentsHasBeenSet = false;

    bool m_agentsTruncated;
    bool m_agentsTruncatedHasBeenSet = false;

    bool m_canRetry;
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
