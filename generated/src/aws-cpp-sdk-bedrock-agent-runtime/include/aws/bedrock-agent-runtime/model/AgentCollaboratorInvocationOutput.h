/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboratorOutputPayload.h>
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
   * <p>Output from an agent collaborator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgentCollaboratorInvocationOutput">AWS
   * API Reference</a></p>
   */
  class AgentCollaboratorInvocationOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput();
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output's agent collaborator alias ARN.</p>
     */
    inline const Aws::String& GetAgentCollaboratorAliasArn() const{ return m_agentCollaboratorAliasArn; }
    inline bool AgentCollaboratorAliasArnHasBeenSet() const { return m_agentCollaboratorAliasArnHasBeenSet; }
    inline void SetAgentCollaboratorAliasArn(const Aws::String& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = value; }
    inline void SetAgentCollaboratorAliasArn(Aws::String&& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = std::move(value); }
    inline void SetAgentCollaboratorAliasArn(const char* value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn.assign(value); }
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorAliasArn(const Aws::String& value) { SetAgentCollaboratorAliasArn(value); return *this;}
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorAliasArn(Aws::String&& value) { SetAgentCollaboratorAliasArn(std::move(value)); return *this;}
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorAliasArn(const char* value) { SetAgentCollaboratorAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's agent collaborator name.</p>
     */
    inline const Aws::String& GetAgentCollaboratorName() const{ return m_agentCollaboratorName; }
    inline bool AgentCollaboratorNameHasBeenSet() const { return m_agentCollaboratorNameHasBeenSet; }
    inline void SetAgentCollaboratorName(const Aws::String& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = value; }
    inline void SetAgentCollaboratorName(Aws::String&& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = std::move(value); }
    inline void SetAgentCollaboratorName(const char* value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName.assign(value); }
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorName(const Aws::String& value) { SetAgentCollaboratorName(value); return *this;}
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorName(Aws::String&& value) { SetAgentCollaboratorName(std::move(value)); return *this;}
    inline AgentCollaboratorInvocationOutput& WithAgentCollaboratorName(const char* value) { SetAgentCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's output.</p>
     */
    inline const AgentCollaboratorOutputPayload& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const AgentCollaboratorOutputPayload& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(AgentCollaboratorOutputPayload&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline AgentCollaboratorInvocationOutput& WithOutput(const AgentCollaboratorOutputPayload& value) { SetOutput(value); return *this;}
    inline AgentCollaboratorInvocationOutput& WithOutput(AgentCollaboratorOutputPayload&& value) { SetOutput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentCollaboratorAliasArn;
    bool m_agentCollaboratorAliasArnHasBeenSet = false;

    Aws::String m_agentCollaboratorName;
    bool m_agentCollaboratorNameHasBeenSet = false;

    AgentCollaboratorOutputPayload m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
