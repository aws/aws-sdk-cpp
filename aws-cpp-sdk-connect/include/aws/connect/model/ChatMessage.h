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
  class AWS_CONNECT_API ChatMessage
  {
  public:
    ChatMessage();
    ChatMessage(Aws::Utils::Json::JsonView jsonValue);
    ChatMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline ChatMessage& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline ChatMessage& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The type of the content. Supported types are text/plain.</p>
     */
    inline ChatMessage& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The content of the chat message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the chat message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the chat message.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the chat message.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the chat message.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the chat message.</p>
     */
    inline ChatMessage& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the chat message.</p>
     */
    inline ChatMessage& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the chat message.</p>
     */
    inline ChatMessage& WithContent(const char* value) { SetContent(value); return *this;}

  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
