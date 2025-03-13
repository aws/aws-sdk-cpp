/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotValueSelectionSetting.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/ExternalSourceSetting.h>
#include <aws/lexv2-models/model/CompositeSlotTypeSetting.h>
#include <aws/lexv2-models/model/SlotTypeValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{
  class DescribeSlotTypeResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeSlotTypeResult() = default;
    AWS_LEXMODELSV2_API DescribeSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier for the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    DescribeSlotTypeResult& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const { return m_slotTypeName; }
    template<typename SlotTypeNameT = Aws::String>
    void SetSlotTypeName(SlotTypeNameT&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::forward<SlotTypeNameT>(value); }
    template<typename SlotTypeNameT = Aws::String>
    DescribeSlotTypeResult& WithSlotTypeName(SlotTypeNameT&& value) { SetSlotTypeName(std::forward<SlotTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeSlotTypeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values that the slot type can take. Includes any synonyms for the slot
     * type values.</p>
     */
    inline const Aws::Vector<SlotTypeValue>& GetSlotTypeValues() const { return m_slotTypeValues; }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    void SetSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues = std::forward<SlotTypeValuesT>(value); }
    template<typename SlotTypeValuesT = Aws::Vector<SlotTypeValue>>
    DescribeSlotTypeResult& WithSlotTypeValues(SlotTypeValuesT&& value) { SetSlotTypeValues(std::forward<SlotTypeValuesT>(value)); return *this;}
    template<typename SlotTypeValuesT = SlotTypeValue>
    DescribeSlotTypeResult& AddSlotTypeValues(SlotTypeValuesT&& value) { m_slotTypeValuesHasBeenSet = true; m_slotTypeValues.emplace_back(std::forward<SlotTypeValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The strategy that Amazon Lex uses to choose a value from a list of possible
     * values.</p>
     */
    inline const SlotValueSelectionSetting& GetValueSelectionSetting() const { return m_valueSelectionSetting; }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    void SetValueSelectionSetting(ValueSelectionSettingT&& value) { m_valueSelectionSettingHasBeenSet = true; m_valueSelectionSetting = std::forward<ValueSelectionSettingT>(value); }
    template<typename ValueSelectionSettingT = SlotValueSelectionSetting>
    DescribeSlotTypeResult& WithValueSelectionSetting(ValueSelectionSettingT&& value) { SetValueSelectionSetting(std::forward<ValueSelectionSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The built in slot type used as a parent to this slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    DescribeSlotTypeResult& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeSlotTypeResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeSlotTypeResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified for the slot type.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeSlotTypeResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeSlotTypeResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeSlotTypeResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExternalSourceSetting& GetExternalSourceSetting() const { return m_externalSourceSetting; }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    void SetExternalSourceSetting(ExternalSourceSettingT&& value) { m_externalSourceSettingHasBeenSet = true; m_externalSourceSetting = std::forward<ExternalSourceSettingT>(value); }
    template<typename ExternalSourceSettingT = ExternalSourceSetting>
    DescribeSlotTypeResult& WithExternalSourceSetting(ExternalSourceSettingT&& value) { SetExternalSourceSetting(std::forward<ExternalSourceSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for a composite slot type.</p>
     */
    inline const CompositeSlotTypeSetting& GetCompositeSlotTypeSetting() const { return m_compositeSlotTypeSetting; }
    template<typename CompositeSlotTypeSettingT = CompositeSlotTypeSetting>
    void SetCompositeSlotTypeSetting(CompositeSlotTypeSettingT&& value) { m_compositeSlotTypeSettingHasBeenSet = true; m_compositeSlotTypeSetting = std::forward<CompositeSlotTypeSettingT>(value); }
    template<typename CompositeSlotTypeSettingT = CompositeSlotTypeSetting>
    DescribeSlotTypeResult& WithCompositeSlotTypeSetting(CompositeSlotTypeSettingT&& value) { SetCompositeSlotTypeSetting(std::forward<CompositeSlotTypeSettingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSlotTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    ExternalSourceSetting m_externalSourceSetting;
    bool m_externalSourceSettingHasBeenSet = false;

    CompositeSlotTypeSetting m_compositeSlotTypeSetting;
    bool m_compositeSlotTypeSettingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
