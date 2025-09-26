/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SearchableAgentCriteriaStep.h>
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
   * <p>Routing criteria of the contact to match on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableRoutingCriteriaStep">AWS
   * API Reference</a></p>
   */
  class SearchableRoutingCriteriaStep
  {
  public:
    AWS_CONNECT_API SearchableRoutingCriteriaStep() = default;
    AWS_CONNECT_API SearchableRoutingCriteriaStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableRoutingCriteriaStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Agent matching the routing step of the routing criteria</p>
     */
    inline const SearchableAgentCriteriaStep& GetAgentCriteria() const { return m_agentCriteria; }
    inline bool AgentCriteriaHasBeenSet() const { return m_agentCriteriaHasBeenSet; }
    template<typename AgentCriteriaT = SearchableAgentCriteriaStep>
    void SetAgentCriteria(AgentCriteriaT&& value) { m_agentCriteriaHasBeenSet = true; m_agentCriteria = std::forward<AgentCriteriaT>(value); }
    template<typename AgentCriteriaT = SearchableAgentCriteriaStep>
    SearchableRoutingCriteriaStep& WithAgentCriteria(AgentCriteriaT&& value) { SetAgentCriteria(std::forward<AgentCriteriaT>(value)); return *this;}
    ///@}
  private:

    SearchableAgentCriteriaStep m_agentCriteria;
    bool m_agentCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
