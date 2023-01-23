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
  class BuildBotLocaleRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API BuildBotLocaleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BuildBotLocale"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline BuildBotLocaleRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline BuildBotLocaleRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to build. The identifier is returned in the
     * response from the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline BuildBotLocaleRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to build. This can only be the draft version of the
     * bot.</p>
     */
    inline BuildBotLocaleRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline BuildBotLocaleRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline BuildBotLocaleRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that the bot will be used in. The
     * string must match one of the supported locales. All of the intents, slot types,
     * and slots used in the bot must have the same locale. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline BuildBotLocaleRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
