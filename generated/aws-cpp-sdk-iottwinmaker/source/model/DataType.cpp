﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DataType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

DataType::DataType() : 
    m_allowedValuesHasBeenSet(false),
    m_nestedTypeHasBeenSet(false),
    m_relationshipHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_unitOfMeasureHasBeenSet(false)
{
}

DataType::DataType(JsonView jsonValue) : 
    m_allowedValuesHasBeenSet(false),
    m_nestedTypeHasBeenSet(false),
    m_relationshipHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_unitOfMeasureHasBeenSet(false)
{
  *this = jsonValue;
}

DataType& DataType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowedValues"))
  {
    Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
    {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsObject());
    }
    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nestedType"))
  {
    m_nestedType.resize(1);
    m_nestedType[0] = jsonValue.GetObject("nestedType");

    m_nestedTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationship"))
  {
    m_relationship = jsonValue.GetObject("relationship");

    m_relationshipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unitOfMeasure"))
  {
    m_unitOfMeasure = jsonValue.GetString("unitOfMeasure");

    m_unitOfMeasureHasBeenSet = true;
  }

  return *this;
}

JsonValue DataType::Jsonize() const
{
  JsonValue payload;

  if(m_allowedValuesHasBeenSet)
  {
   Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
   for(unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex)
   {
     allowedValuesJsonList[allowedValuesIndex].AsObject(m_allowedValues[allowedValuesIndex].Jsonize());
   }
   payload.WithArray("allowedValues", std::move(allowedValuesJsonList));

  }

  if(m_nestedTypeHasBeenSet)
  {
   payload.WithObject("nestedType", m_nestedType[0].Jsonize());

  }

  if(m_relationshipHasBeenSet)
  {
   payload.WithObject("relationship", m_relationship.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  if(m_unitOfMeasureHasBeenSet)
  {
   payload.WithString("unitOfMeasure", m_unitOfMeasure);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
