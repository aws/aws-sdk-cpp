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
  class CreateSlotTypeRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateSlotTypeRequest() = default;

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
    inline const Aws::String& GetSlotTypeName() const { return m_slotTypeName; }
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }
    template<typename SlotTypeNameT = Aws::String>
    void SetSlotTypeName(SlotTypeNameT&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::forward<SlotTypeNameT>(value); }
    template<typename SlotTypeNameT = Aws::String>
    CreateSlotTypeRequest& WithSlotTypeName(SlotTypeNameT&& value) { SetSlotTypeName(std::forward<SlotTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot type. Use the description to help identify the slot
     * type in lists.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSlotTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>SlotTypeValue</code> objects that defines the values that the
     * slot type can take. Each value can have a list of synonyms, additional values
     * that help train the machine learning model about the values that it resolves for
     * a slot.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const { return m_slotTypeValues; }
    inline bool SlotTypeValuesHasBeenSet() const { return m_slotTypeValuesHasBeenSet; }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    void SetSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = std::forward<SlotTypeValuesT>(value); }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    CreateSlotTypeRequest& WithSlotTypeValues(SlotTypeValuesT&& value) { SetSlotTypeValues(std::forward<SlotTypeValuesT>(value)); return *this;}
    template<typename SlotTypeValuesT = SlotTypeValue>
    CreateSlotTypeRequest& AddSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.emplace_back(std::forward<SlotTypeValuesT>(value)); return *this; }
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
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const { return m_valueSelectionSetting; }
    inline bool ValueSelectionSettingHasBeenSet() const { return m_valueSelectionSettingHasBeenSet; }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    void SetValueSelectionSetting(ValueSelectionSettingT&& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = std::forward<ValueSelectionSettingT>(value); }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    CreateSlotTypeRequest& WithValueSelectionSetting(ValueSelectionSettingT&& value) { SetValueSelectionSetting(std::forward<ValueSelectionSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built-in slot type used as a parent of this slot type. When you define a
     * parent slot type, the new slot type has the configuration of the parent slot
     * type.</p> <p>Only <code>AMAZON.AlphaNumeric</code> is supported.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    CreateSlotTypeRequest& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with this slot type.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateSlotTypeRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot version associated with this slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateSlotTypeRequest& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
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
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    CreateSlotTypeRequest& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the type of external information used to create the slot type.</p>
     */
    inline const ExternalSourceSetting& GetExternalSourceSetting() const { return m_externalSourceSetting; }
    inline bool ExternalSourceSettingHasBeenSet() const { return m_externalSourceSettingHasBeenSet; }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    void SetExternalSourceSetting(ExternalSourceSettingT&& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = std::forward<ExternalSourceSettingT>(value); }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    CreateSlotTypeRequest& WithExternalSourceSetting(ExternalSourceSettingT&& value) { SetExternalSourceSetting(std::forward<ExternalSourceSettingT>(value)); return *this;}
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
    CreateSlotTypeRequest& WithCompositeSlotTypeSetting(CompositeSlotTypeSettingT&& value) { SetCompositeSlotTypeSetting(std::forward<CompositeSlotTypeSettingT>(value)); return *this;}
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
