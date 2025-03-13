/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotValueResolutionStrategy.h>
#include <aws/lexv2-models/model/SlotValueRegexFilter.h>
#include <aws/lexv2-models/model/AdvancedRecognitionSetting.h>
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
   * <p>Contains settings used by Amazon Lex to select a slot value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotValueSelectionSetting">AWS
   * API Reference</a></p>
   */
  class SlotValueSelectionSetting
  {
  public:
    AWS_LEXMODELSV2_API SlotValueSelectionSetting() = default;
    AWS_LEXMODELSV2_API SlotValueSelectionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotValueSelectionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the slot resolution strategy that Amazon Lex uses to return slot
     * type values. The field can be set to one of the following values:</p> <ul> <li>
     * <p> <code>ORIGINAL_VALUE</code> - Returns the value entered by the user, if the
     * user value is similar to the slot value.</p> </li> <li> <p>
     * <code>TOP_RESOLUTION</code> - If there is a resolution list for the slot, return
     * the first value in the resolution list as the slot type value. If there is no
     * resolution list, null is returned.</p> </li> </ul> <p>If you don't specify the
     * <code>valueSelectionStrategy</code>, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline SlotValueResolutionStrategy GetResolutionStrategy() const { return m_resolutionStrategy; }
    inline bool ResolutionStrategyHasBeenSet() const { return m_resolutionStrategyHasBeenSet; }
    inline void SetResolutionStrategy(SlotValueResolutionStrategy value) { m_resolutionStrategyHasBeenSet = true; m_resolutionStrategy = value; }
    inline SlotValueSelectionSetting& WithResolutionStrategy(SlotValueResolutionStrategy value) { SetResolutionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to validate the value of a slot.</p>
     */
    inline const SlotValueRegexFilter& GetRegexFilter() const { return m_regexFilter; }
    inline bool RegexFilterHasBeenSet() const { return m_regexFilterHasBeenSet; }
    template<typename RegexFilterT = SlotValueRegexFilter>
    void SetRegexFilter(RegexFilterT&& value) { m_regexFilterHasBeenSet = true; m_regexFilter = std::forward<RegexFilterT>(value); }
    template<typename RegexFilterT = SlotValueRegexFilter>
    SlotValueSelectionSetting& WithRegexFilter(RegexFilterT&& value) { SetRegexFilter(std::forward<RegexFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides settings that enable advanced recognition settings for slot values.
     * You can use this to enable using slot values as a custom vocabulary for
     * recognizing user utterances.</p>
     */
    inline const AdvancedRecognitionSetting& GetAdvancedRecognitionSetting() const { return m_advancedRecognitionSetting; }
    inline bool AdvancedRecognitionSettingHasBeenSet() const { return m_advancedRecognitionSettingHasBeenSet; }
    template<typename AdvancedRecognitionSettingT = AdvancedRecognitionSetting>
    void SetAdvancedRecognitionSetting(AdvancedRecognitionSettingT&& value) { m_advancedRecognitionSettingHasBeenSet = true; m_advancedRecognitionSetting = std::forward<AdvancedRecognitionSettingT>(value); }
    template<typename AdvancedRecognitionSettingT = AdvancedRecognitionSetting>
    SlotValueSelectionSetting& WithAdvancedRecognitionSetting(AdvancedRecognitionSettingT&& value) { SetAdvancedRecognitionSetting(std::forward<AdvancedRecognitionSettingT>(value)); return *this;}
    ///@}
  private:

    SlotValueResolutionStrategy m_resolutionStrategy{SlotValueResolutionStrategy::NOT_SET};
    bool m_resolutionStrategyHasBeenSet = false;

    SlotValueRegexFilter m_regexFilter;
    bool m_regexFilterHasBeenSet = false;

    AdvancedRecognitionSetting m_advancedRecognitionSetting;
    bool m_advancedRecognitionSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
