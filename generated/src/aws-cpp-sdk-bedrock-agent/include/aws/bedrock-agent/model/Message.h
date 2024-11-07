/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ConversationRole.h>
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
    AWS_BEDROCKAGENT_API Message();
    AWS_BEDROCKAGENT_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content in the message.</p>
     */
    inline const Aws::Vector<ContentBlock>& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Vector<ContentBlock>& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Vector<ContentBlock>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline Message& WithContent(const Aws::Vector<ContentBlock>& value) { SetContent(value); return *this;}
    inline Message& WithContent(Aws::Vector<ContentBlock>&& value) { SetContent(std::move(value)); return *this;}
    inline Message& AddContent(const ContentBlock& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }
    inline Message& AddContent(ContentBlock&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role that the message belongs to.</p>
     */
    inline const ConversationRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const ConversationRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(ConversationRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline Message& WithRole(const ConversationRole& value) { SetRole(value); return *this;}
    inline Message& WithRole(ConversationRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContentBlock> m_content;
    bool m_contentHasBeenSet = false;

    ConversationRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
