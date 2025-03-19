/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The specification of an agent turn.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AgentTurnSpecification">AWS
   * API Reference</a></p>
   */
  class AgentTurnSpecification
  {
  public:
    AWS_LEXMODELSV2_API AgentTurnSpecification() = default;
    AWS_LEXMODELSV2_API AgentTurnSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AgentTurnSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The agent prompt for the agent turn in a test set.</p>
     */
    inline const Aws::String& GetAgentPrompt() const { return m_agentPrompt; }
    inline bool AgentPromptHasBeenSet() const { return m_agentPromptHasBeenSet; }
    template<typename AgentPromptT = Aws::String>
    void SetAgentPrompt(AgentPromptT&& value) { m_agentPromptHasBeenSet = true; m_agentPrompt = std::forward<AgentPromptT>(value); }
    template<typename AgentPromptT = Aws::String>
    AgentTurnSpecification& WithAgentPrompt(AgentPromptT&& value) { SetAgentPrompt(std::forward<AgentPromptT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentPrompt;
    bool m_agentPromptHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
