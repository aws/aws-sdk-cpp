/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/SlotConstraint.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/ObfuscationSetting.h>
#include <aws/lex-models/model/SlotDefaultValueSpec.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Identifies the version of a specific slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Slot">AWS API
   * Reference</a></p>
   */
  class Slot
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API Slot() = default;
    AWS_LEXMODELBUILDINGSERVICE_API Slot(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the slot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Slot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the slot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Slot& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline SlotConstraint GetSlotConstraint() const { return m_slotConstraint; }
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }
    inline void SetSlotConstraint(SlotConstraint value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }
    inline Slot& WithSlotConstraint(SlotConstraint value) { SetSlotConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline const Aws::String& GetSlotType() const { return m_slotType; }
    inline bool SlotTypeHasBeenSet() const { return m_slotTypeHasBeenSet; }
    template<typename SlotTypeT = Aws::String>
    void SetSlotType(SlotTypeT&& value) { m_slotTypeHasBeenSet = true; m_slotType = std::forward<SlotTypeT>(value); }
    template<typename SlotTypeT = Aws::String>
    Slot& WithSlotType(SlotTypeT&& value) { SetSlotType(std::forward<SlotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeVersion() const { return m_slotTypeVersion; }
    inline bool SlotTypeVersionHasBeenSet() const { return m_slotTypeVersionHasBeenSet; }
    template<typename SlotTypeVersionT = Aws::String>
    void SetSlotTypeVersion(SlotTypeVersionT&& value) { m_slotTypeVersionHasBeenSet = true; m_slotTypeVersion = std::forward<SlotTypeVersionT>(value); }
    template<typename SlotTypeVersionT = Aws::String>
    Slot& WithSlotTypeVersion(SlotTypeVersionT&& value) { SetSlotTypeVersion(std::forward<SlotTypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline const Prompt& GetValueElicitationPrompt() const { return m_valueElicitationPrompt; }
    inline bool ValueElicitationPromptHasBeenSet() const { return m_valueElicitationPromptHasBeenSet; }
    template<typename ValueElicitationPromptT = Prompt>
    void SetValueElicitationPrompt(ValueElicitationPromptT&& value) { m_valueElicitationPromptHasBeenSet = true; m_valueElicitationPrompt = std::forward<ValueElicitationPromptT>(value); }
    template<typename ValueElicitationPromptT = Prompt>
    Slot& WithValueElicitationPrompt(ValueElicitationPromptT&& value) { SetValueElicitationPrompt(std::forward<ValueElicitationPromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Directs Amazon Lex the order in which to elicit this slot value from the
     * user. For example, if the intent has two slots with priorities 1 and 2, AWS
     * Amazon Lex first elicits a value for the slot with priority 1.</p> <p>If
     * multiple slots share the same priority, the order in which Amazon Lex elicits
     * values is arbitrary.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline Slot& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const { return m_sampleUtterances; }
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }
    template<typename SampleUtterancesT = Aws::Vector<Aws::String>>
    void SetSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::forward<SampleUtterancesT>(value); }
    template<typename SampleUtterancesT = Aws::Vector<Aws::String>>
    Slot& WithSampleUtterances(SampleUtterancesT&& value) { SetSampleUtterances(std::forward<SampleUtterancesT>(value)); return *this;}
    template<typename SampleUtterancesT = Aws::String>
    Slot& AddSampleUtterances(SampleUtterancesT&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.emplace_back(std::forward<SampleUtterancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline const Aws::String& GetResponseCard() const { return m_responseCard; }
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }
    template<typename ResponseCardT = Aws::String>
    void SetResponseCard(ResponseCardT&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::forward<ResponseCardT>(value); }
    template<typename ResponseCardT = Aws::String>
    Slot& WithResponseCard(ResponseCardT&& value) { SetResponseCard(std::forward<ResponseCardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a slot is obfuscated in conversation logs and stored
     * utterances. When you obfuscate a slot, the value is replaced by the slot name in
     * curly braces ({}). For example, if the slot name is "full_name", obfuscated
     * values are replaced with "{full_name}". For more information, see <a
     * href="https://docs.aws.amazon.com/lex/latest/dg/how-obfuscate.html"> Slot
     * Obfuscation </a>. </p>
     */
    inline ObfuscationSetting GetObfuscationSetting() const { return m_obfuscationSetting; }
    inline bool ObfuscationSettingHasBeenSet() const { return m_obfuscationSettingHasBeenSet; }
    inline void SetObfuscationSetting(ObfuscationSetting value) { m_obfuscationSettingHasBeenSet = true; m_obfuscationSetting = value; }
    inline Slot& WithObfuscationSetting(ObfuscationSetting value) { SetObfuscationSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of default values for the slot. Default values are used when Amazon
     * Lex hasn't determined a value for a slot. You can specify default values from
     * context variables, session attributes, and defined values.</p>
     */
    inline const SlotDefaultValueSpec& GetDefaultValueSpec() const { return m_defaultValueSpec; }
    inline bool DefaultValueSpecHasBeenSet() const { return m_defaultValueSpecHasBeenSet; }
    template<typename DefaultValueSpecT = SlotDefaultValueSpec>
    void SetDefaultValueSpec(DefaultValueSpecT&& value) { m_defaultValueSpecHasBeenSet = true; m_defaultValueSpec = std::forward<DefaultValueSpecT>(value); }
    template<typename DefaultValueSpecT = SlotDefaultValueSpec>
    Slot& WithDefaultValueSpec(DefaultValueSpecT&& value) { SetDefaultValueSpec(std::forward<DefaultValueSpecT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SlotConstraint m_slotConstraint{SlotConstraint::NOT_SET};
    bool m_slotConstraintHasBeenSet = false;

    Aws::String m_slotType;
    bool m_slotTypeHasBeenSet = false;

    Aws::String m_slotTypeVersion;
    bool m_slotTypeVersionHasBeenSet = false;

    Prompt m_valueElicitationPrompt;
    bool m_valueElicitationPromptHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::Vector<Aws::String> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet = false;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet = false;

    ObfuscationSetting m_obfuscationSetting{ObfuscationSetting::NOT_SET};
    bool m_obfuscationSettingHasBeenSet = false;

    SlotDefaultValueSpec m_defaultValueSpec;
    bool m_defaultValueSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
