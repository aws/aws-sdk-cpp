/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/Parameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

Parameter::Parameter() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
}

Parameter::Parameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Parameter& Parameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("MinimumEngineVersion"))
  {
    m_minimumEngineVersion = jsonValue.GetString("MinimumEngineVersion");

    m_minimumEngineVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  if(m_allowedValuesHasBeenSet)
  {
   payload.WithString("AllowedValues", m_allowedValues);

  }

  if(m_minimumEngineVersionHasBeenSet)
  {
   payload.WithString("MinimumEngineVersion", m_minimumEngineVersion);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
