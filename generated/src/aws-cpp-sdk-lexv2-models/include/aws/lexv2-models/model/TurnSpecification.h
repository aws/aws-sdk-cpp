/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AgentTurnSpecification.h>
#include <aws/lexv2-models/model/UserTurnSpecification.h>
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
   * <p>Contains information about the messages in the turn.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TurnSpecification">AWS
   * API Reference</a></p>
   */
  class TurnSpecification
  {
  public:
    AWS_LEXMODELSV2_API TurnSpecification();
    AWS_LEXMODELSV2_API TurnSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TurnSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline const AgentTurnSpecification& GetAgentTurn() const{ return m_agentTurn; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline bool AgentTurnHasBeenSet() const { return m_agentTurnHasBeenSet; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline void SetAgentTurn(const AgentTurnSpecification& value) { m_agentTurnHasBeenSet = true; m_agentTurn = value; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline void SetAgentTurn(AgentTurnSpecification&& value) { m_agentTurnHasBeenSet = true; m_agentTurn = std::move(value); }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline TurnSpecification& WithAgentTurn(const AgentTurnSpecification& value) { SetAgentTurn(value); return *this;}

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline TurnSpecification& WithAgentTurn(AgentTurnSpecification&& value) { SetAgentTurn(std::move(value)); return *this;}


    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline const UserTurnSpecification& GetUserTurn() const{ return m_userTurn; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline bool UserTurnHasBeenSet() const { return m_userTurnHasBeenSet; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline void SetUserTurn(const UserTurnSpecification& value) { m_userTurnHasBeenSet = true; m_userTurn = value; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline void SetUserTurn(UserTurnSpecification&& value) { m_userTurnHasBeenSet = true; m_userTurn = std::move(value); }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline TurnSpecification& WithUserTurn(const UserTurnSpecification& value) { SetUserTurn(value); return *this;}

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline TurnSpecification& WithUserTurn(UserTurnSpecification&& value) { SetUserTurn(std::move(value)); return *this;}

  private:

    AgentTurnSpecification m_agentTurn;
    bool m_agentTurnHasBeenSet = false;

    UserTurnSpecification m_userTurn;
    bool m_userTurnHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
