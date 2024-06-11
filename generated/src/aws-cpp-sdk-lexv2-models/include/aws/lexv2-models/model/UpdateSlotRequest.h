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
  class UpdateSlotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateSlotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSlot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
    inline void SetSlotId(const Aws::String& value) { m_slotIdHasBeenSet = true; m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotIdHasBeenSet = true; m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotIdHasBeenSet = true; m_slotId.assign(value); }
    inline UpdateSlotRequest& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline UpdateSlotRequest& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }
    inline UpdateSlotRequest& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline UpdateSlotRequest& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateSlotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSlotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }
    inline UpdateSlotRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}
    inline UpdateSlotRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }
    inline bool ValueElicitationSettingHasBeenSet() const { return m_valueElicitationSettingHasBeenSet; }
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = value; }
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::move(value); }
    inline UpdateSlotRequest& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}
    inline UpdateSlotRequest& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }
    inline bool ObfuscationSettingHasBeenSet() const { return m_obfuscationSettingHasBeenSet; }
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = value; }
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = std::move(value); }
    inline UpdateSlotRequest& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}
    inline UpdateSlotRequest& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline UpdateSlotRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline UpdateSlotRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline UpdateSlotRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline UpdateSlotRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline UpdateSlotRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline UpdateSlotRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }
    inline UpdateSlotRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}
    inline UpdateSlotRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}
    inline UpdateSlotRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }
    inline bool MultipleValuesSettingHasBeenSet() const { return m_multipleValuesSettingHasBeenSet; }
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = value; }
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = std::move(value); }
    inline UpdateSlotRequest& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}
    inline UpdateSlotRequest& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const{ return m_subSlotSetting; }
    inline bool SubSlotSettingHasBeenSet() const { return m_subSlotSettingHasBeenSet; }
    inline void SetSubSlotSetting(const SubSlotSetting& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = value; }
    inline void SetSubSlotSetting(SubSlotSetting&& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = std::move(value); }
    inline UpdateSlotRequest& WithSubSlotSetting(const SubSlotSetting& value) { SetSubSlotSetting(value); return *this;}
    inline UpdateSlotRequest& WithSubSlotSetting(SubSlotSetting&& value) { SetSubSlotSetting(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet = false;

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
