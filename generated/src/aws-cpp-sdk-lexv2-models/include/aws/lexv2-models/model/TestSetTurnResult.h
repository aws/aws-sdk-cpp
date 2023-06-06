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
    AWS_LEXMODELSV2_API TestSetTurnResult();
    AWS_LEXMODELSV2_API TestSetTurnResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetTurnResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline const AgentTurnResult& GetAgent() const{ return m_agent; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline void SetAgent(const AgentTurnResult& value) { m_agentHasBeenSet = true; m_agent = value; }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline void SetAgent(AgentTurnResult&& value) { m_agentHasBeenSet = true; m_agent = std::move(value); }

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline TestSetTurnResult& WithAgent(const AgentTurnResult& value) { SetAgent(value); return *this;}

    /**
     * <p>Contains information about the agent messages in the turn.</p>
     */
    inline TestSetTurnResult& WithAgent(AgentTurnResult&& value) { SetAgent(std::move(value)); return *this;}


    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline const UserTurnResult& GetUser() const{ return m_user; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline void SetUser(const UserTurnResult& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline void SetUser(UserTurnResult&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline TestSetTurnResult& WithUser(const UserTurnResult& value) { SetUser(value); return *this;}

    /**
     * <p>Contains information about the user messages in the turn.</p>
     */
    inline TestSetTurnResult& WithUser(UserTurnResult&& value) { SetUser(std::move(value)); return *this;}

  private:

    AgentTurnResult m_agent;
    bool m_agentHasBeenSet = false;

    UserTurnResult m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
