/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>A chat message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatMessage">AWS
 * API Reference</a></p>
 */
class ChatMessage {
 public:
  AWS_CONNECT_API ChatMessage() = default;
  AWS_CONNECT_API ChatMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ChatMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the content. Supported types are <code>text/plain</code>,
   * <code>text/markdown</code>, <code>application/json</code>, and
   * <code>application/vnd.amazonaws.connect.message.interactive.response</code>.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  ChatMessage& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the chat message. Maximum of 16,384 bytes for all content
   * types (<code>text/plain</code>, <code>text/markdown</code>,
   * <code>application/json</code>, and
   * <code>application/vnd.amazonaws.connect.message.interactive.response</code>).</p>
   * <p>Some messaging channels enforce lower limits. For channel-specific message
   * size limits, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/feature-limits.html#chat-message-size-limits">Chat
   * message size limits by channel</a> in the <i>Amazon Connect Customer
   * Administrator Guide</i>.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  ChatMessage& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contentType;

  Aws::String m_content;
  bool m_contentTypeHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
