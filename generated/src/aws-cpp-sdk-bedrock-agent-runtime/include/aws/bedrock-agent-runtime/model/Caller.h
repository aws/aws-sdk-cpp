/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Details about a caller.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Caller">AWS
   * API Reference</a></p>
   */
  class Caller
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Caller() = default;
    AWS_BEDROCKAGENTRUNTIME_API Caller(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Caller& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The caller's agent alias ARN.</p>
     */
    inline const Aws::String& GetAgentAliasArn() const { return m_agentAliasArn; }
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }
    template<typename AgentAliasArnT = Aws::String>
    void SetAgentAliasArn(AgentAliasArnT&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::forward<AgentAliasArnT>(value); }
    template<typename AgentAliasArnT = Aws::String>
    Caller& WithAgentAliasArn(AgentAliasArnT&& value) { SetAgentAliasArn(std::forward<AgentAliasArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
