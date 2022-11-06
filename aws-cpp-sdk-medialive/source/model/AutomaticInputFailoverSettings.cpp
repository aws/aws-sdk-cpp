/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AutomaticInputFailoverSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

AutomaticInputFailoverSettings::AutomaticInputFailoverSettings() : 
    m_errorClearTimeMsec(0),
    m_errorClearTimeMsecHasBeenSet(false),
    m_failoverConditionsHasBeenSet(false),
    m_inputPreference(InputPreference::NOT_SET),
    m_inputPreferenceHasBeenSet(false),
    m_secondaryInputIdHasBeenSet(false)
{
}

AutomaticInputFailoverSettings::AutomaticInputFailoverSettings(JsonView jsonValue) : 
    m_errorClearTimeMsec(0),
    m_errorClearTimeMsecHasBeenSet(false),
    m_failoverConditionsHasBeenSet(false),
    m_inputPreference(InputPreference::NOT_SET),
    m_inputPreferenceHasBeenSet(false),
    m_secondaryInputIdHasBeenSet(false)
{
  *this = jsonValue;
}

AutomaticInputFailoverSettings& AutomaticInputFailoverSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorClearTimeMsec"))
  {
    m_errorClearTimeMsec = jsonValue.GetInteger("errorClearTimeMsec");

    m_errorClearTimeMsecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failoverConditions"))
  {
    Aws::Utils::Array<JsonView> failoverConditionsJsonList = jsonValue.GetArray("failoverConditions");
    for(unsigned failoverConditionsIndex = 0; failoverConditionsIndex < failoverConditionsJsonList.GetLength(); ++failoverConditionsIndex)
    {
      m_failoverConditions.push_back(failoverConditionsJsonList[failoverConditionsIndex].AsObject());
    }
    m_failoverConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputPreference"))
  {
    m_inputPreference = InputPreferenceMapper::GetInputPreferenceForName(jsonValue.GetString("inputPreference"));

    m_inputPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secondaryInputId"))
  {
    m_secondaryInputId = jsonValue.GetString("secondaryInputId");

    m_secondaryInputIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomaticInputFailoverSettings::Jsonize() const
{
  JsonValue payload;

  if(m_errorClearTimeMsecHasBeenSet)
  {
   payload.WithInteger("errorClearTimeMsec", m_errorClearTimeMsec);

  }

  if(m_failoverConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failoverConditionsJsonList(m_failoverConditions.size());
   for(unsigned failoverConditionsIndex = 0; failoverConditionsIndex < failoverConditionsJsonList.GetLength(); ++failoverConditionsIndex)
   {
     failoverConditionsJsonList[failoverConditionsIndex].AsObject(m_failoverConditions[failoverConditionsIndex].Jsonize());
   }
   payload.WithArray("failoverConditions", std::move(failoverConditionsJsonList));

  }

  if(m_inputPreferenceHasBeenSet)
  {
   payload.WithString("inputPreference", InputPreferenceMapper::GetNameForInputPreference(m_inputPreference));
  }

  if(m_secondaryInputIdHasBeenSet)
  {
   payload.WithString("secondaryInputId", m_secondaryInputId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
