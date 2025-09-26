/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The agent criteria to search for preferred agents on the routing
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchableAgentCriteriaStep">AWS
   * API Reference</a></p>
   */
  class SearchableAgentCriteriaStep
  {
  public:
    AWS_CONNECT_API SearchableAgentCriteriaStep() = default;
    AWS_CONNECT_API SearchableAgentCriteriaStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchableAgentCriteriaStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifiers of agents used in preferred agents matching.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentIds() const { return m_agentIds; }
    inline bool AgentIdsHasBeenSet() const { return m_agentIdsHasBeenSet; }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    void SetAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds = std::forward<AgentIdsT>(value); }
    template<typename AgentIdsT = Aws::Vector<Aws::String>>
    SearchableAgentCriteriaStep& WithAgentIds(AgentIdsT&& value) { SetAgentIds(std::forward<AgentIdsT>(value)); return *this;}
    template<typename AgentIdsT = Aws::String>
    SearchableAgentCriteriaStep& AddAgentIds(AgentIdsT&& value) { m_agentIdsHasBeenSet = true; m_agentIds.emplace_back(std::forward<AgentIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The match type combining multiple agent criteria steps.</p>
     */
    inline SearchContactsMatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(SearchContactsMatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline SearchableAgentCriteriaStep& WithMatchType(SearchContactsMatchType value) { SetMatchType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_agentIds;
    bool m_agentIdsHasBeenSet = false;

    SearchContactsMatchType m_matchType{SearchContactsMatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
