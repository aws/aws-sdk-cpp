﻿/**
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
  class CreateSlotTypeRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateSlotTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSlotType"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the slot. A slot type name must be unique within the intent.</p>
     */
    inline const Aws::String& GetSlotTypeName() const{ return m_slotTypeName; }
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }
    inline void SetSlotTypeName(const Aws::String& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = value; }
    inline void SetSlotTypeName(Aws::String&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::move(value); }
    inline void SetSlotTypeName(const char* value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName.assign(value); }
    inline CreateSlotTypeRequest& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}
    inline CreateSlotTypeRequest& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot type. Use the description to help identify the slot
     * type in lists.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateSlotTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSlotTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>SlotTypeValue</code> objects that defines the values that the
     * slot type can take. Each value can have a list of synonyms, additional values
     * that help train the machine learning model about the values that it resolves for
     * a slot.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const{ return m_slotTypeValues; }
    inline bool SlotTypeValuesHasBeenSet() const { return m_slotTypeValuesHasBeenSet; }
    inline void SetSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = value; }
    inline void SetSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = std::move(value); }
    inline CreateSlotTypeRequest& WithSlotTypeValues(const Aws::Vector<SlotTypeValue>& value) { SetSlotTypeValues(value); return *this;}
    inline CreateSlotTypeRequest& WithSlotTypeValues(Aws::Vector<SlotTypeValue>&& value) { SetSlotTypeValues(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& AddSlotTypeValues(const SlotTypeValue& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.push_back(value); return *this; }
    inline CreateSlotTypeRequest& AddSlotTypeValues(SlotTypeValue&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines the strategy that Amazon Lex uses to select a value from the list
     * of possible values. The field can be set to one of the following values:</p>
     * <ul> <li> <p> <code>ORIGINAL_VALUE</code> - Returns the value entered by the
     * user, if the user value is similar to the slot value.</p> </li> <li> <p>
     * <code>TOP_RESOLUTION</code> - If there is a resolution list for the slot, return
     * the first value in the resolution list. If there is no resolution list, return
     * null.</p> </li> </ul> <p>If you don't specify the
     * <code>valueSelectionSetting</code> parameter, the default is
     * <code>ORIGINAL_VALUE</code>.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const{ return m_valueSelectionSetting; }
    inline bool ValueSelectionSettingHasBeenSet() const { return m_valueSelectionSettingHasBeenSet; }
    inline void SetValueSelectionSetting(const SlotValueSelectionSetting& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = value; }
    inline void SetValueSelectionSetting(SlotValueSelectionSetting&& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = std::move(value); }
    inline CreateSlotTypeRequest& WithValueSelectionSetting(const SlotValueSelectionSetting& value) { SetValueSelectionSetting(value); return *this;}
    inline CreateSlotTypeRequest& WithValueSelectionSetting(SlotValueSelectionSetting&& value) { SetValueSelectionSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built-in slot type used as a parent of this slot type. When you define a
     * parent slot type, the new slot type has the configuration of the parent slot
     * type.</p> <p>Only <code>AMAZON.AlphaNumeric</code> is supported.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = value; }
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::move(value); }
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature.assign(value); }
    inline CreateSlotTypeRequest& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}
    inline CreateSlotTypeRequest& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with this slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline CreateSlotTypeRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline CreateSlotTypeRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot version associated with this slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline CreateSlotTypeRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline CreateSlotTypeRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that the slot type will be used in.
     * The string must match one of the supported locales. All of the bots, intents,
     * and slots used by the slot type must have the same locale. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline CreateSlotTypeRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline CreateSlotTypeRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline CreateSlotTypeRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the type of external information used to create the slot type.</p>
     */
    inline const ExternalSourceSetting& GetExternalSourceSetting() const{ return m_externalSourceSetting; }
    inline bool ExternalSourceSettingHasBeenSet() const { return m_externalSourceSettingHasBeenSet; }
    inline void SetExternalSourceSetting(const ExternalSourceSetting& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = value; }
    inline void SetExternalSourceSetting(ExternalSourceSetting&& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = std::move(value); }
    inline CreateSlotTypeRequest& WithExternalSourceSetting(const ExternalSourceSetting& value) { SetExternalSourceSetting(value); return *this;}
    inline CreateSlotTypeRequest& WithExternalSourceSetting(ExternalSourceSetting&& value) { SetExternalSourceSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline const CompositeSlotTypeSetting& GetCompositeSlotTypeSetting() const{ return m_compositeSlotTypeSetting; }
    inline bool CompositeSlotTypeSettingHasBeenSet() const { return m_compositeSlotTypeSettingHasBeenSet; }
    inline void SetCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = value; }
    inline void SetCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = std::move(value); }
    inline CreateSlotTypeRequest& WithCompositeSlotTypeSetting(const CompositeSlotTypeSetting& value) { SetCompositeSlotTypeSetting(value); return *this;}
    inline CreateSlotTypeRequest& WithCompositeSlotTypeSetting(CompositeSlotTypeSetting&& value) { SetCompositeSlotTypeSetting(std::move(value)); return *this;}
    ///@}
  private:

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
