﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotValueElicitationSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotValueElicitationSetting::SlotValueElicitationSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

SlotValueElicitationSetting& SlotValueElicitationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultValueSpecification"))
  {
    m_defaultValueSpecification = jsonValue.GetObject("defaultValueSpecification");
    m_defaultValueSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotConstraint"))
  {
    m_slotConstraint = SlotConstraintMapper::GetSlotConstraintForName(jsonValue.GetString("slotConstraint"));
    m_slotConstraintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptSpecification"))
  {
    m_promptSpecification = jsonValue.GetObject("promptSpecification");
    m_promptSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleUtterances"))
  {
    Aws::Utils::Array<JsonView> sampleUtterancesJsonList = jsonValue.GetArray("sampleUtterances");
    for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
    {
      m_sampleUtterances.push_back(sampleUtterancesJsonList[sampleUtterancesIndex].AsObject());
    }
    m_sampleUtterancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("waitAndContinueSpecification"))
  {
    m_waitAndContinueSpecification = jsonValue.GetObject("waitAndContinueSpecification");
    m_waitAndContinueSpecificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotCaptureSetting"))
  {
    m_slotCaptureSetting = jsonValue.GetObject("slotCaptureSetting");
    m_slotCaptureSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slotResolutionSetting"))
  {
    m_slotResolutionSetting = jsonValue.GetObject("slotResolutionSetting");
    m_slotResolutionSettingHasBeenSet = true;
  }
  return *this;
}

JsonValue SlotValueElicitationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueSpecificationHasBeenSet)
  {
   payload.WithObject("defaultValueSpecification", m_defaultValueSpecification.Jsonize());

  }

  if(m_slotConstraintHasBeenSet)
  {
   payload.WithString("slotConstraint", SlotConstraintMapper::GetNameForSlotConstraint(m_slotConstraint));
  }

  if(m_promptSpecificationHasBeenSet)
  {
   payload.WithObject("promptSpecification", m_promptSpecification.Jsonize());

  }

  if(m_sampleUtterancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleUtterancesJsonList(m_sampleUtterances.size());
   for(unsigned sampleUtterancesIndex = 0; sampleUtterancesIndex < sampleUtterancesJsonList.GetLength(); ++sampleUtterancesIndex)
   {
     sampleUtterancesJsonList[sampleUtterancesIndex].AsObject(m_sampleUtterances[sampleUtterancesIndex].Jsonize());
   }
   payload.WithArray("sampleUtterances", std::move(sampleUtterancesJsonList));

  }

  if(m_waitAndContinueSpecificationHasBeenSet)
  {
   payload.WithObject("waitAndContinueSpecification", m_waitAndContinueSpecification.Jsonize());

  }

  if(m_slotCaptureSettingHasBeenSet)
  {
   payload.WithObject("slotCaptureSetting", m_slotCaptureSetting.Jsonize());

  }

  if(m_slotResolutionSettingHasBeenSet)
  {
   payload.WithObject("slotResolutionSetting", m_slotResolutionSetting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
