/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ThemeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

ThemeValue::ThemeValue() : 
    m_childrenHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ThemeValue::ThemeValue(JsonView jsonValue) : 
    m_childrenHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ThemeValue& ThemeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("children"))
  {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("children");
    for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
    {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeValue::Jsonize() const
{
  JsonValue payload;

  if(m_childrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
   for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
   {
     childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
   }
   payload.WithArray("children", std::move(childrenJsonList));

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
