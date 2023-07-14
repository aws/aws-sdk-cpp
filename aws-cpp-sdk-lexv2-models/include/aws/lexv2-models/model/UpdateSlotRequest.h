﻿/**
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
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELSV2_API UpdateSlotRequest : public LexModelsV2Request
  {
  public:
    UpdateSlotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSlot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline void SetSlotId(const Aws::String& value) { m_slotIdHasBeenSet = true; m_slotId = value; }

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline void SetSlotId(Aws::String&& value) { m_slotIdHasBeenSet = true; m_slotId = std::move(value); }

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline void SetSlotId(const char* value) { m_slotIdHasBeenSet = true; m_slotId.assign(value); }

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline UpdateSlotRequest& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline UpdateSlotRequest& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the slot to update.</p>
     */
    inline UpdateSlotRequest& WithSlotId(const char* value) { SetSlotId(value); return *this;}


    /**
     * <p>The new name for the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The new name for the slot.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The new name for the slot.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The new name for the slot.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The new name for the slot.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The new name for the slot.</p>
     */
    inline UpdateSlotRequest& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The new name for the slot.</p>
     */
    inline UpdateSlotRequest& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The new name for the slot.</p>
     */
    inline UpdateSlotRequest& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>The new description for the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description for the slot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description for the slot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description for the slot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description for the slot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description for the slot.</p>
     */
    inline UpdateSlotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description for the slot.</p>
     */
    inline UpdateSlotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description for the slot.</p>
     */
    inline UpdateSlotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline UpdateSlotRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline UpdateSlotRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the new slot type to associate with this slot. </p>
     */
    inline UpdateSlotRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }

    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline bool ValueElicitationSettingHasBeenSet() const { return m_valueElicitationSettingHasBeenSet; }

    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = value; }

    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::move(value); }

    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline UpdateSlotRequest& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}

    /**
     * <p>A new set of prompts that Amazon Lex sends to the user to elicit a response
     * the provides a value for the slot.</p>
     */
    inline UpdateSlotRequest& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}


    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }

    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline bool ObfuscationSettingHasBeenSet() const { return m_obfuscationSettingHasBeenSet; }

    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = value; }

    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = std::move(value); }

    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline UpdateSlotRequest& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}

    /**
     * <p>New settings that determine how slot values are formatted in Amazon
     * CloudWatch logs. </p>
     */
    inline UpdateSlotRequest& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the slot. Must always be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that contains the slot. The string
     * must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline UpdateSlotRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }

    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline bool MultipleValuesSettingHasBeenSet() const { return m_multipleValuesSettingHasBeenSet; }

    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = value; }

    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = std::move(value); }

    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline UpdateSlotRequest& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}

    /**
     * <p>Determines whether the slot accepts multiple values in one response. Multiple
     * value slots are only available in the en-US locale. If you set this value to
     * <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>.</p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline UpdateSlotRequest& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}

  private:

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet;

    SlotValueElicitationSetting m_valueElicitationSetting;
    bool m_valueElicitationSettingHasBeenSet;

    ObfuscationSetting m_obfuscationSetting;
    bool m_obfuscationSettingHasBeenSet;

    Aws::String m_botId;
    bool m_botIdHasBeenSet;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet;

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet;

    MultipleValuesSetting m_multipleValuesSetting;
    bool m_multipleValuesSettingHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
