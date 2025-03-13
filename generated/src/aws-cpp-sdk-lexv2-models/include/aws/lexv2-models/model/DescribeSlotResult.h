/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotValueElicitationSetting.h>
#include <aws/lexv2-models/model/ObfuscationSetting.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/MultipleValuesSetting.h>
#include <aws/lexv2-models/model/SubSlotSetting.h>
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
  class DescribeSlotResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeSlotResult() = default;
    AWS_LEXMODELSV2_API DescribeSlotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeSlotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier generated for the slot.</p>
     */
    inline const Aws::String& GetSlotId() const { return m_slotId; }
    template<typename SlotIdT = Aws::String>
    void SetSlotId(SlotIdT&& value) { m_slotIdHasBeenSet = true; m_slotId = std::forward<SlotIdT>(value); }
    template<typename SlotIdT = Aws::String>
    DescribeSlotResult& WithSlotId(SlotIdT&& value) { SetSlotId(std::forward<SlotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name specified for the slot.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    DescribeSlotResult& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description specified for the slot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeSlotResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the slot type that determines the values entered into the
     * slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    DescribeSlotResult& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prompts that Amazon Lex uses to elicit a value for the slot.</p>
     */
    inline const SlotValueElicitationSetting& GetValueElicitationSetting() const { return m_valueElicitationSetting; }
    template<typename ValueElicitationSettingT = SlotValueElicitationSetting>
    void SetValueElicitationSetting(ValueElicitationSettingT&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::forward<ValueElicitationSettingT>(value); }
    template<typename ValueElicitationSettingT = SlotValueElicitationSetting>
    DescribeSlotResult& WithValueElicitationSetting(ValueElicitationSettingT&& value) { SetValueElicitationSetting(std::forward<ValueElicitationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether slot values are shown in Amazon CloudWatch logs. If the value is
     * <code>None</code>, the actual value of the slot is shown in logs.</p>
     */
    inline const ObfuscationSetting& GetObfuscationSetting() const { return m_obfuscationSetting; }
    template<typename ObfuscationSettingT = ObfuscationSetting>
    void SetObfuscationSetting(ObfuscationSettingT&& value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = std::forward<ObfuscationSettingT>(value); }
    template<typename ObfuscationSettingT = ObfuscationSetting>
    DescribeSlotResult& WithObfuscationSetting(ObfuscationSettingT&& value) { SetObfuscationSetting(std::forward<ObfuscationSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    DescribeSlotResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the slot.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    DescribeSlotResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language and locale specified for the slot.</p>
     */
    inline const Aws::String& GetLocaleId() const { return m_localeId; }
    template<typename LocaleIdT = Aws::String>
    void SetLocaleId(LocaleIdT&& value) { m_localeIdHasBeenSet = true; m_localeId = std::forward<LocaleIdT>(value); }
    template<typename LocaleIdT = Aws::String>
    DescribeSlotResult& WithLocaleId(LocaleIdT&& value) { SetLocaleId(std::forward<LocaleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the intent associated with the slot.</p>
     */
    inline const Aws::String& GetIntentId() const { return m_intentId; }
    template<typename IntentIdT = Aws::String>
    void SetIntentId(IntentIdT&& value) { m_intentIdHasBeenSet = true; m_intentId = std::forward<IntentIdT>(value); }
    template<typename IntentIdT = Aws::String>
    DescribeSlotResult& WithIntentId(IntentIdT&& value) { SetIntentId(std::forward<IntentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the slot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeSlotResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the slot was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeSlotResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the slot accepts multiple values in a single utterance.</p>
     * <p>If the <code>multipleValuesSetting</code> is not set, the default value is
     * <code>false</code>.</p>
     */
    inline const MultipleValuesSetting& GetMultipleValuesSetting() const { return m_multipleValuesSetting; }
    template<typename MultipleValuesSettingT = MultipleValuesSetting>
    void SetMultipleValuesSetting(MultipleValuesSettingT&& value) { m_multipleValuesSettingHasBeenSet = true; m_multipleValuesSetting = std::forward<MultipleValuesSettingT>(value); }
    template<typename MultipleValuesSettingT = MultipleValuesSetting>
    DescribeSlotResult& WithMultipleValuesSetting(MultipleValuesSettingT&& value) { SetMultipleValuesSetting(std::forward<MultipleValuesSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots and the expression for the
     * composite slot.</p>
     */
    inline const SubSlotSetting& GetSubSlotSetting() const { return m_subSlotSetting; }
    template<typename SubSlotSettingT = SubSlotSetting>
    void SetSubSlotSetting(SubSlotSettingT&& value) { m_subSlotSettingHasBeenSet = true; m_subSlotSetting = std::forward<SubSlotSettingT>(value); }
    template<typename SubSlotSettingT = SubSlotSetting>
    DescribeSlotResult& WithSubSlotSetting(SubSlotSettingT&& value) { SetSubSlotSetting(std::forward<SubSlotSettingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSlotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    MultipleValuesSetting m_multipleValuesSetting;
    bool m_multipleValuesSettingHasBeenSet = false;

    SubSlotSetting m_subSlotSetting;
    bool m_subSlotSettingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
