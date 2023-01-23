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
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class StopBotRecommendationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StopBotRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopBotRecommendation"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation to be
     * stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StopBotRecommendationRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StopBotRecommendationRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot containing the bot recommendation.</p>
     */
    inline StopBotRecommendationRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot recommendation to stop.
     * The string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline bool BotRecommendationIdHasBeenSet() const { return m_botRecommendationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = value; }

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::move(value); }

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId.assign(value); }

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot recommendation to be stopped.</p>
     */
    inline StopBotRecommendationRequest& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_botRecommendationId;
    bool m_botRecommendationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
