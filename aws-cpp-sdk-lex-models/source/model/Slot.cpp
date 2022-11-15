/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Slot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

Slot::Slot() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotConstraint(SlotConstraint::NOT_SET),
    m_slotConstraintHasBeenSet(false),
    m_slotTypeHasBeenSet(false),
    m_slotTypeVersionHasBeenSet(false),
    m_valueElicitationPromptHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_responseCardHasBeenSet(false),
    m_obfuscationSetting(ObfuscationSetting::NOT_SET),
    m_obfuscationSettingHasBeenSet(false),
    m_defaultValueSpecHasBeenSet(false)
{
}

Slot::Slot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_slotConstraint(SlotConstraint::NOT_SET),
    m_slotConstraintHasBeenSet(false),
    m_slotTypeHasBeenSet(false),
    m_slotTypeVersionHasBeenSet(false),
    m_valueElicitationPromptHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_sampleUtterancesHasBeenSet(false),
    m_responseCardHasBeenSet(false),
    m_obfuscationSetting(ObfuscationSetting::NOT_SET),
    m_obfuscationSettingHasBeenSet(false),
    m_defaultValueSpecHasBeenSet(false)
{
  *this = jsonValue;
}

Slot& Slot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotConstraint"))
  {
    m_slotConstraint = SlotConstraintMapper::GetSlotConstraintForName(jsonValue.GetString("slotConstraint"));

    m_slotConstraintHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotType"))
  {
    m_slotType = jsonValue.GetString("slotType");

    m_slotTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("slotTypeVersion"))
  {
    m_slotTypeVersion = jsonValue.GetString("slotTypeVersion");

    m_slotTypeVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueElicitationPrompt"))
  {
    m_valueElicitationPrompt = jsonValue.GetObject("valueElicitationPrompt");

    m_valueElicitationPromptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsString());
    }
    m_sampleUtterancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("responseCard"))
  {
    m_responseCard = jsonValue.GetString("responseCard");

    m_responseCardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("obfuscationSetting"))
  {
    m_obfuscationSetting = ObfuscationSettingMapper::GetObfuscationSettingForName(jsonValue.GetString("obfuscationSetting"));

    m_obfuscationSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValueSpec"))
  {
    m_defaultValueSpec = jsonValue.GetObject("defaultValueSpec");

    m_defaultValueSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue Slot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_slotConstraintHasBeenSet)
  {
   payload.WithString("slotConstraint", SlotConstraintMapper::GetNameForSlotConstraint(m_slotConstraint));
  }

  if(m_slotTypeHasBeenSet)
  {
   payload.WithString("slotType", m_slotType);

  }

  if(m_slotTypeVersionHasBeenSet)
  {
   payload.WithString("slotTypeVersion", m_slotTypeVersion);

  }

  if(m_valueElicitationPromptHasBeenSet)
  {
   payload.WithObject("valueElicitationPrompt", m_valueElicitationPrompt.Jsonize());

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
   for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
   {
     sampleUtterancesJsonList[sampleUtterancesIndex].AsString(m_sampleUtterances[sampleUtterancesIndex]);
   }
   payload.WithArray("sampleUtterances", std::move(sampleUtterancesJsonList));

  }

  if(m_responseCardHasBeenSet)
  {
   payload.WithString("responseCard", m_responseCard);

  }

  if(m_obfuscationSettingHasBeenSet)
  {
   payload.WithString("obfuscationSetting", ObfuscationSettingMapper::GetNameForObfuscationSetting(m_obfuscationSetting));
  }

  if(m_defaultValueSpecHasBeenSet)
  {
   payload.WithObject("defaultValueSpec", m_defaultValueSpec.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
