/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/Parameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

Parameter::Parameter() : 
    m_parameterNameHasBeenSet(false),
    m_parameterType(ParameterType::NOT_SET),
    m_parameterTypeHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_nodeTypeSpecificValuesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(IsModifiable::NOT_SET),
    m_isModifiableHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
}

Parameter::Parameter(JsonView jsonValue) : 
    m_parameterNameHasBeenSet(false),
    m_parameterType(ParameterType::NOT_SET),
    m_parameterTypeHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_nodeTypeSpecificValuesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(IsModifiable::NOT_SET),
    m_isModifiableHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Parameter& Parameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterType"))
  {
    m_parameterType = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("ParameterType"));

    m_parameterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterValue"))
  {
    m_parameterValue = jsonValue.GetString("ParameterValue");

    m_parameterValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeTypeSpecificValues"))
  {
    Aws::Utils::Array<JsonView> nodeTypeSpecificValuesJsonList = jsonValue.GetArray("NodeTypeSpecificValues");
    for(unsigned nodeTypeSpecificValuesIndex = 0; nodeTypeSpecificValuesIndex < nodeTypeSpecificValuesJsonList.GetLength(); ++nodeTypeSpecificValuesIndex)
    {
      m_nodeTypeSpecificValues.push_back(nodeTypeSpecificValuesJsonList[nodeTypeSpecificValuesIndex].AsObject());
    }
    m_nodeTypeSpecificValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = jsonValue.GetString("DataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedValues"))
  {
    m_allowedValues = jsonValue.GetString("AllowedValues");

    m_allowedValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsModifiable"))
  {
    m_isModifiable = IsModifiableMapper::GetIsModifiableForName(jsonValue.GetString("IsModifiable"));

    m_isModifiableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeType"))
  {
    m_changeType = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("ChangeType"));

    m_changeTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_parameterTypeHasBeenSet)
  {
   payload.WithString("ParameterType", ParameterTypeMapper::GetNameForParameterType(m_parameterType));
  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("ParameterValue", m_parameterValue);

  }

  if(m_nodeTypeSpecificValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeTypeSpecificValuesJsonList(m_nodeTypeSpecificValues.size());
   for(unsigned nodeTypeSpecificValuesIndex = 0; nodeTypeSpecificValuesIndex < nodeTypeSpecificValuesJsonList.GetLength(); ++nodeTypeSpecificValuesIndex)
   {
     nodeTypeSpecificValuesJsonList[nodeTypeSpecificValuesIndex].AsObject(m_nodeTypeSpecificValues[nodeTypeSpecificValuesIndex].Jsonize());
   }
   payload.WithArray("NodeTypeSpecificValues", std::move(nodeTypeSpecificValuesJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  if(m_allowedValuesHasBeenSet)
  {
   payload.WithString("AllowedValues", m_allowedValues);

  }

  if(m_isModifiableHasBeenSet)
  {
   payload.WithString("IsModifiable", IsModifiableMapper::GetNameForIsModifiable(m_isModifiable));
  }

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("ChangeType", ChangeTypeMapper::GetNameForChangeType(m_changeType));
  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
