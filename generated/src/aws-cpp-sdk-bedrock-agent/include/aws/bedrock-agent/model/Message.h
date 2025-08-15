/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ConversationRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ContentBlock.h>
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
   * <p>A message input or response from a model. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/prompt-management-create.html">Create
   * a prompt using Prompt management</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_BEDROCKAGENT_API Message() = default;
    AWS_BEDROCKAGENT_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role that the message belongs to.</p>
     */
    inline ConversationRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(ConversationRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline Message& WithRole(ConversationRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content in the message.</p>
     */
    inline const Aws::Vector<ContentBlock>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<ContentBlock>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<ContentBlock>>
    Message& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = ContentBlock>
    Message& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}
  private:

    ConversationRole m_role{ConversationRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::Vector<ContentBlock> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
