/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/SlotConstraint.h>
#include <aws/lex-models/model/Prompt.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LEXMODELBUILDINGSERVICE_API Slot
  {
  public:
    Slot();
    Slot(Aws::Utils::Json::JsonView jsonValue);
    Slot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the slot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the slot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the slot.</p>
     */
    inline Slot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the slot.</p>
     */
    inline Slot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot.</p>
     */
    inline Slot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the slot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the slot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the slot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the slot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the slot.</p>
     */
    inline Slot& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the slot.</p>
     */
    inline Slot& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the slot.</p>
     */
    inline Slot& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline const SlotConstraint& GetSlotConstraint() const{ return m_slotConstraint; }

    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }

    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline void SetSlotConstraint(const SlotConstraint& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }

    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline void SetSlotConstraint(SlotConstraint&& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = std::move(value); }

    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline Slot& WithSlotConstraint(const SlotConstraint& value) { SetSlotConstraint(value); return *this;}

    /**
     * <p>Specifies whether the slot is required or optional. </p>
     */
    inline Slot& WithSlotConstraint(SlotConstraint&& value) { SetSlotConstraint(std::move(value)); return *this;}


    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline const Aws::String& GetSlotType() const{ return m_slotType; }

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline bool SlotTypeHasBeenSet() const { return m_slotTypeHasBeenSet; }

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline void SetSlotType(const Aws::String& value) { m_slotTypeHasBeenSet = true; m_slotType = value; }

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline void SetSlotType(Aws::String&& value) { m_slotTypeHasBeenSet = true; m_slotType = std::move(value); }

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline void SetSlotType(const char* value) { m_slotTypeHasBeenSet = true; m_slotType.assign(value); }

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline Slot& WithSlotType(const Aws::String& value) { SetSlotType(value); return *this;}

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline Slot& WithSlotType(Aws::String&& value) { SetSlotType(std::move(value)); return *this;}

    /**
     * <p>The type of the slot, either a custom slot type that you defined or one of
     * the built-in slot types.</p>
     */
    inline Slot& WithSlotType(const char* value) { SetSlotType(value); return *this;}


    /**
     * <p>The version of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeVersion() const{ return m_slotTypeVersion; }

    /**
     * <p>The version of the slot type.</p>
     */
    inline bool SlotTypeVersionHasBeenSet() const { return m_slotTypeVersionHasBeenSet; }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetSlotTypeVersion(const Aws::String& value) { m_slotTypeVersionHasBeenSet = true; m_slotTypeVersion = value; }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetSlotTypeVersion(Aws::String&& value) { m_slotTypeVersionHasBeenSet = true; m_slotTypeVersion = std::move(value); }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetSlotTypeVersion(const char* value) { m_slotTypeVersionHasBeenSet = true; m_slotTypeVersion.assign(value); }

    /**
     * <p>The version of the slot type.</p>
     */
    inline Slot& WithSlotTypeVersion(const Aws::String& value) { SetSlotTypeVersion(value); return *this;}

    /**
     * <p>The version of the slot type.</p>
     */
    inline Slot& WithSlotTypeVersion(Aws::String&& value) { SetSlotTypeVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the slot type.</p>
     */
    inline Slot& WithSlotTypeVersion(const char* value) { SetSlotTypeVersion(value); return *this;}


    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline const Prompt& GetValueElicitationPrompt() const{ return m_valueElicitationPrompt; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline bool ValueElicitationPromptHasBeenSet() const { return m_valueElicitationPromptHasBeenSet; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline void SetValueElicitationPrompt(const Prompt& value) { m_valueElicitationPromptHasBeenSet = true; m_valueElicitationPrompt = value; }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline void SetValueElicitationPrompt(Prompt&& value) { m_valueElicitationPromptHasBeenSet = true; m_valueElicitationPrompt = std::move(value); }

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline Slot& WithValueElicitationPrompt(const Prompt& value) { SetValueElicitationPrompt(value); return *this;}

    /**
     * <p>The prompt that Amazon Lex uses to elicit the slot value from the user.</p>
     */
    inline Slot& WithValueElicitationPrompt(Prompt&& value) { SetValueElicitationPrompt(std::move(value)); return *this;}


    /**
     * <p> Directs Lex the order in which to elicit this slot value from the user. For
     * example, if the intent has two slots with priorities 1 and 2, AWS Lex first
     * elicits a value for the slot with priority 1.</p> <p>If multiple slots share the
     * same priority, the order in which Lex elicits values is arbitrary.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p> Directs Lex the order in which to elicit this slot value from the user. For
     * example, if the intent has two slots with priorities 1 and 2, AWS Lex first
     * elicits a value for the slot with priority 1.</p> <p>If multiple slots share the
     * same priority, the order in which Lex elicits values is arbitrary.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p> Directs Lex the order in which to elicit this slot value from the user. For
     * example, if the intent has two slots with priorities 1 and 2, AWS Lex first
     * elicits a value for the slot with priority 1.</p> <p>If multiple slots share the
     * same priority, the order in which Lex elicits values is arbitrary.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p> Directs Lex the order in which to elicit this slot value from the user. For
     * example, if the intent has two slots with priorities 1 and 2, AWS Lex first
     * elicits a value for the slot with priority 1.</p> <p>If multiple slots share the
     * same priority, the order in which Lex elicits values is arbitrary.</p>
     */
    inline Slot& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline bool SampleUtterancesHasBeenSet() const { return m_sampleUtterancesHasBeenSet; }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline void SetSampleUtterances(const Aws::Vector<Aws::String>& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = value; }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline void SetSampleUtterances(Aws::Vector<Aws::String>&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances = std::move(value); }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline Slot& WithSampleUtterances(const Aws::Vector<Aws::String>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline Slot& WithSampleUtterances(Aws::Vector<Aws::String>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline Slot& AddSampleUtterances(const Aws::String& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline Slot& AddSampleUtterances(Aws::String&& value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(std::move(value)); return *this; }

    /**
     * <p> If you know a specific pattern with which users might respond to an Amazon
     * Lex request for a slot value, you can provide those utterances to improve
     * accuracy. This is optional. In most cases, Amazon Lex is capable of
     * understanding user utterances. </p>
     */
    inline Slot& AddSampleUtterances(const char* value) { m_sampleUtterancesHasBeenSet = true; m_sampleUtterances.push_back(value); return *this; }


    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline const Aws::String& GetResponseCard() const{ return m_responseCard; }

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline bool ResponseCardHasBeenSet() const { return m_responseCardHasBeenSet; }

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline void SetResponseCard(const Aws::String& value) { m_responseCardHasBeenSet = true; m_responseCard = value; }

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline void SetResponseCard(Aws::String&& value) { m_responseCardHasBeenSet = true; m_responseCard = std::move(value); }

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline void SetResponseCard(const char* value) { m_responseCardHasBeenSet = true; m_responseCard.assign(value); }

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline Slot& WithResponseCard(const Aws::String& value) { SetResponseCard(value); return *this;}

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline Slot& WithResponseCard(Aws::String&& value) { SetResponseCard(std::move(value)); return *this;}

    /**
     * <p> A set of possible responses for the slot type used by text-based clients. A
     * user chooses an option from the response card, instead of using text to reply.
     * </p>
     */
    inline Slot& WithResponseCard(const char* value) { SetResponseCard(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SlotConstraint m_slotConstraint;
    bool m_slotConstraintHasBeenSet;

    Aws::String m_slotType;
    bool m_slotTypeHasBeenSet;

    Aws::String m_slotTypeVersion;
    bool m_slotTypeVersionHasBeenSet;

    Prompt m_valueElicitationPrompt;
    bool m_valueElicitationPromptHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    Aws::Vector<Aws::String> m_sampleUtterances;
    bool m_sampleUtterancesHasBeenSet;

    Aws::String m_responseCard;
    bool m_responseCardHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
