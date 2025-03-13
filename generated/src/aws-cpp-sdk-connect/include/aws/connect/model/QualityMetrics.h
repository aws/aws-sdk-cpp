/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentQualityMetrics.h>
#include <aws/connect/model/CustomerQualityMetrics.h>
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
   * <p>Information about the quality of the participant's media
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QualityMetrics">AWS
   * API Reference</a></p>
   */
  class QualityMetrics
  {
  public:
    AWS_CONNECT_API QualityMetrics() = default;
    AWS_CONNECT_API QualityMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QualityMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the quality of Agent media connection.</p>
     */
    inline const AgentQualityMetrics& GetAgent() const { return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    template<typename AgentT = AgentQualityMetrics>
    void SetAgent(AgentT&& value) { m_agentHasBeenSet = true; m_agent = std::forward<AgentT>(value); }
    template<typename AgentT = AgentQualityMetrics>
    QualityMetrics& WithAgent(AgentT&& value) { SetAgent(std::forward<AgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quality of Customer media connection.</p>
     */
    inline const CustomerQualityMetrics& GetCustomer() const { return m_customer; }
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
    template<typename CustomerT = CustomerQualityMetrics>
    void SetCustomer(CustomerT&& value) { m_customerHasBeenSet = true; m_customer = std::forward<CustomerT>(value); }
    template<typename CustomerT = CustomerQualityMetrics>
    QualityMetrics& WithCustomer(CustomerT&& value) { SetCustomer(std::forward<CustomerT>(value)); return *this;}
    ///@}
  private:

    AgentQualityMetrics m_agent;
    bool m_agentHasBeenSet = false;

    CustomerQualityMetrics m_customer;
    bool m_customerHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
