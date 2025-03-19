/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Property.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Property::Property(JsonView jsonValue)
{
  *this = jsonValue;
}

Property& Property::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Required"))
  {
    m_required = jsonValue.GetBool("Required");
    m_requiredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PropertyTypes"))
  {
    Aws::Utils::Array<JsonView> propertyTypesJsonList = jsonValue.GetArray("PropertyTypes");
    for(unsigned propertyTypesIndex = 0; propertyTypesIndex < propertyTypesJsonList.GetLength(); ++propertyTypesIndex)
    {
      m_propertyTypes.push_back(PropertyTypeMapper::GetPropertyTypeForName(propertyTypesJsonList[propertyTypesIndex].AsString()));
    }
    m_propertyTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("AllowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsObject());
    }
    m_allowedValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataOperationScopes"))
  {
    Aws::Utils::Array<JsonView> dataOperationScopesJsonList = jsonValue.GetArray("DataOperationScopes");
    for(unsigned dataOperationScopesIndex = 0; dataOperationScopesIndex < dataOperationScopesJsonList.GetLength(); ++dataOperationScopesIndex)
    {
      m_dataOperationScopes.push_back(DataOperationMapper::GetDataOperationForName(dataOperationScopesJsonList[dataOperationScopesIndex].AsString()));
    }
    m_dataOperationScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue Property::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("Required", m_required);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_propertyTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyTypesJsonList(m_propertyTypes.size());
   for(unsigned propertyTypesIndex = 0; propertyTypesIndex < propertyTypesJsonList.GetLength(); ++propertyTypesIndex)
   {
     propertyTypesJsonList[propertyTypesIndex].AsString(PropertyTypeMapper::GetNameForPropertyType(m_propertyTypes[propertyTypesIndex]));
   }
   payload.WithArray("PropertyTypes", std::move(propertyTypesJsonList));

  }

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsObject(m_allowedValues[allowedValuesIndex].Jsonize());
   }
   payload.WithArray("AllowedValues", std::move(allowedValuesJsonList));

  }

  if(m_dataOperationScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataOperationScopesJsonList(m_dataOperationScopes.size());
   for(unsigned dataOperationScopesIndex = 0; dataOperationScopesIndex < dataOperationScopesJsonList.GetLength(); ++dataOperationScopesIndex)
   {
     dataOperationScopesJsonList[dataOperationScopesIndex].AsString(DataOperationMapper::GetNameForDataOperation(m_dataOperationScopes[dataOperationScopesIndex]));
   }
   payload.WithArray("DataOperationScopes", std::move(dataOperationScopesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
