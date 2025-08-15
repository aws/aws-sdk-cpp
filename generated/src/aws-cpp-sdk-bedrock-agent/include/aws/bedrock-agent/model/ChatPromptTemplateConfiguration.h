/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ToolConfiguration.h>
#include <aws/bedrock-agent/model/Message.h>
#include <aws/bedrock-agent/model/SystemContentBlock.h>
#include <aws/bedrock-agent/model/PromptInputVariable.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations to use a prompt in a conversational format. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ChatPromptTemplateConfiguration">AWS
   * API Reference</a></p>
   */
  class ChatPromptTemplateConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration() = default;
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains messages in the chat for the prompt.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    ChatPromptTemplateConfiguration& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    ChatPromptTemplateConfiguration& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains system prompts to provide context to the model or to describe how it
     * should behave.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const { return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    void SetSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system = std::forward<SystemT>(value); }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    ChatPromptTemplateConfiguration& WithSystem(SystemT&& value) { SetSystem(std::forward<SystemT>(value)); return *this;}
    template<typename SystemT = SystemContentBlock>
    ChatPromptTemplateConfiguration& AddSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system.emplace_back(std::forward<SystemT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the variables in the prompt template.</p>
     */
    inline const Aws::Vector<PromptInputVariable>& GetInputVariables() const { return m_inputVariables; }
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }
    template<typename InputVariablesT = Aws::Vector<PromptInputVariable>>
    void SetInputVariables(InputVariablesT&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::forward<InputVariablesT>(value); }
    template<typename InputVariablesT = Aws::Vector<PromptInputVariable>>
    ChatPromptTemplateConfiguration& WithInputVariables(InputVariablesT&& value) { SetInputVariables(std::forward<InputVariablesT>(value)); return *this;}
    template<typename InputVariablesT = PromptInputVariable>
    ChatPromptTemplateConfiguration& AddInputVariables(InputVariablesT&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace_back(std::forward<InputVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>
     */
    inline const ToolConfiguration& GetToolConfiguration() const { return m_toolConfiguration; }
    inline bool ToolConfigurationHasBeenSet() const { return m_toolConfigurationHasBeenSet; }
    template<typename ToolConfigurationT = ToolConfiguration>
    void SetToolConfiguration(ToolConfigurationT&& value) { m_toolConfigurationHasBeenSet = true; m_toolConfiguration = std::forward<ToolConfigurationT>(value); }
    template<typename ToolConfigurationT = ToolConfiguration>
    ChatPromptTemplateConfiguration& WithToolConfiguration(ToolConfigurationT&& value) { SetToolConfiguration(std::forward<ToolConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<SystemContentBlock> m_system;
    bool m_systemHasBeenSet = false;

    Aws::Vector<PromptInputVariable> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;

    ToolConfiguration m_toolConfiguration;
    bool m_toolConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
