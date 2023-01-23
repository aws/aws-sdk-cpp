/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/EndpointSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

EndpointSetting::EndpointSetting() : 
    m_nameHasBeenSet(false),
    m_type(EndpointSettingTypeValue::NOT_SET),
    m_typeHasBeenSet(false),
    m_enumValuesHasBeenSet(false),
    m_sensitive(false),
    m_sensitiveHasBeenSet(false),
    m_unitsHasBeenSet(false),
    m_applicabilityHasBeenSet(false),
    m_intValueMin(0),
    m_intValueMinHasBeenSet(false),
    m_intValueMax(0),
    m_intValueMaxHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

EndpointSetting::EndpointSetting(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(EndpointSettingTypeValue::NOT_SET),
    m_typeHasBeenSet(false),
    m_enumValuesHasBeenSet(false),
    m_sensitive(false),
    m_sensitiveHasBeenSet(false),
    m_unitsHasBeenSet(false),
    m_applicabilityHasBeenSet(false),
    m_intValueMin(0),
    m_intValueMinHasBeenSet(false),
    m_intValueMax(0),
    m_intValueMaxHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointSetting& EndpointSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = EndpointSettingTypeValueMapper::GetEndpointSettingTypeValueForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnumValues"))
  {
    Aws::Utils::Array<JsonView> enumValuesJsonList = jsonValue.GetArray("EnumValues");
    for(unsigned enumValuesIndex = 0; enumValuesIndex < enumValuesJsonList.GetLength(); ++enumValuesIndex)
    {
      m_enumValues.push_back(enumValuesJsonList[enumValuesIndex].AsString());
    }
    m_enumValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sensitive"))
  {
    m_sensitive = jsonValue.GetBool("Sensitive");

    m_sensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Units"))
  {
    m_units = jsonValue.GetString("Units");

    m_unitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Applicability"))
  {
    m_applicability = jsonValue.GetString("Applicability");

    m_applicabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntValueMin"))
  {
    m_intValueMin = jsonValue.GetInteger("IntValueMin");

    m_intValueMinHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntValueMax"))
  {
    m_intValueMax = jsonValue.GetInteger("IntValueMax");

    m_intValueMaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointSetting::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", EndpointSettingTypeValueMapper::GetNameForEndpointSettingTypeValue(m_type));
  }

  if(m_enumValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enumValuesJsonList(m_enumValues.size());
   for(unsigned enumValuesIndex = 0; enumValuesIndex < enumValuesJsonList.GetLength(); ++enumValuesIndex)
   {
     enumValuesJsonList[enumValuesIndex].AsString(m_enumValues[enumValuesIndex]);
   }
   payload.WithArray("EnumValues", std::move(enumValuesJsonList));

  }

  if(m_sensitiveHasBeenSet)
  {
   payload.WithBool("Sensitive", m_sensitive);

  }

  if(m_unitsHasBeenSet)
  {
   payload.WithString("Units", m_units);

  }

  if(m_applicabilityHasBeenSet)
  {
   payload.WithString("Applicability", m_applicability);

  }

  if(m_intValueMinHasBeenSet)
  {
   payload.WithInteger("IntValueMin", m_intValueMin);

  }

  if(m_intValueMaxHasBeenSet)
  {
   payload.WithInteger("IntValueMax", m_intValueMax);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
