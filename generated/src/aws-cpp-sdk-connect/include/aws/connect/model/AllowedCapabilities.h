/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantCapabilities.h>
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
   * <p>Information about the capabilities enabled for participants of the
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AllowedCapabilities">AWS
   * API Reference</a></p>
   */
  class AllowedCapabilities
  {
  public:
    AWS_CONNECT_API AllowedCapabilities() = default;
    AWS_CONNECT_API AllowedCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AllowedCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline const ParticipantCapabilities& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = ParticipantCapabilities>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = ParticipantCapabilities>
    AllowedCapabilities& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline const ParticipantCapabilities& GetAgent() const { return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    template<typename AgentT = ParticipantCapabilities>
    void SetAgent(AgentT&& value) { m_agentHasBeenSet = true; m_agent = std::forward<AgentT>(value); }
    template<typename AgentT = ParticipantCapabilities>
    AllowedCapabilities& WithAgent(AgentT&& value) { SetAgent(std::forward<AgentT>(value)); return *this;}
    ///@}
  private:

    ParticipantCapabilities m_customer;
    bool m_customerHasBeenSet = false;

    ParticipantCapabilities m_agent;
    bool m_agentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
