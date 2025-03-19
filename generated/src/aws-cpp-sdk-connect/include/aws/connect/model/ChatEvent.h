/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ChatEventType.h>
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
   * <p>Chat integration event containing payload to perform different chat actions
   * such as:</p> <ul> <li> <p>Sending a chat message</p> </li> <li> <p>Sending a
   * chat event, such as typing</p> </li> <li> <p>Disconnecting from a chat</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ChatEvent">AWS
   * API Reference</a></p>
   */
  class ChatEvent
  {
  public:
    AWS_CONNECT_API ChatEvent() = default;
    AWS_CONNECT_API ChatEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ChatEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of chat integration event. </p>
     */
    inline ChatEventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChatEventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ChatEvent& WithType(ChatEventType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of content. This is required when <code>Type</code> is
     * <code>MESSAGE</code> or <code>EVENT</code>. </p> <ul> <li> <p>For allowed
     * message content types, see the <code>ContentType</code> parameter in the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_SendMessage.html">SendMessage</a>
     * topic in the <i>Amazon Connect Participant Service API Reference</i>.</p> </li>
     * <li> <p>For allowed event content types, see the <code>ContentType</code>
     * parameter in the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_SendEvent.html">SendEvent</a>
     * topic in the <i>Amazon Connect Participant Service API Reference</i>. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    ChatEvent& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Content of the message or event. This is required when <code>Type</code> is
     * <code>MESSAGE</code> and for certain <code>ContentTypes</code> when
     * <code>Type</code> is <code>EVENT</code>.</p> <ul> <li> <p>For allowed message
     * content, see the <code>Content</code> parameter in the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_SendMessage.html">SendMessage</a>
     * topic in the <i>Amazon Connect Participant Service API Reference</i>.</p> </li>
     * <li> <p>For allowed event content, see the <code>Content</code> parameter in the
     * <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_SendEvent.html">SendEvent</a>
     * topic in the <i>Amazon Connect Participant Service API Reference</i>. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    ChatEvent& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    ChatEventType m_type{ChatEventType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
