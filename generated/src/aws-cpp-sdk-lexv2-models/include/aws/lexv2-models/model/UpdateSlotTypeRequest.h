/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotValueSelectionSetting.h>
#include <aws/lexv2-models/model/ExternalSourceSetting.h>
#include <aws/lexv2-models/model/CompositeSlotTypeSetting.h>
#include <aws/lexv2-models/model/SlotTypeValue.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateSlotTypeRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateSlotTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSlotType"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>The new name of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const{ return m_slotTypeName; }

    /**
     * <p>The new name of the slot type.</p>
     */
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }

    /**
     * <p>The new name of the slot type.</p>
     */
    inline void SetSlotTypeName(const Aws::String& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = value; }

    /**
     * <p>The new name of the slot type.</p>
     */
    inline void SetSlotTypeName(Aws::String&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::move(value); }

    /**
     * <p>The new name of the slot type.</p>
     */
    inline void SetSlotTypeName(const char* value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName.assign(value); }

    /**
     * <p>The new name of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}

    /**
     * <p>The new name of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}

    /**
     * <p>The new name of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}


    /**
     * <p>The new description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the slot type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const{ return m_slotTypeValues; }

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline bool SlotTypeValuesHasBeenSet() const { return m_slotTypeValuesHasBeenSet; }

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline void SetSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = value; }

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline void SetSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = std::move(value); }

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { SetSlotTypeValues(value); return *this;}

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline UpdateSlotTypeRequest& WithSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { SetSlotTypeValues(std::move(value)); return *this;}

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline UpdateSlotTypeRequest& AddSlotTypeValues(const SlotTypeValue& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.push_back(value); return *this; }

    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline UpdateSlotTypeRequest& AddSlotTypeValues(SlotTypeValue&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const{ return m_valueSelectionSetting; }

    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline bool ValueSelectionSettingHasBeenSet() const { return m_valueSelectionSettingHasBeenSet; }

    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline void SetValueSelectionSetting(const SlotValueSelectionSetting& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = value; }

    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline void SetValueSelectionSetting(SlotValueSelectionSetting&& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = std::move(value); }

    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline UpdateSlotTypeRequest& WithValueSelectionSetting(const SlotValueSelectionSetting& value) { SetValueSelectionSetting(value); return *this;}

    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline UpdateSlotTypeRequest& WithValueSelectionSetting(SlotValueSelectionSetting&& value) { SetValueSelectionSetting(std::move(value)); return *this;}


    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = value; }

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::move(value); }

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature.assign(value); }

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline UpdateSlotTypeRequest& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline UpdateSlotTypeRequest& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}

    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline UpdateSlotTypeRequest& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}


    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline UpdateSlotTypeRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotTypeRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotTypeRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline UpdateSlotTypeRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    
    inline const ExternalSourceSetting& GetExternalSourceSetting() const{ return m_externalSourceSetting; }

    
    inline bool ExternalSourceSettingHasBeenSet() const { return m_externalSourceSettingHasBeenSet; }

    
    inline void SetExternalSourceSetting(const ExternalSourceSetting& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = value; }

    
    inline void SetExternalSourceSetting(ExternalSourceSetting&& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = std::move(value); }

    
    inline UpdateSlotTypeRequest& WithExternalSourceSetting(const ExternalSourceSetting& value) { SetExternalSourceSetting(value); return *this;}

    
    inline UpdateSlotTypeRequest& WithExternalSourceSetting(ExternalSourceSetting&& value) { SetExternalSourceSetting(std::move(value)); return *this;}


    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline const CompositeSlotTypeSetting& GetCompositeSlotTypeSetting() const{ return m_compositeSlotTypeSetting; }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline bool CompositeSlotTypeSettingHasBeenSet() const { return m_compositeSlotTypeSettingHasBeenSet; }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline void SetCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = value; }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline void SetCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = std::move(value); }

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { SetCompositeSlotTypeSetting(value); return *this;}

    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline UpdateSlotTypeRequest& WithCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { SetCompositeSlotTypeSetting(std::move(value)); return *this;}

  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    Aws::String m_slotTypeName;
    bool m_slotTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<SlotTypeValue> m_slotTypeValues;
    bool m_slotTypeValuesHasBeenSet = false;

    SlotValueSelectionSetting m_valueSelectionSetting;
    bool m_valueSelectionSettingHasBeenSet = false;

    Aws::String m_parentSlotTypeSignature;
    bool m_parentSlotTypeSignatureHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    ExternalSourceSetting m_externalSourceSetting;
    bool m_externalSourceSettingHasBeenSet = false;

    CompositeSlotTypeSetting m_compositeSlotTypeSetting;
    bool m_compositeSlotTypeSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
