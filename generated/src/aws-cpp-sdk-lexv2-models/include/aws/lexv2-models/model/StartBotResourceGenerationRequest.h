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
    AWS_LEXMODELSV2_API StartBotResourceGenerationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBotResourceGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The prompt to generate intents and slot types for the bot locale. Your
     * description should be both <i>detailed</i> and <i>precise</i> to help generate
     * appropriate and sufficient intents for your bot. Include a list of actions to
     * improve the intent creation process.</p>
     */
    inline const Aws::String& GetGenerationInputPrompt() const { return m_generationInputPrompt; }
    inline bool GenerationInputPromptHasBeenSet() const { return m_generationInputPromptHasBeenSet; }
    template<typename GenerationInputPromptT = Aws::String>
    void SetGenerationInputPrompt(GenerationInputPromptT&& value) { m_generationInputPromptHasBeenSet = true; m_generationInputPrompt = std::forward<GenerationInputPromptT>(value); }
    template<typename GenerationInputPromptT = Aws::String>
    StartBotResourceGenerationRequest& WithGenerationInputPrompt(GenerationInputPromptT&& value) { SetGenerationInputPrompt(std::forward<GenerationInputPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot for which to generate intents and slot
     * types.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    StartBotResourceGenerationRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot for which to generate intents and slot types.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    StartBotResourceGenerationRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the bot for which to generate intents and slot types.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    StartBotResourceGenerationRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}
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
