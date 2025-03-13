/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ConversationRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/ContentBlock.h>
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
   * <p>A message input, or returned from, a call to <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
   * or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_BEDROCKRUNTIME_API Message() = default;
    AWS_BEDROCKRUNTIME_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role that the message plays in the message.</p>
     */
    inline ConversationRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(ConversationRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline Message& WithRole(ConversationRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message content. Note the following restrictions:</p> <ul> <li> <p>You
     * can include up to 20 images. Each image's size, height, and width must be no
     * more than 3.75 MB, 8000 px, and 8000 px, respectively.</p> </li> <li> <p>You can
     * include up to five documents. Each document's size must be no more than 4.5
     * MB.</p> </li> <li> <p>If you include a <code>ContentBlock</code> with a
     * <code>document</code> field in the array, you must also include a
     * <code>ContentBlock</code> with a <code>text</code> field.</p> </li> <li> <p>You
     * can only include images and documents if the <code>role</code> is
     * <code>user</code>.</p> </li> </ul>
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
} // namespace BedrockRuntime
} // namespace Aws
