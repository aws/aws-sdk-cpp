/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ToolConfiguration.h>
#include <aws/bedrock-agent/model/PromptInputVariable.h>
#include <aws/bedrock-agent/model/Message.h>
#include <aws/bedrock-agent/model/SystemContentBlock.h>
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
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration();
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API ChatPromptTemplateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of the variables in the prompt template.</p>
     */
    inline const Aws::Vector<PromptInputVariable>& GetInputVariables() const{ return m_inputVariables; }
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }
    inline void SetInputVariables(const Aws::Vector<PromptInputVariable>& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = value; }
    inline void SetInputVariables(Aws::Vector<PromptInputVariable>&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::move(value); }
    inline ChatPromptTemplateConfiguration& WithInputVariables(const Aws::Vector<PromptInputVariable>& value) { SetInputVariables(value); return *this;}
    inline ChatPromptTemplateConfiguration& WithInputVariables(Aws::Vector<PromptInputVariable>&& value) { SetInputVariables(std::move(value)); return *this;}
    inline ChatPromptTemplateConfiguration& AddInputVariables(const PromptInputVariable& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.push_back(value); return *this; }
    inline ChatPromptTemplateConfiguration& AddInputVariables(PromptInputVariable&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains messages in the chat for the prompt.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messagesHasBeenSet = true; m_messages = value; }
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }
    inline ChatPromptTemplateConfiguration& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}
    inline ChatPromptTemplateConfiguration& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}
    inline ChatPromptTemplateConfiguration& AddMessages(const Message& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }
    inline ChatPromptTemplateConfiguration& AddMessages(Message&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains system prompts to provide context to the model or to describe how it
     * should behave.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const{ return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    inline void SetSystem(const Aws::Vector<SystemContentBlock>& value) { m_systemHasBeenSet = true; m_system = value; }
    inline void SetSystem(Aws::Vector<SystemContentBlock>&& value) { m_systemHasBeenSet = true; m_system = std::move(value); }
    inline ChatPromptTemplateConfiguration& WithSystem(const Aws::Vector<SystemContentBlock>& value) { SetSystem(value); return *this;}
    inline ChatPromptTemplateConfiguration& WithSystem(Aws::Vector<SystemContentBlock>&& value) { SetSystem(std::move(value)); return *this;}
    inline ChatPromptTemplateConfiguration& AddSystem(const SystemContentBlock& value) { m_systemHasBeenSet = true; m_system.push_back(value); return *this; }
    inline ChatPromptTemplateConfiguration& AddSystem(SystemContentBlock&& value) { m_systemHasBeenSet = true; m_system.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for the tools that the model can use when
     * generating a response.</p>
     */
    inline const ToolConfiguration& GetToolConfiguration() const{ return m_toolConfiguration; }
    inline bool ToolConfigurationHasBeenSet() const { return m_toolConfigurationHasBeenSet; }
    inline void SetToolConfiguration(const ToolConfiguration& value) { m_toolConfigurationHasBeenSet = true; m_toolConfiguration = value; }
    inline void SetToolConfiguration(ToolConfiguration&& value) { m_toolConfigurationHasBeenSet = true; m_toolConfiguration = std::move(value); }
    inline ChatPromptTemplateConfiguration& WithToolConfiguration(const ToolConfiguration& value) { SetToolConfiguration(value); return *this;}
    inline ChatPromptTemplateConfiguration& WithToolConfiguration(ToolConfiguration&& value) { SetToolConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PromptInputVariable> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<SystemContentBlock> m_system;
    bool m_systemHasBeenSet = false;

    ToolConfiguration m_toolConfiguration;
    bool m_toolConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
