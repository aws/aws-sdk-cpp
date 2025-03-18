/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AgentsCriteria.h>
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
   * <p>An object to define AgentsCriteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MatchCriteria">AWS
   * API Reference</a></p>
   */
  class MatchCriteria
  {
  public:
    AWS_CONNECT_API MatchCriteria() = default;
    AWS_CONNECT_API MatchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MatchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to define agentIds.</p>
     */
    inline const AgentsCriteria& GetAgentsCriteria() const { return m_agentsCriteria; }
    inline bool AgentsCriteriaHasBeenSet() const { return m_agentsCriteriaHasBeenSet; }
    template<typename AgentsCriteriaT = AgentsCriteria>
    void SetAgentsCriteria(AgentsCriteriaT&& value) { m_agentsCriteriaHasBeenSet = true; m_agentsCriteria = std::forward<AgentsCriteriaT>(value); }
    template<typename AgentsCriteriaT = AgentsCriteria>
    MatchCriteria& WithAgentsCriteria(AgentsCriteriaT&& value) { SetAgentsCriteria(std::forward<AgentsCriteriaT>(value)); return *this;}
    ///@}
  private:

    AgentsCriteria m_agentsCriteria;
    bool m_agentsCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
