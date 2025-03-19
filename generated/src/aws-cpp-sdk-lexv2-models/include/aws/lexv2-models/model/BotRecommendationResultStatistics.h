/**
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
  class BotRecommendationResultStatistics
  {
  public:
    AWS_LEXMODELSV2_API BotRecommendationResultStatistics() = default;
    AWS_LEXMODELSV2_API BotRecommendationResultStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotRecommendationResultStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Statistical information about about the intents associated with the bot
     * recommendation results.</p>
     */
    inline const IntentStatistics& GetIntents() const { return m_intents; }
    inline bool IntentsHasBeenSet() const { return m_intentsHasBeenSet; }
    template<typename IntentsT = IntentStatistics>
    void SetIntents(IntentsT&& value) { m_intentsHasBeenSet = true; m_intents = std::forward<IntentsT>(value); }
    template<typename IntentsT = IntentStatistics>
    BotRecommendationResultStatistics& WithIntents(IntentsT&& value) { SetIntents(std::forward<IntentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistical information about the slot types associated with the bot
     * recommendation results.</p>
     */
    inline const SlotTypeStatistics& GetSlotTypes() const { return m_slotTypes; }
    inline bool SlotTypesHasBeenSet() const { return m_slotTypesHasBeenSet; }
    template<typename SlotTypesT = SlotTypeStatistics>
    void SetSlotTypes(SlotTypesT&& value) { m_slotTypesHasBeenSet = true; m_slotTypes = std::forward<SlotTypesT>(value); }
    template<typename SlotTypesT = SlotTypeStatistics>
    BotRecommendationResultStatistics& WithSlotTypes(SlotTypesT&& value) { SetSlotTypes(std::forward<SlotTypesT>(value)); return *this;}
    ///@}
  private:

    IntentStatistics m_intents;
    bool m_intentsHasBeenSet = false;

    SlotTypeStatistics m_slotTypes;
    bool m_slotTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
