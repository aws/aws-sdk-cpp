/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ChatContactMetrics.h>
#include <aws/connect/model/ParticipantMetrics.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about how agent, bot, and customer interact in a chat
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatMetrics">AWS
   * API Reference</a></p>
   */
  class ChatMetrics
  {
  public:
    AWS_CONNECT_API ChatMetrics() = default;
    AWS_CONNECT_API ChatMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the overall participant interactions at the contact
     * level.</p>
     */
    inline const ChatContactMetrics& GetChatContactMetrics() const { return m_chatContactMetrics; }
    inline bool ChatContactMetricsHasBeenSet() const { return m_chatContactMetricsHasBeenSet; }
    template<typename ChatContactMetricsT = ChatContactMetrics>
    void SetChatContactMetrics(ChatContactMetricsT&& value) { m_chatContactMetricsHasBeenSet = true; m_chatContactMetrics = std::forward<ChatContactMetricsT>(value); }
    template<typename ChatContactMetricsT = ChatContactMetrics>
    ChatMetrics& WithChatContactMetrics(ChatContactMetricsT&& value) { SetChatContactMetrics(std::forward<ChatContactMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about agent interactions in a contact.</p>
     */
    inline const ParticipantMetrics& GetAgentMetrics() const { return m_agentMetrics; }
    inline bool AgentMetricsHasBeenSet() const { return m_agentMetricsHasBeenSet; }
    template<typename AgentMetricsT = ParticipantMetrics>
    void SetAgentMetrics(AgentMetricsT&& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics = std::forward<AgentMetricsT>(value); }
    template<typename AgentMetricsT = ParticipantMetrics>
    ChatMetrics& WithAgentMetrics(AgentMetricsT&& value) { SetAgentMetrics(std::forward<AgentMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about customer interactions in a contact.</p>
     */
    inline const ParticipantMetrics& GetCustomerMetrics() const { return m_customerMetrics; }
    inline bool CustomerMetricsHasBeenSet() const { return m_customerMetricsHasBeenSet; }
    template<typename CustomerMetricsT = ParticipantMetrics>
    void SetCustomerMetrics(CustomerMetricsT&& value) { m_customerMetricsHasBeenSet = true; m_customerMetrics = std::forward<CustomerMetricsT>(value); }
    template<typename CustomerMetricsT = ParticipantMetrics>
    ChatMetrics& WithCustomerMetrics(CustomerMetricsT&& value) { SetCustomerMetrics(std::forward<CustomerMetricsT>(value)); return *this;}
    ///@}
  private:

    ChatContactMetrics m_chatContactMetrics;
    bool m_chatContactMetricsHasBeenSet = false;

    ParticipantMetrics m_agentMetrics;
    bool m_agentMetricsHasBeenSet = false;

    ParticipantMetrics m_customerMetrics;
    bool m_customerMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
