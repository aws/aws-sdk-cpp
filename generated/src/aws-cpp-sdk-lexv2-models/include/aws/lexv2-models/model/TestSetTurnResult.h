/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AgentTurnResult.h>
#include <aws/lexv2-models/model/UserTurnResult.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains information about the results of the analysis of a turn in the test
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetTurnResult">AWS
   * API Reference</a></p>
   */
  class TestSetTurnResult
  {
  public:
    AWS_LEXMODELSV2_API TestSetTurnResult() = default;
    AWS_LEXMODELSV2_API TestSetTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline const AgentTurnResult& GetAgent() const { return m_agent; }
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
    template<typename AgentT = AgentTurnResult>
    void SetAgent(AgentT&& value) { m_agentHasBeenSet = true; m_agent = std::forward<AgentT>(value); }
    template<typename AgentT = AgentTurnResult>
    TestSetTurnResult& WithAgent(AgentT&& value) { SetAgent(std::forward<AgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline const UserTurnResult& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = UserTurnResult>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = UserTurnResult>
    TestSetTurnResult& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    AgentTurnResult m_agent;
    bool m_agentHasBeenSet = false;

    UserTurnResult m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
