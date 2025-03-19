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
    AWS_LEXRUNTIMEV2_API Message() = default;
    AWS_LEXRUNTIMEV2_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the message.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Message& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of response.</p>
     */
    inline MessageContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(MessageContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline Message& WithContentType(MessageContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    
    inline const ImageResponseCard& GetImageResponseCard() const { return m_imageResponseCard; }
    inline bool ImageResponseCardHasBeenSet() const { return m_imageResponseCardHasBeenSet; }
    template<typename ImageResponseCardT = ImageResponseCard>
    void SetImageResponseCard(ImageResponseCardT&& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = std::forward<ImageResponseCardT>(value); }
    template<typename ImageResponseCardT = ImageResponseCard>
    Message& WithImageResponseCard(ImageResponseCardT&& value) { SetImageResponseCard(std::forward<ImageResponseCardT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    MessageContentType m_contentType{MessageContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    ImageResponseCard m_imageResponseCard;
    bool m_imageResponseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
