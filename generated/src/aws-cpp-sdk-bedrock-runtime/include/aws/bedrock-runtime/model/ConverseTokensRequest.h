/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/Message.h>
#include <aws/bedrock-runtime/model/SystemContentBlock.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>The inputs from a <code>Converse</code> API request for token counting.</p>
   * <p>This structure mirrors the input format for the <code>Converse</code>
   * operation, allowing you to count tokens for conversation-based inference
   * requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseTokensRequest">AWS
   * API Reference</a></p>
   */
  class ConverseTokensRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseTokensRequest() = default;
    AWS_BEDROCKRUNTIME_API ConverseTokensRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseTokensRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of messages to count tokens for.</p>
     */
    inline const Aws::Vector<Message>& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = Aws::Vector<Message>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<Message>>
    ConverseTokensRequest& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = Message>
    ConverseTokensRequest& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The system content blocks to count tokens for. System content provides
     * instructions or context to the model about how it should behave or respond. The
     * token count will include any system content provided.</p>
     */
    inline const Aws::Vector<SystemContentBlock>& GetSystem() const { return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    void SetSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system = std::forward<SystemT>(value); }
    template<typename SystemT = Aws::Vector<SystemContentBlock>>
    ConverseTokensRequest& WithSystem(SystemT&& value) { SetSystem(std::forward<SystemT>(value)); return *this;}
    template<typename SystemT = SystemContentBlock>
    ConverseTokensRequest& AddSystem(SystemT&& value) { m_systemHasBeenSet = true; m_system.emplace_back(std::forward<SystemT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Message> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<SystemContentBlock> m_system;
    bool m_systemHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
