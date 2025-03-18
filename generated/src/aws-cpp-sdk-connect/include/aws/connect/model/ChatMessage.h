/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A chat message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatMessage">AWS
   * API Reference</a></p>
   */
  class ChatMessage
  {
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
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    ChatMessage& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the chat message. </p> <ul> <li> <p>For
     * <code>text/plain</code> and <code>text/markdown</code>, the Length Constraints
     * are Minimum of 1, Maximum of 1024. </p> </li> <li> <p>For
     * <code>application/json</code>, the Length Constraints are Minimum of 1, Maximum
     * of 12000. </p> </li> <li> <p>For
     * <code>application/vnd.amazonaws.connect.message.interactive.response</code>, the
     * Length Constraints are Minimum of 1, Maximum of 12288.</p> </li> </ul>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    ChatMessage& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
