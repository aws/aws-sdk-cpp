/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotValueElicitationSetting.h>
#include <aws/lexv2-models/model/ObfuscationSetting.h>
#include <aws/lexv2-models/model/MultipleValuesSetting.h>
#include <aws/lexv2-models/model/SubSlotSetting.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateSlotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateSlotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    CreateSlotRequest& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSlotRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    CreateSlotRequest& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const { return m_valueElicitationSetting; }
    inline bool ValueElicitationSettingHasBeenSet() const { return m_valueElicitationSettingHasBeenSet; }
    template<typename ValueElicitationSettingT = SlotValueElicitationSetting>
    void SetValueElicitationSetting(ValueElicitationSettingT&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::forward<ValueElicitationSettingT>(value); }
    template<typename ValueElicitationSettingT = SlotValueElicitationSetting>
    CreateSlotRequest& WithValueElicitationSetting(ValueElicitationSettingT&& value) { SetValueElicitationSetting(std::forward<ValueElicitationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const { return m_obfuscationSetting; }
    inline bool ObfuscationSettingHasBeenSet() const { return m_obfuscationSettingHasBeenSet; }
    template<typename ObfuscationSettingT = ObfuscationSetting>
    void SetObfuscationSetting(ObfuscationSettingT&& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = std::forward<ObfuscationSettingT>(value); }
    template<typename ObfuscationSettingT = ObfuscationSetting>
    CreateSlotRequest& WithObfuscationSetting(ObfuscationSettingT&& value) { SetObfuscationSetting(std::forward<ObfuscationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateSlotRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateSlotRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    CreateSlotRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    CreateSlotRequest& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the <code>en-US</code> locale. If you
     * set this value to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const { return m_multipleValuesSetting; }
    inline bool MultipleValuesSettingHasBeenSet() const { return m_multipleValuesSettingHasBeenSet; }
    template<typename MultipleValuesSettingT = MultipleValuesSetting>
    void SetMultipleValuesSetting(MultipleValuesSettingT&& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = std::forward<MultipleValuesSettingT>(value); }
    template<typename MultipleValuesSettingT = MultipleValuesSetting>
    CreateSlotRequest& WithMultipleValuesSetting(MultipleValuesSettingT&& value) { SetMultipleValuesSetting(std::forward<MultipleValuesSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const { return m_subSlotSetting; }
    inline bool SubSlotSettingHasBeenSet() const { return m_subSlotSettingHasBeenSet; }
    template<typename SubSlotSettingT = SubSlotSetting>
    void SetSubSlotSetting(SubSlotSettingT&& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = std::forward<SubSlotSettingT>(value); }
    template<typename SubSlotSettingT = SubSlotSetting>
    CreateSlotRequest& WithSubSlotSetting(SubSlotSettingT&& value) { SetSubSlotSetting(std::forward<SubSlotSettingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    SlotValueElicitationSetting m_valueElicitationSetting;
    bool m_valueElicitationSettingHasBeenSet = false;

    ObfuscationSetting m_obfuscationSetting;
    bool m_obfuscationSettingHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    MultipleValuesSetting m_multipleValuesSetting;
    bool m_multipleValuesSettingHasBeenSet = false;

    SubSlotSetting m_subSlotSetting;
    bool m_subSlotSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
