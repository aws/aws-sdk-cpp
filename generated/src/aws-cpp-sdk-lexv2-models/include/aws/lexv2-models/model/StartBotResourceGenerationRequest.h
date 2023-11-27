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
  class StartBotResourceGenerationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API StartBotResourceGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBotResourceGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const{ return m_generationInputPrompt; }

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline bool GenerationInputPromptHasBeenSet() const { return m_generationInputPromptHasBeenSet; }

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline void SetGenerationInputPrompt(const Aws::String& value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt = value; }

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline void SetGenerationInputPrompt(Aws::String&& value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt = std::move(value); }

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline void SetGenerationInputPrompt(const char* value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt.assign(value); }

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline StartBotResourceGenerationRequest& WithGenerationInputPrompt(const Aws::String& value) { SetGenerationInputPrompt(value); return *this;}

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline StartBotResourceGenerationRequest& WithGenerationInputPrompt(Aws::String&& value) { SetGenerationInputPrompt(std::move(value)); return *this;}

    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline StartBotResourceGenerationRequest& WithGenerationInputPrompt(const char* value) { SetGenerationInputPrompt(value); return *this;}


    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline StartBotResourceGenerationRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_generationInputPrompt;
    bool m_generationInputPromptHasBeenSet = false;

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
