/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/Attribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

Attribute::Attribute() : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_dataType(NodeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

Attribute::Attribute(JsonView jsonValue) : 
    m_fullyQualifiedNameHasBeenSet(false),
    m_dataType(NodeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

Attribute& Attribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullyQualifiedName"))
  {
    m_fullyQualifiedName = jsonValue.GetString("fullyQualifiedName");

    m_fullyQualifiedNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = NodeDataTypeMapper::GetNodeDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetString("unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowedValues"))
  {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetDouble("min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetDouble("max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Attribute::Jsonize() const
{
  JsonValue payload;

  if(m_fullyQualifiedNameHasBeenSet)
  {
   payload.WithString("fullyQualifiedName", m_fullyQualifiedName);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", NodeDataTypeMapper::GetNameForNodeDataType(m_dataType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", m_unit);

  }

  if(m_allowedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("max", m_max);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
