/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/TablePropertyDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

TablePropertyDescription::TablePropertyDescription() : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_validValuesHasBeenSet(false)
{
}

TablePropertyDescription::TablePropertyDescription(JsonView jsonValue) : 
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_validValuesHasBeenSet(false)
{
  *this = jsonValue;
}

TablePropertyDescription& TablePropertyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidValues"))
  {
    Aws::Utils::Array<JsonView> validValuesJsonList = jsonValue.GetArray("ValidValues");
    for(unsigned validValuesIndex = 0; validValuesIndex < validValuesJsonList.GetLength(); ++validValuesIndex)
    {
      m_validValues.push_back(validValuesJsonList[validValuesIndex].AsString());
    }
    m_validValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TablePropertyDescription::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_validValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validValuesJsonList(m_validValues.size());
   for(unsigned validValuesIndex = 0; validValuesIndex < validValuesJsonList.GetLength(); ++validValuesIndex)
   {
     validValuesJsonList[validValuesIndex].AsString(m_validValues[validValuesIndex]);
   }
   payload.WithArray("ValidValues", std::move(validValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
