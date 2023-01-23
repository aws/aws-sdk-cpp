/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/VariableEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

VariableEntry::VariableEntry() : 
    m_nameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_variableTypeHasBeenSet(false)
{
}

VariableEntry::VariableEntry(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_variableTypeHasBeenSet(false)
{
  *this = jsonValue;
}

VariableEntry& VariableEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetString("dataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetString("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variableType"))
  {
    m_variableType = jsonValue.GetString("variableType");

    m_variableTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableEntry::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", m_dataType);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("dataSource", m_dataSource);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_variableTypeHasBeenSet)
  {
   payload.WithString("variableType", m_variableType);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
