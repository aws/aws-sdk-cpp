﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/IntentStatistics.h>
#include <aws/lexv2-models/model/SlotTypeStatistics.h>
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
   * <p>A statistical summary of the bot recommendation results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotRecommendationResultStatistics">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API BotRecommendationResultStatistics
  {
  public:
    BotRecommendationResultStatistics();
    BotRecommendationResultStatistics(Aws::Utils::Json::JsonView jsonValue);
    BotRecommendationResultStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline const IntentStatistics& GetIntents() const{ return m_intents; }

    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline bool IntentsHasBeenSet() const { return m_intentsHasBeenSet; }

    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline void SetIntents(const IntentStatistics& value) { m_intentsHasBeenSet = true; m_intents = value; }

    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline void SetIntents(IntentStatistics&& value) { m_intentsHasBeenSet = true; m_intents = std::move(value); }

    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline BotRecommendationResultStatistics& WithIntents(const IntentStatistics& value) { SetIntents(value); return *this;}

    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline BotRecommendationResultStatistics& WithIntents(IntentStatistics&& value) { SetIntents(std::move(value)); return *this;}


    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline const SlotTypeStatistics& GetSlotTypes() const{ return m_slotTypes; }

    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline bool SlotTypesHasBeenSet() const { return m_slotTypesHasBeenSet; }

    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline void SetSlotTypes(const SlotTypeStatistics& value) { m_slotTypesHasBeenSet = true; m_slotTypes = value; }

    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline void SetSlotTypes(SlotTypeStatistics&& value) { m_slotTypesHasBeenSet = true; m_slotTypes = std::move(value); }

    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline BotRecommendationResultStatistics& WithSlotTypes(const SlotTypeStatistics& value) { SetSlotTypes(value); return *this;}

    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline BotRecommendationResultStatistics& WithSlotTypes(SlotTypeStatistics&& value) { SetSlotTypes(std::move(value)); return *this;}

  private:

    IntentStatistics m_intents;
    bool m_intentsHasBeenSet;

    SlotTypeStatistics m_slotTypes;
    bool m_slotTypesHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
