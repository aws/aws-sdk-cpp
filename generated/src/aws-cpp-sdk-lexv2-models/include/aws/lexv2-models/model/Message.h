/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/PlainTextMessage.h>
#include <aws/lexv2-models/model/CustomPayload.h>
#include <aws/lexv2-models/model/SSMLMessage.h>
#include <aws/lexv2-models/model/ImageResponseCard.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object that provides message text and its type.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_LEXMODELSV2_API Message() = default;
    AWS_LEXMODELSV2_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message in plain text format.</p>
     */
    inline const PlainTextMessage& GetPlainTextMessage() const { return m_plainTextMessage; }
    inline bool PlainTextMessageHasBeenSet() const { return m_plainTextMessageHasBeenSet; }
    template<typename PlainTextMessageT = PlainTextMessage>
    void SetPlainTextMessage(PlainTextMessageT&& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = std::forward<PlainTextMessageT>(value); }
    template<typename PlainTextMessageT = PlainTextMessage>
    Message& WithPlainTextMessage(PlainTextMessageT&& value) { SetPlainTextMessage(std::forward<PlainTextMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline const CustomPayload& GetCustomPayload() const { return m_customPayload; }
    inline bool CustomPayloadHasBeenSet() const { return m_customPayloadHasBeenSet; }
    template<typename CustomPayloadT = CustomPayload>
    void SetCustomPayload(CustomPayloadT&& value) { m_customPayloadHasBeenSet = true; m_customPayload = std::forward<CustomPayloadT>(value); }
    template<typename CustomPayloadT = CustomPayload>
    Message& WithCustomPayload(CustomPayloadT&& value) { SetCustomPayload(std::forward<CustomPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline const SSMLMessage& GetSsmlMessage() const { return m_ssmlMessage; }
    inline bool SsmlMessageHasBeenSet() const { return m_ssmlMessageHasBeenSet; }
    template<typename SsmlMessageT = SSMLMessage>
    void SetSsmlMessage(SsmlMessageT&& value) { m_ssmlMessageHasBeenSet = true; m_ssmlMessage = std::forward<SsmlMessageT>(value); }
    template<typename SsmlMessageT = SSMLMessage>
    Message& WithSsmlMessage(SsmlMessageT&& value) { SetSsmlMessage(std::forward<SsmlMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline const ImageResponseCard& GetImageResponseCard() const { return m_imageResponseCard; }
    inline bool ImageResponseCardHasBeenSet() const { return m_imageResponseCardHasBeenSet; }
    template<typename ImageResponseCardT = ImageResponseCard>
    void SetImageResponseCard(ImageResponseCardT&& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = std::forward<ImageResponseCardT>(value); }
    template<typename ImageResponseCardT = ImageResponseCard>
    Message& WithImageResponseCard(ImageResponseCardT&& value) { SetImageResponseCard(std::forward<ImageResponseCardT>(value)); return *this;}
    ///@}
  private:

    PlainTextMessage m_plainTextMessage;
    bool m_plainTextMessageHasBeenSet = false;

    CustomPayload m_customPayload;
    bool m_customPayloadHasBeenSet = false;

    SSMLMessage m_ssmlMessage;
    bool m_ssmlMessageHasBeenSet = false;

    ImageResponseCard m_imageResponseCard;
    bool m_imageResponseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
