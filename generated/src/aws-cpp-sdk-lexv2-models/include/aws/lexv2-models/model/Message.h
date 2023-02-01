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
   * <p>The object that provides message text and it's type.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_LEXMODELSV2_API Message();
    AWS_LEXMODELSV2_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A message in plain text format.</p>
     */
    inline const PlainTextMessage& GetPlainTextMessage() const{ return m_plainTextMessage; }

    /**
     * <p>A message in plain text format.</p>
     */
    inline bool PlainTextMessageHasBeenSet() const { return m_plainTextMessageHasBeenSet; }

    /**
     * <p>A message in plain text format.</p>
     */
    inline void SetPlainTextMessage(const PlainTextMessage& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = value; }

    /**
     * <p>A message in plain text format.</p>
     */
    inline void SetPlainTextMessage(PlainTextMessage&& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = std::move(value); }

    /**
     * <p>A message in plain text format.</p>
     */
    inline Message& WithPlainTextMessage(const PlainTextMessage& value) { SetPlainTextMessage(value); return *this;}

    /**
     * <p>A message in plain text format.</p>
     */
    inline Message& WithPlainTextMessage(PlainTextMessage&& value) { SetPlainTextMessage(std::move(value)); return *this;}


    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline const CustomPayload& GetCustomPayload() const{ return m_customPayload; }

    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline bool CustomPayloadHasBeenSet() const { return m_customPayloadHasBeenSet; }

    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline void SetCustomPayload(const CustomPayload& value) { m_customPayloadHasBeenSet = true; m_customPayload = value; }

    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline void SetCustomPayload(CustomPayload&& value) { m_customPayloadHasBeenSet = true; m_customPayload = std::move(value); }

    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline Message& WithCustomPayload(const CustomPayload& value) { SetCustomPayload(value); return *this;}

    /**
     * <p>A message in a custom format defined by the client application.</p>
     */
    inline Message& WithCustomPayload(CustomPayload&& value) { SetCustomPayload(std::move(value)); return *this;}


    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline const SSMLMessage& GetSsmlMessage() const{ return m_ssmlMessage; }

    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline bool SsmlMessageHasBeenSet() const { return m_ssmlMessageHasBeenSet; }

    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline void SetSsmlMessage(const SSMLMessage& value) { m_ssmlMessageHasBeenSet = true; m_ssmlMessage = value; }

    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline void SetSsmlMessage(SSMLMessage&& value) { m_ssmlMessageHasBeenSet = true; m_ssmlMessage = std::move(value); }

    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline Message& WithSsmlMessage(const SSMLMessage& value) { SetSsmlMessage(value); return *this;}

    /**
     * <p>A message in Speech Synthesis Markup Language (SSML).</p>
     */
    inline Message& WithSsmlMessage(SSMLMessage&& value) { SetSsmlMessage(std::move(value)); return *this;}


    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline const ImageResponseCard& GetImageResponseCard() const{ return m_imageResponseCard; }

    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline bool ImageResponseCardHasBeenSet() const { return m_imageResponseCardHasBeenSet; }

    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline void SetImageResponseCard(const ImageResponseCard& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = value; }

    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline void SetImageResponseCard(ImageResponseCard&& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = std::move(value); }

    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline Message& WithImageResponseCard(const ImageResponseCard& value) { SetImageResponseCard(value); return *this;}

    /**
     * <p>A message that defines a response card that the client application can show
     * to the user.</p>
     */
    inline Message& WithImageResponseCard(ImageResponseCard&& value) { SetImageResponseCard(std::move(value)); return *this;}

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
