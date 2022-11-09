/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateDefaults.h>
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

TaskTemplateDefaults::TaskTemplateDefaults() : 
    m_defaultFieldValuesHasBeenSet(false)
{
}

TaskTemplateDefaults::TaskTemplateDefaults(JsonView jsonValue) : 
    m_defaultFieldValuesHasBeenSet(false)
{
  *this = jsonValue;
}

TaskTemplateDefaults& TaskTemplateDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultFieldValues"))
  {
    Aws::Utils::Array<JsonView> defaultFieldValuesJsonList = jsonValue.GetArray("DefaultFieldValues");
    for(unsigned defaultFieldValuesIndex = 0; defaultFieldValuesIndex < defaultFieldValuesJsonList.GetLength(); ++defaultFieldValuesIndex)
    {
      m_defaultFieldValues.push_back(defaultFieldValuesJsonList[defaultFieldValuesIndex].AsObject());
    }
    m_defaultFieldValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskTemplateDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_defaultFieldValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultFieldValuesJsonList(m_defaultFieldValues.size());
   for(unsigned defaultFieldValuesIndex = 0; defaultFieldValuesIndex < defaultFieldValuesJsonList.GetLength(); ++defaultFieldValuesIndex)
   {
     defaultFieldValuesJsonList[defaultFieldValuesIndex].AsObject(m_defaultFieldValues[defaultFieldValuesIndex].Jsonize());
   }
   payload.WithArray("DefaultFieldValues", std::move(defaultFieldValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
