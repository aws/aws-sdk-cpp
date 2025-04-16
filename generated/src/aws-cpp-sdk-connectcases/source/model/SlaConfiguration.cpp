/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SlaConfiguration.h>
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

SlaConfiguration::SlaConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SlaConfiguration& SlaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetString("completionTime");
    m_completionTimeHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = SlaStatusMapper::GetSlaStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("targetTime"))
  {
    m_targetTime = jsonValue.GetString("targetTime");
    m_targetTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SlaTypeMapper::GetSlaTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SlaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_completionTimeHasBeenSet)
  {
   payload.WithString("completionTime", m_completionTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SlaStatusMapper::GetNameForSlaStatus(m_status));
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

  if(m_targetTimeHasBeenSet)
  {
   payload.WithString("targetTime", m_targetTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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
