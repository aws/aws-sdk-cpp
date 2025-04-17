/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CaseSlaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CaseSlaConfiguration::CaseSlaConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CaseSlaConfiguration& CaseSlaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SlaTypeMapper::GetSlaTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetFieldValues"))
  {
    Aws::Utils::Array<JsonView> targetFieldValuesJsonList = jsonValue.GetArray("TargetFieldValues");
    for(unsigned targetFieldValuesIndex = 0; targetFieldValuesIndex < targetFieldValuesJsonList.GetLength(); ++targetFieldValuesIndex)
    {
      m_targetFieldValues.push_back(targetFieldValuesJsonList[targetFieldValuesIndex].AsObject());
    }
    m_targetFieldValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetSlaMinutes"))
  {
    m_targetSlaMinutes = jsonValue.GetInt64("TargetSlaMinutes");
    m_targetSlaMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue CaseSlaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SlaTypeMapper::GetNameForSlaType(m_type));
  }

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_targetFieldValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetFieldValuesJsonList(m_targetFieldValues.size());
   for(unsigned targetFieldValuesIndex = 0; targetFieldValuesIndex < targetFieldValuesJsonList.GetLength(); ++targetFieldValuesIndex)
   {
     targetFieldValuesJsonList[targetFieldValuesIndex].AsObject(m_targetFieldValues[targetFieldValuesIndex].Jsonize());
   }
   payload.WithArray("TargetFieldValues", std::move(targetFieldValuesJsonList));

  }

  if(m_targetSlaMinutesHasBeenSet)
  {
   payload.WithInt64("TargetSlaMinutes", m_targetSlaMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
