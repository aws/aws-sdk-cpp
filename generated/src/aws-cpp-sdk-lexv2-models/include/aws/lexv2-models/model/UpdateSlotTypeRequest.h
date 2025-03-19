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
    AWS_LEXMODELSV2_API UpdateSlotTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSlotType"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the slot type to update.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    UpdateSlotTypeRequest& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const { return m_slotTypeName; }
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }
    template<typename SlotTypeNameT = Aws::String>
    void SetSlotTypeName(SlotTypeNameT&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::forward<SlotTypeNameT>(value); }
    template<typename SlotTypeNameT = Aws::String>
    UpdateSlotTypeRequest& WithSlotTypeName(SlotTypeNameT&& value) { SetSlotTypeName(std::forward<SlotTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSlotTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new list of values and their optional synonyms that define the values that
     * the slot type can take.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const { return m_slotTypeValues; }
    inline bool SlotTypeValuesHasBeenSet() const { return m_slotTypeValuesHasBeenSet; }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    void SetSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = std::forward<SlotTypeValuesT>(value); }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    UpdateSlotTypeRequest& WithSlotTypeValues(SlotTypeValuesT&& value) { SetSlotTypeValues(std::forward<SlotTypeValuesT>(value)); return *this;}
    template<typename SlotTypeValuesT = SlotTypeValue>
    UpdateSlotTypeRequest& AddSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.emplace_back(std::forward<SlotTypeValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The strategy that Amazon Lex should use when deciding on a value from the
     * list of slot type values.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const { return m_valueSelectionSetting; }
    inline bool ValueSelectionSettingHasBeenSet() const { return m_valueSelectionSettingHasBeenSet; }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    void SetValueSelectionSetting(ValueSelectionSettingT&& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = std::forward<ValueSelectionSettingT>(value); }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    UpdateSlotTypeRequest& WithValueSelectionSetting(ValueSelectionSettingT&& value) { SetValueSelectionSetting(std::forward<ValueSelectionSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new built-in slot type that should be used as the parent of this slot
     * type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    UpdateSlotTypeRequest& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot that contains the slot type.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    UpdateSlotTypeRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot that contains the slot type. Must be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UpdateSlotTypeRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale that contains the slot type. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    UpdateSlotTypeRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExternalSourceSetting& GetExternalSourceSetting() const { return m_externalSourceSetting; }
    inline bool ExternalSourceSettingHasBeenSet() const { return m_externalSourceSettingHasBeenSet; }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    void SetExternalSourceSetting(ExternalSourceSettingT&& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = std::forward<ExternalSourceSettingT>(value); }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    UpdateSlotTypeRequest& WithExternalSourceSetting(ExternalSourceSettingT&& value) { SetExternalSourceSetting(std::forward<ExternalSourceSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline const CompositeSlotTypeSetting& GetCompositeSlotTypeSetting() const { return m_compositeSlotTypeSetting; }
    inline bool CompositeSlotTypeSettingHasBeenSet() const { return m_compositeSlotTypeSettingHasBeenSet; }
    template<typename CompositeSlotTypeSettingT = CompositeSlotTypeSetting>
    void SetCompositeSlotTypeSetting(CompositeSlotTypeSettingT&& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = std::forward<CompositeSlotTypeSettingT>(value); }
    template<typename CompositeSlotTypeSettingT = CompositeSlotTypeSetting>
    UpdateSlotTypeRequest& WithCompositeSlotTypeSetting(CompositeSlotTypeSettingT&& value) { SetCompositeSlotTypeSetting(std::forward<CompositeSlotTypeSettingT>(value)); return *this;}
    ///@}
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
