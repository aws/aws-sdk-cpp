/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateDefaultFieldValue.h>
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

TaskTemplateDefaultFieldValue::TaskTemplateDefaultFieldValue() : 
    m_idHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

TaskTemplateDefaultFieldValue::TaskTemplateDefaultFieldValue(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

TaskTemplateDefaultFieldValue& TaskTemplateDefaultFieldValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetObject("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskTemplateDefaultFieldValue::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithObject("Id", m_id.Jsonize());

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
