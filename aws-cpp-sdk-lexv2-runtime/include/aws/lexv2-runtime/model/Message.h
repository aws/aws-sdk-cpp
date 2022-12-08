/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/MessageContentType.h>
#include <aws/lexv2-runtime/model/ImageResponseCard.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Container for text that is returned to the customer..</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_LEXRUNTIMEV2_API Message();
    AWS_LEXRUNTIMEV2_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The text of the message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Indicates the type of response.</p>
     */
    inline const MessageContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>Indicates the type of response.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>Indicates the type of response.</p>
     */
    inline void SetContentType(const MessageContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Indicates the type of response.</p>
     */
    inline void SetContentType(MessageContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>Indicates the type of response.</p>
     */
    inline Message& WithContentType(const MessageContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>Indicates the type of response.</p>
     */
    inline Message& WithContentType(MessageContentType&& value) { SetContentType(std::move(value)); return *this;}


    
    inline const ImageResponseCard& GetImageResponseCard() const{ return m_imageResponseCard; }

    
    inline bool ImageResponseCardHasBeenSet() const { return m_imageResponseCardHasBeenSet; }

    
    inline void SetImageResponseCard(const ImageResponseCard& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = value; }

    
    inline void SetImageResponseCard(ImageResponseCard&& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = std::move(value); }

    
    inline Message& WithImageResponseCard(const ImageResponseCard& value) { SetImageResponseCard(value); return *this;}

    
    inline Message& WithImageResponseCard(ImageResponseCard&& value) { SetImageResponseCard(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    MessageContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    ImageResponseCard m_imageResponseCard;
    bool m_imageResponseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
