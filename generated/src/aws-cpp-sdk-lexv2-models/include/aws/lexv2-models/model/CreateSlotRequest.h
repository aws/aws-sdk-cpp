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
    AWS_LEXMODELSV2_API CreateSlotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline CreateSlotRequest& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline CreateSlotRequest& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot. Slot names must be unique within the bot that contains
     * the slot.</p>
     */
    inline CreateSlotRequest& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline CreateSlotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline CreateSlotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the slot. Use this to help identify the slot in lists.</p>
     */
    inline CreateSlotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline CreateSlotRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline CreateSlotRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the slot type associated with this slot. The slot
     * type determines the values that can be entered into the slot.</p>
     */
    inline CreateSlotRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }

    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline bool ValueElicitationSettingHasBeenSet() const { return m_valueElicitationSettingHasBeenSet; }

    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline void SetValueElicitationSetting(const SlotValueElicitationSetting& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = value; }

    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline void SetValueElicitationSetting(SlotValueElicitationSetting&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::move(value); }

    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline CreateSlotRequest& WithValueElicitationSetting(const SlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}

    /**
     * <p>Specifies prompts that Amazon Lex sends to the user to elicit a response that
     * provides the value for the slot. </p>
     */
    inline CreateSlotRequest& WithValueElicitationSetting(SlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}


    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const{ return m_obfuscationSetting; }

    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline bool ObfuscationSettingHasBeenSet() const { return m_obfuscationSettingHasBeenSet; }

    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline void SetObfuscationSetting(const ObfuscationSetting& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = value; }

    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline void SetObfuscationSetting(ObfuscationSetting&& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = std::move(value); }

    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline CreateSlotRequest& WithObfuscationSetting(const ObfuscationSetting& value) { SetObfuscationSetting(value); return *this;}

    /**
     * <p>Determines how slot values are used in Amazon CloudWatch logs. If the value
     * of the <code>obfuscationSetting</code> parameter is
     * <code>DefaultObfuscation</code>, slot values are obfuscated in the log output.
     * If the value is <code>None</code>, the actual value is present in the log
     * output.</p> <p>The default is to obfuscate values in the CloudWatch logs.</p>
     */
    inline CreateSlotRequest& WithObfuscationSetting(ObfuscationSetting&& value) { SetObfuscationSetting(std::move(value)); return *this;}


    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline CreateSlotRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateSlotRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateSlotRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that the slot will be used in. The
     * string must match one of the supported locales. All of the bots, intents, slot
     * types used by the slot must have the same locale. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline CreateSlotRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


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
    inline CreateSlotRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline CreateSlotRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the intent that contains the slot.</p>
     */
    inline CreateSlotRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const{ return m_multipleValuesSetting; }

    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline bool MultipleValuesSettingHasBeenSet() const { return m_multipleValuesSettingHasBeenSet; }

    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(const MultipleValuesSetting& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = value; }

    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline void SetMultipleValuesSetting(MultipleValuesSetting&& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = std::move(value); }

    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline CreateSlotRequest& WithMultipleValuesSetting(const MultipleValuesSetting& value) { SetMultipleValuesSetting(value); return *this;}

    /**
     * <p>Indicates whether the slot returns multiple values in one response.
     * Multi-value slots are only available in the en-US locale. If you set this value
     * to <code>true</code> in any other locale, Amazon Lex throws a
     * <code>ValidationException</code>. </p> <p>If the
     * <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline CreateSlotRequest& WithMultipleValuesSetting(MultipleValuesSetting&& value) { SetMultipleValuesSetting(std::move(value)); return *this;}


    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const{ return m_subSlotSetting; }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline bool SubSlotSettingHasBeenSet() const { return m_subSlotSettingHasBeenSet; }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline void SetSubSlotSetting(const SubSlotSetting& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = value; }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline void SetSubSlotSetting(SubSlotSetting&& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = std::move(value); }

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline CreateSlotRequest& WithSubSlotSetting(const SubSlotSetting& value) { SetSubSlotSetting(value); return *this;}

    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline CreateSlotRequest& WithSubSlotSetting(SubSlotSetting&& value) { SetSubSlotSetting(std::move(value)); return *this;}

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
