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
  class DescribeBotResourceGenerationRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotResourceGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBotResourceGeneration"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot for which to return the generation
     * details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The locale of the bot for which to return the generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline const Aws::String& GetGenerationId() const{ return m_generationId; }

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline void SetGenerationId(const Aws::String& value) { m_generationIdHasBeenSet = true; m_generationId = value; }

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline void SetGenerationId(Aws::String&& value) { m_generationIdHasBeenSet = true; m_generationId = std::move(value); }

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline void SetGenerationId(const char* value) { m_generationIdHasBeenSet = true; m_generationId.assign(value); }

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithGenerationId(const Aws::String& value) { SetGenerationId(value); return *this;}

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithGenerationId(Aws::String&& value) { SetGenerationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the generation request for which to return the
     * generation details.</p>
     */
    inline DescribeBotResourceGenerationRequest& WithGenerationId(const char* value) { SetGenerationId(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_generationId;
    bool m_generationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
