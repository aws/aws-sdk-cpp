/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboratorOutputPayload.h>
#include <aws/bedrock-agent-runtime/model/Metadata.h>
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
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput() = default;
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output's agent collaborator name.</p>
     */
    inline const Aws::String& GetAgentCollaboratorName() const { return m_agentCollaboratorName; }
    inline bool AgentCollaboratorNameHasBeenSet() const { return m_agentCollaboratorNameHasBeenSet; }
    template<typename AgentCollaboratorNameT = Aws::String>
    void SetAgentCollaboratorName(AgentCollaboratorNameT&& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = std::forward<AgentCollaboratorNameT>(value); }
    template<typename AgentCollaboratorNameT = Aws::String>
    AgentCollaboratorInvocationOutput& WithAgentCollaboratorName(AgentCollaboratorNameT&& value) { SetAgentCollaboratorName(std::forward<AgentCollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's agent collaborator alias ARN.</p>
     */
    inline const Aws::String& GetAgentCollaboratorAliasArn() const { return m_agentCollaboratorAliasArn; }
    inline bool AgentCollaboratorAliasArnHasBeenSet() const { return m_agentCollaboratorAliasArnHasBeenSet; }
    template<typename AgentCollaboratorAliasArnT = Aws::String>
    void SetAgentCollaboratorAliasArn(AgentCollaboratorAliasArnT&& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = std::forward<AgentCollaboratorAliasArnT>(value); }
    template<typename AgentCollaboratorAliasArnT = Aws::String>
    AgentCollaboratorInvocationOutput& WithAgentCollaboratorAliasArn(AgentCollaboratorAliasArnT&& value) { SetAgentCollaboratorAliasArn(std::forward<AgentCollaboratorAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output's output.</p>
     */
    inline const AgentCollaboratorOutputPayload& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = AgentCollaboratorOutputPayload>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = AgentCollaboratorOutputPayload>
    AgentCollaboratorInvocationOutput& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the output from the agent collaborator.</p>
     */
    inline const Metadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Metadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Metadata>
    AgentCollaboratorInvocationOutput& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentCollaboratorName;
    bool m_agentCollaboratorNameHasBeenSet = false;

    Aws::String m_agentCollaboratorAliasArn;
    bool m_agentCollaboratorAliasArnHasBeenSet = false;

    AgentCollaboratorOutputPayload m_output;
    bool m_outputHasBeenSet = false;

    Metadata m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
