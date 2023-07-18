/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/UtteranceContentType.h>
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
   * <p>An object that contains a response to the utterance from the
   * bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceBotResponse">AWS
   * API Reference</a></p>
   */
  class UtteranceBotResponse
  {
  public:
    AWS_LEXMODELSV2_API UtteranceBotResponse();
    AWS_LEXMODELSV2_API UtteranceBotResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceBotResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline UtteranceBotResponse& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline UtteranceBotResponse& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The text of the response to the utterance from the bot.</p>
     */
    inline UtteranceBotResponse& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline const UtteranceContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline void SetContentType(const UtteranceContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline void SetContentType(UtteranceContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline UtteranceBotResponse& WithContentType(const UtteranceContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The type of the response. The following values are possible:</p> <ul> <li>
     * <p> <code>PlainText</code> – A plain text string.</p> </li> <li> <p>
     * <code>CustomPayload</code> – A response string that you can customize to include
     * data or metadata for your application.</p> </li> <li> <p> <code>SSML</code> – A
     * string that includes Speech Synthesis Markup Language to customize the audio
     * response.</p> </li> <li> <p> <code>ImageResponseCard</code> – An image with
     * buttons that the customer can select. See <a
     * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_runtime_ImageResponseCard.html">ImageResponseCard</a>
     * for more information.</p> </li> </ul>
     */
    inline UtteranceBotResponse& WithContentType(UtteranceContentType&& value) { SetContentType(std::move(value)); return *this;}


    
    inline const ImageResponseCard& GetImageResponseCard() const{ return m_imageResponseCard; }

    
    inline bool ImageResponseCardHasBeenSet() const { return m_imageResponseCardHasBeenSet; }

    
    inline void SetImageResponseCard(const ImageResponseCard& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = value; }

    
    inline void SetImageResponseCard(ImageResponseCard&& value) { m_imageResponseCardHasBeenSet = true; m_imageResponseCard = std::move(value); }

    
    inline UtteranceBotResponse& WithImageResponseCard(const ImageResponseCard& value) { SetImageResponseCard(value); return *this;}

    
    inline UtteranceBotResponse& WithImageResponseCard(ImageResponseCard&& value) { SetImageResponseCard(std::move(value)); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    UtteranceContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    ImageResponseCard m_imageResponseCard;
    bool m_imageResponseCardHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
