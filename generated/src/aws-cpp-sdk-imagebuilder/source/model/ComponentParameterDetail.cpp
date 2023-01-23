/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentParameterDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ComponentParameterDetail::ComponentParameterDetail() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ComponentParameterDetail::ComponentParameterDetail(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentParameterDetail& ComponentParameterDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    Aws::Utils::Array<JsonView> defaultValueJsonList = jsonValue.GetArray("defaultValue");
    for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
    {
      m_defaultValue.push_back(defaultValueJsonList[defaultValueIndex].AsString());
    }
    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentParameterDetail::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_defaultValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValueJsonList(m_defaultValue.size());
   for(unsigned defaultValueIndex = 0; defaultValueIndex < defaultValueJsonList.GetLength(); ++defaultValueIndex)
   {
     defaultValueJsonList[defaultValueIndex].AsString(m_defaultValue[defaultValueIndex]);
   }
   payload.WithArray("defaultValue", std::move(defaultValueJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
