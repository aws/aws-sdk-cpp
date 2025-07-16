/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Content.h>
#include <aws/bedrock-agentcore/model/Role.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>Contains conversational content for an event payload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Conversational">AWS
   * API Reference</a></p>
   */
  class Conversational
  {
  public:
    AWS_BEDROCKAGENTCORE_API Conversational() = default;
    AWS_BEDROCKAGENTCORE_API Conversational(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Conversational& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content of the conversation message.</p>
     */
    inline const Content& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Content>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Content>
    Conversational& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant in the conversation (for example, "user" or
     * "assistant").</p>
     */
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline Conversational& WithRole(Role value) { SetRole(value); return *this;}
    ///@}
  private:

    Content m_content;
    bool m_contentHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
