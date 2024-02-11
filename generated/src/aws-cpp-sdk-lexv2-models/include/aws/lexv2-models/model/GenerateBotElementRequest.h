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
  class GenerateBotElementRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API GenerateBotElementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateBotElement"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The intent unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The bot unique Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The unique locale Id for the bot request to generate utterances.</p>
     */
    inline GenerateBotElementRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

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
