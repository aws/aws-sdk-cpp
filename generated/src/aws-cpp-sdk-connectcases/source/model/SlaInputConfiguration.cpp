/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

SlaInputConfiguration::SlaInputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SlaInputConfiguration& SlaInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");
    m_fieldIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetFieldValues"))
  {
    Aws::Utils::Array<JsonView> targetFieldValuesJsonList = jsonValue.GetArray("targetFieldValues");
    for(unsigned targetFieldValuesIndex = 0; targetFieldValuesIndex < targetFieldValuesJsonList.GetLength(); ++targetFieldValuesIndex)
    {
      m_targetFieldValues.push_back(targetFieldValuesJsonList[targetFieldValuesIndex].AsObject());
    }
    m_targetFieldValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetSlaMinutes"))
  {
    m_targetSlaMinutes = jsonValue.GetInt64("targetSlaMinutes");
    m_targetSlaMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SlaTypeMapper::GetSlaTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_targetFieldValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetFieldValuesJsonList(m_targetFieldValues.size());
   for(unsigned targetFieldValuesIndex = 0; targetFieldValuesIndex < targetFieldValuesJsonList.GetLength(); ++targetFieldValuesIndex)
   {
     targetFieldValuesJsonList[targetFieldValuesIndex].AsObject(m_targetFieldValues[targetFieldValuesIndex].Jsonize());
   }
   payload.WithArray("targetFieldValues", std::move(targetFieldValuesJsonList));

  }

  if(m_targetSlaMinutesHasBeenSet)
  {
   payload.WithInt64("targetSlaMinutes", m_targetSlaMinutes);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SlaTypeMapper::GetNameForSlaType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
