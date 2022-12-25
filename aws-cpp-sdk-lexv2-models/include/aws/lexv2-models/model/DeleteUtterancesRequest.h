/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DeleteUtterancesRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteUtterancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUtterances"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the utterances.</p>
     */
    inline DeleteUtterancesRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteUtterancesRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteUtterancesRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale where the utterances were
     * collected. The string must match one of the supported locales. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteUtterancesRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline DeleteUtterancesRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline DeleteUtterancesRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the session with the user. The ID is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeText.html">RecognizeText</a>
     * and <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_runtime_RecognizeUtterance.html">RecognizeUtterance</a>
     * operations.</p>
     */
    inline DeleteUtterancesRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
